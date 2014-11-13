//
//  ViewController.m
//  AirPlayService
//
//  Created by 陈双龙 on 14-11-7.
//  Copyright (c) 2014年 CVTE. All rights reserved.
//

#import "ViewController.h"
#import "AirPlayService.h"

@interface ViewController ()

@property (nonatomic, strong) AirPlayService *airPlayService;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self publichAirPlay];
}

- (void) publichAirPlay
{
    [self.airPlayService publishAirPlay:[UIDevice currentDevice].name];
}

- (AirPlayService*) airPlayService
{
    if ( nil == _airPlayService ) {
        _airPlayService = [[AirPlayService alloc] init];
    }
    
    return _airPlayService;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
