#!/bin/zsh

# root directory
cd "$(dirname "$0")"

echo "💁💁💁 Please enter a tag name:"
read tag_name

# Escape the tag_name to handle special characters
escaped_tag_name=$(printf '%s\n' "$tag_name" | sed -e "s/'/'\\\\''/g")

echo "♻️♻️♻️ Sync the spec.version by tag_name..."
awk -v new_tag="$escaped_tag_name" 'NR==4 {$0 = "  spec.version      = \x27" new_tag "\x27"} 1' ScanHelper.podspec > temp.podspec
mv temp.podspec ScanHelper.podspec

echo "🚀🚀🚀 Tag and push to remote github..."
git tag "$tag_name"
if git push origin "$tag_name"; then
    echo "Tag and push successful!"
else
    echo "⚠️⚠️⚠️ Push to remote GitHub failed. Exit."
    exit 1
fi

echo "🔍🔍🔍 Local verification podspec..."
if pod lib lint --verbose --allow-warnings --skip-import-validation; then
    echo "Local verification successful!"
else
    echo "⚠️⚠️⚠️ Local verification failed. Exit."
    exit 1
fi

echo "🌐🌐🌐 Networking verification podspec..."
if pod spec lint --verbose --allow-warnings --skip-import-validation; then
    echo "Networking verification successful!"
else
    echo "⚠️⚠️⚠️ Networking verification failed. Exit."
    exit 1
fi

echo "🤖🤖🤖 Trunk me token, cocoapods.org..."
if pod trunk me; then
    echo "Trunk token verification successful!"
else
    echo "⚠️⚠️⚠️ Trunk token verification failed. Exit."
    exit 1
fi

if ! pod repo list | grep -q 'ScanHelper'; then
    echo "⚡️⚡️⚡️ Repo add ScanHelper..."
    pod repo add ScanHelper https://github.com/a51095/ScanHelper.git
else
    echo "✅✅✅ Repo update ScanHelper..."
    pod repo update ScanHelper
fi

echo "⚡️⚡️⚡️ Pod trunk push..."
if pod trunk push ScanHelper.podspec --verbose --allow-warnings --skip-import-validation; then
    echo "Pod trunk push successful!"
else
    echo "⚠️⚠️⚠️ Pod trunk push failed. Exit."
    exit 1
fi

echo "⚡️⚡️⚡️ Repo push..."
if pod repo push ScanHelper ScanHelper.podspec --verbose --allow-warnings --skip-import-validation; then
    echo "Repo push successful!"
else
    echo "⚠️⚠️⚠️ Repo push failed. Exit."
    exit 1
fi
