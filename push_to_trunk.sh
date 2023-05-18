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
git push origin "$tag_name"

echo "🔍🔍🔍 Local verification podspec..."
pod lib lint --verbose --allow-warnings --skip-import-validation

echo "🌐🌐🌐 Networking verification podspec..."
pod spec lint --verbose --allow-warnings --skip-import-validation

echo "🤖🤖🤖 Trunk me token, cocoapods.org..."
pod trunk me

echo "🎉🎉🎉 Update podspec..."
pod trunk push ScanHelper.podspec --verbose --allow-warnings --skip-import-validation
