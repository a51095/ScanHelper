#!/bin/zsh

# 为脚本添加可执行权限
chmod +x push_to_trunk.sh

# 获取要打的标签名
echo "请输入标签名:"
read tag_name

# 打标签并推送到远程仓库
git tag "$tag_name"
git push origin "$tag_name"

echo "本地验证 podspec..."
pod lib lint --verbose --allow-warnings --skip-import-validation

echo "联网验证 podspec..."
pod spec lint --verbose --allow-warnings --skip-import-validation

echo "trunk me token, cocoapods.org ..."
pod trunk me

echo "发布/更新 podspec..."
pod trunk push ScanHelper.podspec --verbose --allow-warnings --skip-import-validation
