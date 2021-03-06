/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutGeometryArray : NSObject <NSCopying> {
    int  _count;
    struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; } * _geometries;
}

@property (nonatomic, readonly) unsigned int count;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; })geometryAtIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithGeometries:(struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; }*)arg1 count:(unsigned int)arg2;

@end
