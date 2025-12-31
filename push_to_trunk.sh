#!/bin/zsh

# root directory
cd "$(dirname "$0")"

echo "💁💁💁 Please enter a tag name:"
read tag_name

echo "🚀🚀🚀 Push to remote github by tag..."
git tag "$tag_name"
if git push origin "$tag_name"; then
    echo "✅✅✅ Tag push successful!"
else
    echo "❌❌❌ Push to remote GitHub failed. Exit."
    exit 1
fi

echo "🔍🔍🔍 Local verification podspec..."
if pod lib lint --verbose --allow-warnings --skip-import-validation; then
    echo "✅✅✅ Local verification successful!"
else
    echo "❌❌❌ Local verification failed. Exit."
    exit 1
fi

echo "🌐🌐🌐 Networking verification podspec..."
if pod spec lint --verbose --allow-warnings --skip-import-validation; then
    echo "✅✅✅ Networking verification successful!"
else
    echo "❌❌❌ Networking verification failed. Exit."
    exit 1
fi

echo "🤖🤖🤖 Trunk me token, cocoapods.org..."
if pod trunk me; then
    echo "✅✅✅ Trunk token verification successful!"
else
    echo "❌❌❌ Trunk token verification failed. Exit."
    exit 1
fi

echo "⚡️⚡️⚡️ Pod trunk push..."
if pod trunk push ScanHelper.podspec --verbose --allow-warnings --skip-import-validation; then
    echo "✅✅✅ Pod trunk push successful!"
else
    echo "❌❌❌ Pod trunk push failed. Exit."
    exit 1
fi
