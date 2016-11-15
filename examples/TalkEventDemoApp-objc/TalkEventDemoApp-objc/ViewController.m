//
//  ViewController.m
//  TalkEventDemoApp-objc
//
//  Created by Jan Bürling on 15.11.16.
//  Copyright © 2016 talkevent. All rights reserved.
//

#import "ViewController.h"
#import <TalkEventSDK/TalkEventSDK-swift.h>

@interface ViewController () <TalkEventSDKDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *logoImageview;
@property (weak, nonatomic) IBOutlet UIButton *startButton;

@end

@implementation ViewController

#pragma mark - ViewLoadFunctions
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewDidAppear:(BOOL)animated {
    [self initStyling];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Actions
- (IBAction)didTabStartButton:(UIButton *)sender {
    TalkEventSDK *talkevent = [[TalkEventSDK alloc] initWithDelegate:(self)];
    [talkevent open];
}


#pragma mark - TalkEventSDKDelegate
- (void)talkEventFrameworkDoneWithError:(NSError *)error {
    UIStoryboard *storyboard = [UIStoryboard storyboardWithName: @"Main" bundle:nil];
    
    ViewController *vc = [storyboard instantiateInitialViewController];
    [UIApplication sharedApplication].keyWindow.rootViewController = vc;
}

#pragma mark - HelperFunctions
- (void)initStyling {
    self.view.backgroundColor = [UIColor colorWithRed: 52/255 green: 73/255 blue: 94/255 alpha: 1.0];
    self.logoImageview.image = [UIImage imageNamed: @"talkevent_logo"];
    self.startButton.backgroundColor = [UIColor clearColor];
    self.startButton.layer.cornerRadius = self.startButton.frame.size.height / 2;
    self.startButton.layer.borderWidth = 1;
    self.startButton.layer.borderColor = [UIColor whiteColor].CGColor;
}

@end
