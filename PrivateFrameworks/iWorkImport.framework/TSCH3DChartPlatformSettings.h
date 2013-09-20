/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *mSettings;
}

+ (id)p_defaultSettingsDictionary;
+ (id)p_platformSettingsDictionary;
+ (int)p_platformSettingsType;
+ (id)sharedInstance;

- (float)backgroundLayoutContentsScaleFactor;
- (BOOL)backgroundLayoutUsesTiledRendering;
- (BOOL)buildImageDefaultAntialias;
- (unsigned int)buildImageTileSize;
- (unsigned int)buildMultisamples;
- (BOOL)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (BOOL)buildsCanUseDynamicShadows;
- (BOOL)buildsUseLowDetailedGeometries;
- (void)dealloc;
- (id)description;
- (unsigned int)highQualityShadowsSize;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)insertionIconSupersamplingSamples;
- (BOOL)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned int)interactiveCanvasMultisamples;
- (BOOL)interactiveModeUsesFastPerformanceHint;
- (BOOL)knobTrackingUsesRealTimePerformanceHint;
- (unsigned int)labelMaxTextureSize;
- (float)normalizedLabelPickingSlackForViewScale:(float)arg1 viewport:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (float)prefilteredLinesFilterRadius;
- (double)printingDPI;
- (unsigned int)printingMaxImageSize;
- (BOOL)protectCachedShaders;
- (unsigned int)resourceCacheMemoryLimitInBytes;
- (float)rotationTrackerSpeed;
- (BOOL)shouldHandleResourceCacheOutOfMemory;
- (BOOL)skipFirstMipmapLevel;
- (unsigned int)supersamplingSamples;
- (unsigned int)supersamplingTileSize;
- (BOOL)useHighQualityShadows;
- (BOOL)useInteractiveModeWhileSelected;
- (BOOL)useLayoutInwardForInsertionIcons;
- (BOOL)useTiledFullSizeInteractiveLayer;

@end