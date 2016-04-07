//
//  EAColourfulProgressView.h
//  EAColourfulProgressViewExample
//
//  Created by Eddpt on 25/10/2014.
//  Copyright (c) 2014 xpto. All rights reserved.
//

@import UIKit;

typedef NS_ENUM(NSInteger, EAColourfulProgressViewType) {
  EAColourfulProgressViewType0to33 = 33,
  EAColourfulProgressViewType33to66 = 66,
  EAColourfulProgressViewType66to100 = 100
};

IB_DESIGNABLE
@interface EAColourfulProgressView : UIView

/**
 *  The current filling color is computed based on these colors.
 *  Depending on the current value, the final colour will be a colour
 *  created between any two of the following consecutive colours.
 */
@property (nonatomic, strong)  UIColor *initialFillColor;
@property (nonatomic, strong)  UIColor *oneThirdFillColor;
@property (nonatomic, strong)  UIColor *twoThirdsFillColor;
@property (nonatomic, strong)  UIColor *finalFillColor;

/**
 *  The container colour used as background colour for the progress view.
 */
@property (nonatomic, strong)  UIColor *containerColor;

/**
 *  The text colour for the labels, if they are enabled.
 */
@property (nonatomic, strong)  UIColor *labelTextColor;

/**
 *  The corner radius used for the progress view.
 */
@property (nonatomic, assign)  CGFloat cornerRadius;

/**
 *  The border thickness, between the progress view and the actual filling.
 */
@property (nonatomic, assign)  NSInteger borderLineWidth;

/**
 *  The current value that dictates how much is filled in the progress view.
 */
@property (nonatomic, assign)  NSInteger currentValue;

/**
 *  The maximum value allowed by this progress view.
 */
@property (nonatomic, assign)  NSUInteger maximumValue;

/**
 *  BOOL that dictactes whether or not the initial and final labels are shown.
 */
@property (nonatomic, assign)  BOOL showLabels;

/**
 *  This method updates the current value to the given one. It can
 *  animate the progress view filling size, as well as the background
 *  color change, if 'animated' is YES.
 *
 *  @param currentValue The new current value to be used.
 *  @param animated BOOL with YES if the update should be animated, NO otherwise.
 */
- (void)updateToCurrentValue:(NSInteger)currentValue animated:(BOOL)animated;

/// 默认蓝色视图配置
- (void)defaultBlueConfig;

@end
