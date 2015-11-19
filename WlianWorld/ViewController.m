//
//  ViewController.m
//  WlianWorld
//
//  Created by xmfish on 15/11/12.
//  Copyright © 2015年 ash. All rights reserved.
//

#import "ViewController.h"
#import "BaseViewModel.h"
#import "LoginViewModel.h"
#import "LoginViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.title = @"111";
    

    
    LoginViewController* loginVC = [[LoginViewController alloc] init];
    UINavigationController* nav = [[UINavigationController alloc] initWithRootViewController:loginVC];
    [self presentViewController:nav animated:YES completion:nil];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
