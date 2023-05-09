#!/bin/zsh

# authorisation
chmod +x push_to_trunk.sh

# root directory
cd "$(dirname "$0")"

echo "💁💁💁 Please enter a label name:"
read tag_name

echo "⚡️⚡️⚡️ Label and push to remote github..."
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
