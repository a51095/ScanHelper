#!/bin/zsh

# root directory
cd "$(dirname "$0")"

echo "💁💁💁 Please enter a tag name:"
read tag_name

echo "⚡️⚡️⚡️ Tag and push to remote github..."
git tag "$tag_name"
git push origin "$tag_name"

echo "🔍🔍🔍 Local verification podspec..."
pod lib lint --verbose --allow-warnings --skip-import-validation

echo "🌐🌐🌐 Networking verification podspec..."
pod spec lint --verbose --allow-warnings --skip-import-validation

echo "🤖🤖🤖 Trunk me token, cocoapods.org..."
pod trunk me

echo "🚀🚀🚀 Update podspec..."
pod trunk push ScanHelper.podspec --verbose --allow-warnings --skip-import-validation
