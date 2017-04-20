/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoListView : UIView {
    NSArray * _groupedInfos;
    NSArray * _infos;
    float  _interitemSpacing;
    float  _lineSpacing;
    int  _maxLineCount;
}

@property (nonatomic, copy) NSArray *groupedInfos;
@property (nonatomic, copy) NSArray *infos;
@property (nonatomic) float interitemSpacing;
@property (nonatomic) float lineSpacing;
@property (nonatomic) int maxLineCount;

+ (id)infoListViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)_maxWidthForGroupInfos:(id)arg1;
- (id)groupedInfos;
- (id)infos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interitemSpacing;
- (void)layoutSubviews;
- (float)lineSpacing;
- (int)maxLineCount;
- (void)setGroupedInfos:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setInteritemSpacing:(float)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setMaxLineCount:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end