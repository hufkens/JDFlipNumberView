//
//  JDCountdownFlipView.h
//
//  Created by Markus Emrich on 12.03.11.
//  Copyright 2011 Markus Emrich. All rights reserved.
//


@interface JDDateCountdownFlipView : UIView

@property (nonatomic, strong) NSDate *targetDate;
@property (nonatomic, assign) NSUInteger zDistance;
@property (nonatomic, assign) BOOL isSecondsHidden;

- (id)initWithDayDigitCount:(NSInteger)dayDigits;
- (id)initWithDayDigitCount:(NSInteger)dayDigits
            imageBundleName:(NSString*)imageBundleName;

- (void)start;
- (void)stop;

- (void) addShadow:(UIColor*)color opacity:(CGFloat)opacity;

- (void)updateValuesAnimated:(BOOL)animated;

@end
