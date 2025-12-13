//
//  SceneDelegate.swift
//  demo
//
//  Created by well on 2025/12/10.
//

import UIKit

class SceneDelegate: UIResponder, UIWindowSceneDelegate {
    var window: UIWindow?
    
    func scene(_ scene: UIScene, willConnectTo session: UISceneSession,
               options connectionOptions: UIScene.ConnectionOptions) {
        guard let windowScene = (scene as? UIWindowScene) else { return }
        
        window = UIWindow(windowScene: windowScene)
        window?.frame = windowScene.coordinateSpace.bounds
        
        setupRootViewController()
        window?.makeKeyAndVisible()
    }
    
    private func setupRootViewController() {
        let rootViewController = ViewController()
        let navigationController = UINavigationController(rootViewController: rootViewController)
        window?.rootViewController = navigationController
    }
}
