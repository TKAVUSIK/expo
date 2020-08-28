#import "ABI39_0_0AIRMapOverlayManager.h"

#import <ABI39_0_0React/ABI39_0_0RCTConvert+CoreLocation.h>
#import <ABI39_0_0React/ABI39_0_0RCTUIManager.h>
#import <ABI39_0_0React/ABI39_0_0UIView+React.h>
#import "ABI39_0_0AIRMapOverlay.h"

@interface ABI39_0_0AIRMapOverlayManager () <MKMapViewDelegate>

@end

@implementation ABI39_0_0AIRMapOverlayManager

ABI39_0_0RCT_EXPORT_MODULE()

- (UIView *)view
{
    ABI39_0_0AIRMapOverlay *overlay = [ABI39_0_0AIRMapOverlay new];
    overlay.bridge = self.bridge;
    return overlay;
}

ABI39_0_0RCT_REMAP_VIEW_PROPERTY(bounds, boundsRect, NSArray)
ABI39_0_0RCT_REMAP_VIEW_PROPERTY(image, imageSrc, NSString)

@end

