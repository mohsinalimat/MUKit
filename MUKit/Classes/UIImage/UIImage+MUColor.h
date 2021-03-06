//
//  UIImage+MUColor.h
//  Pods
//
//  Created by Jekity on 2017/9/15.
//
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MUGradientType) {
    MUGradientTypeTopToBottom      = 0,//从上到小
    MUGradientTypeLeftToRight      = 1,//从左到右
    MUGradientTypeUpleftToLowright = 2,//左上到右下
    MUGradientTypeUprightToLowleft = 3,//右上到左下
};
@interface UIImage (MUColor)
+ (UIImage *)imageFromGradientColorMu:(NSArray*)colors gradientType:(MUGradientType)gradientType imageSize:(CGSize)imageSize;
+ (UIImage *)imageFromColorMu:(UIColor*)color;
+ (BOOL)imageEqualToImageMu:(UIImage*)image anotherImage:(UIImage *)anotherImage;
+ (UIImage *)QRImageForStringMu:(NSString *)string imageSize:(CGSize)imageSize;//根据字符串生成二维码
+ (UIImage *)QRImageForStringMu:(NSString *)string logoImage:(UIImage *)logoImage imageSize:(CGSize)imageSize;//根据字符串生成二维码
+ (UIImage *)QRImageForStringMu:(NSString *)string imageSize:(CGSize)imageSize logoImage:(UIImage *)logoImage color:(UIColor *)color;//更改二维码的颜色
@end
