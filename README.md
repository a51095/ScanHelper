# ScanHelper
### `Swift5.0`，基于系统API封装的扫描二维码、条形码、等多种机器可读码，扫描组件


# 注意事项:
### ⚠️⚠️⚠️真机环境运行⚠️⚠️⚠️

###### 📣📣📣　platform:　`≥ iOS 13`
###### 📣📣📣　language:　`Swift`、`Objective-C`



# 一）预览图



- [默认样式](https://user-images.githubusercontent.com/29021369/135749766-db3ece15-19c2-4c76-bb38-8f43d51124d0.JPG)


- [外悬样式](https://user-images.githubusercontent.com/29021369/135749785-12cc5d39-2450-4be1-a3d9-382e26ebb565.JPG)


- [内嵌样式](https://user-images.githubusercontent.com/29021369/135749795-db065cd7-76fd-4ee8-998e-5e2529ca684b.JPG)


- [底部View自定义预览](https://user-images.githubusercontent.com/29021369/136018974-4939a657-a32f-4dec-a1a9-06c9db860fd8.JPG)


- [全部UI自定义预览](https://user-images.githubusercontent.com/29021369/136019235-45c7e752-2671-4f95-9ca3-c777ba6b2bd1.JPG)



# 二）组件特性

###### 💕　UI界面可完全自定义;
###### 🎉　使用简单,犹如芊芊少女般丝滑、流畅;
###### 🍀　严格遵守`Swift`代码规范,`Demo`工程`0`警告;
###### 💥　无内存泄漏问题,合理释放对象，及时回收内存资源;
###### 🏄　静态库`ScanHelperSDK.framework`,身轻如燕,仅`1.3`M大小;
###### 🏆　轻量级,只开启基础使用功能,仅占用`12 ~ 16`个内存, 启用全部功能, 内存占用在`120 ~ 130`之间;



# 三）功能列表

|        key         |          type           |                   des                    |     true     |   false    |
| :----------------: | :---------------------: | :--------------------------------------: | :----------: | :--------: |
|      isSingle      |          bool           |       是否仅识别单一结果,默认true        |   单一结果   |  多个结果  |
|      isSquare      |          bool           |       是否展示正方形边框,默认true        |     展示     |   不展示   |
|    isSingleFocu    |          bool           |        是否开启单点聚焦,默认false        |     开启     |    关闭    |
|    isAutoFocus     |          bool           |        是否开启自动对焦,默认true         |     开启     |  关闭   |
|    isAutoStop      |          bool           |        是否开启自动停止扫描,默认true         |     开启     |  关闭   |
|    isDoubleTap     |          bool           |        是否支持双击手势,默认true         |     支持     | 不支持  |
|       isZoom       |          bool           |        是否支持缩放手势,默认true         |     支持     |  不支持 |
|     isHasTorch     |          bool           |  是否支持光感检测,自动打开闪光灯,默认true  |     支持     |  不支持 |
|     isPromptBox    |          bool           |二维码类型,识别成功时,是否展示框选提示，默认true|     展示     |  不展示 |
|      isLimit       |          bool           |        是否自定义底部UI,默认false        |    自定义    |   默认UI   |
|   isUnrestrained   |          bool           |        是否完全自定义UI,默认false        |    自定义    |   默认UI   |
|     isDebug        |          bool           |        是否打印调试信息,默认true         |     打印     |  不打印  |
|    sound     	     |         String?         |         扫描提示音,默认nil              | Bundle有效资源展示 | 默认不展示 |
|   animationImage   |        UIImage？        |         扫描动画样式图,默认nil          | 有效资源展示 | 默认不显示 |
| brightnessMinValue |         Double          |    自动开启闪光灯亮度对比值,默认true     | 小于此值开启 |   默认-1   |
| brightnessMaxValue |         Double          |    自动关闭闪光灯亮度对比值,默认true     | 大于此值关闭 |   默认6    |
|       preset       | AVCaptureSession.Preset |               扫描质量             | inputPriority  |    默认    |



# 四）样式列表



|       key        |      type      |                     des                     |
| :--------------: | :------------: | :-----------------------------------------: |
|      margin      |      Int       |          距离左右边界间距(默认60)              |
|    lineHeight    |      Int       |            正方形边框粗细(默认0)               |
|    lineColor     |    UIColor     |          正方形边框颜色(默认clear)             |
|    angleColor    |    UIColor     |       正方形边框4个角颜色(默认orange)           |
|   angleLength    |      Int       |         正方形边框4个角长度(默认30)             |
|   angleHeight    |      Int       |         正方形边框4个角高度(默认4)             |
|    angleStyle    |   AngleStyle   |        正方形边框边角样式(默认重合)             |
|  animationStyle  | AnimationStyle |          扫码动画效果(默认无动画)              |
|  autoFocuStyle   | AutoFocuStyle  |        自动聚焦样式（提供默认样式）             |
|  highlightStyle  | HighlightStyle |    二维码扫描成功时，框选提示样式（提供默认样式）  |
|  animationImage  |    UIImage     | 扫码动画资源图片(可选值,若为空则无动画效果)       |
| unrecognizedArea |    UIColor     |    非识别区域背景色(默认黑色,0.5透明度)         |



# 五）结果列表



|     key      |            type             |      des       |
| :----------: | :-------------------------: | :------------: |
|    value     |           String            | 扫描结果字符串   |
| metadataType | AVMetadataObject.ObjectType |  扫描结果类型    |



# 六）集成方式

### 1）CocoaPods

```swift
pod 'ScanHelper'
```

### 2）手动导入

[ScanHelperSDK](https://github.com/a51095/ScanHelper/tree/main/lib)


###### 1)　下载静态资源包,`拷贝`导入到工程目录;
###### 2)　选中 `TARGETS` -> `Build Settings` -> `Framework Search Paths`;
###### 3)　配置添加进来的静态库路径;
###### 4)　配置证书,真机模式扫码调试;



# 七）导入头文件

###  1）`Swift` 项目
	import ScanHelperSDK
###  2）`Objective-C`　项目
	#import <ScanHelperSDK/ScanHelperSDK-Swift.h>

# 八）使用方法

### 1）基础使用（单一识别结果,默认使用方式）

``` swift
/// 让控制器持有scanHelper对象,不然会自动释放
let scanHelper = ScanHelper()
override func viewDidLoad() {
	super.viewDidLoad()
	scanHelper.start(supView: view) { [weak self] (res) in
		guard let self = self else { return }
		print(res)
		self.navigationController?.popViewController(animated: true)
	}
}
```

### 2）进阶使用（动画效果,使用属性,调整扫描框样式）

``` swift
/// 让控制器持有scanHelper对象,不然会自动释放
let scanHelper = ScanHelper()

override func viewDidLoad() {
	super.viewDidLoad()
	
	var config = ScanConfig()
	config.sound = Bundle.main.path(forResource: "scan_audio", ofType: "wav")
	config.animationImage = UIImage(named: "scan_animation")
	config.isAutoFocus = false
	config.isHasTorch = false
	config.isZoom = false
	config.isSingle = false
	
	config.scanStyle.lineColor = .purple
	config.scanStyle.angleStyle = .OutLine
	config.scanStyle.anmiationStyle = .LineCenter
	config.scanStyle.autoFocuStyle.lineColor = .blue
	
	// and so on ...
	
	scanHelper.start(supView: view, scanConfig: config) { [weak self] (res) in
		guard let self = self else { return }
		print(res)
		self.navigationController?.popViewController(animated: true)
	}
}
```

### 3）高阶使用(自定义UI、获取多个扫描结果)

``` swift
class ScanHelperViewController: UIViewController, ScanHelperDelegate {

	/// 让控制器持有scanHelper对象,不然会自动释放
	let scanHelper = ScanHelper()

	override func viewDidLoad() {
		super.viewDidLoad()
		defaultBackgroundColor()
		
		let config = ScanConfig()
		config.isUnrestrained = true
		
		// ⚠️⚠️⚠️scanHandler回调,仅获取单一扫描结果
		// 通过设置代理，获取多个扫描结果
		scanHelper.delegate = self
		scanHelper.start(supView: view, scanConfig: config)
	}

	// MARK: - 自定义底部视图(获取一个自定义view,从扫描框底部开始计算到父视图底部边缘区域视图)
	func scanLimit(_ bottomView: UIView) {
		bottomView.backgroundColor = .orange
	}

	// MARK: - 完全自定义UI视图(获取一个自定义view,frame大小同父视图bounds)
	func scanUnrestrained(_ fullView: UIView) {
		let v = UIView()
		v.frame = CGRect(x: 0, y: 0, width: 200, height: 200)
		fullView.addSubview(v)
	}

	// MARK: - 获取一个亮度值
	func scanCaptureOutput(_ brightnessValue: Double) {
		print(brightnessValue)
	}

	// MARK: - 多结果返回集合，ScanResult(⚠️⚠️⚠️仅多个结果才会执行此代理方法)
	func scanMetadataOutput(_ values: Array<ScanResult>) {
		print(values)
	}

	// MARK: 反初始化器
	deinit {
		print("ScanHelperViewController deinit")
	}
}
```


# 九）API引导

### 1）核心方法

``` swift
/**
 @method start:
 @param supView
    The incoming parent view.
 @param scanConfig
    ScanConfig (Default: ScanConfig()).     
 @param scanRegion
    The valid scanning area. The default size is the same as that of the parent view.     
 @param scanType
    The  supported recognizable scanning types are the same as the system API by default.
 @param scanHandler
    The scan result callback
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc func start(supView: UIView, scanConfig: ScanConfig, scanRegion: CGRect, scanType: [AVMetadataObject.ObjectType], scanHandler: ((ScanResult) -> Void)?)
```

``` swift
/**
 @method stop
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc func stop()
```



### 2）代理方法

``` swift
/**
 @method scanLimit:
 @param bottomView
    A view from the bottom of the scan box to the bottom area of the parent view.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func scanLimit(_ bottomView: UIView)

/**
 @method scanUnrestrained:
 @param fullView
    A view that is the same size as the parent view.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func scanUnrestrained(_ fullView: UIView)

/**
 @method scanCaptureOutput:
 @param brightnessValue
    A brightness value.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func scanCaptureOutput(_ brightnessValue: Double)

/**
 @method scanMetadataOutput:
 @param values
    An array of scan results.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func scanMetadataOutput(_ values: Array<ScanResult>)
```

### 3）闪光灯

``` swift
/**
 @method torchFlash:
 @param open
    A boolean value, the default is false.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func torchFlash(open: Bool)
```

### 4）识别照片内容api(可用于识别图片中二维码内容)

``` swift
/**
 @method detector:
 @param image
    A valid picture.
 @param ofType
    The type is used to specify the detection intent. (Default: CIDetectorTypeQRCode).
 @param context
    The context argument specifies the CIContext to be used to operate on the image. may be nil. (Default: nil).
 @param options
    The options parameter lets you optinally specify a accuracy / performance tradeoff. can be nil or an empty dictionary. (Default: [[CIDetectorAccuracy: CIDetectorAccuracyHigh]]).
 @result
    An array of CIFeature instances in the given image.
 @discussion
    None
 */
@available(iOS 13.0, *)
@objc optional func detector(image: UIImage, ofType: String, context: CIContext?, options: [String : Any]?) -> [CIFeature]?
```

