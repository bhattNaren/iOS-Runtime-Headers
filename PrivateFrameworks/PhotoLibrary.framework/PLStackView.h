/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWStackTableView, <PLStackViewDataSource>, UILongPressGestureRecognizer, NSMutableArray, CADynamicsBehavior, NSMutableIndexSet, UIImage, UIView, UIImageView, NSMutableDictionary, NSArray;



@interface PLStackView : PLExpandableView <UITableViewDelegate, UITableViewDataSource>
{
    PLWStackTableView *_tableView;
    CADynamicsBehavior *_behavior;
    NSMutableArray *_springs;
    NSMutableArray *_bakedAngles;
    UILongPressGestureRecognizer *_pressRecognizer;
    NSUInteger _itemCount;
    <PLStackViewDataSource> *_dataSource;
    NSArray *_stackedViews;
    NSMutableIndexSet *_stackedItemIndexes;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableIndexSet *_badgedIndexes;
    UIImage *_badgeImage;
    NSMutableDictionary *_customBadgeImages;
    NSMutableArray *_selectionGestures;
    UIView *_singleTouchForwardingView;
    UIImage *_stackedImage;
    UIImageView *_stackedImageView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _expandedLayoutFrame;
    float _horizontalMargin;
    float _verticalMargin;
    NSUInteger _numColumns;
    NSUInteger _layoutCols;
    NSUInteger _layoutRows;
    struct CGSize { 
        float width; 
        float height; 
    } _collapsedImageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _expandedImageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredStackedImageSize;
    struct __CFDictionary { } *_viewsByIndex;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _displayedImageIndexes;
    float _pinchVelocity;
    float _previousExpansionFraction;
    float _currentExpansionFraction;
    double _centerXVelocity;
    double _centerYVelocity;
    double _lastTouchTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _previousPinchRect;
    float _initialWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentLayoutBounds;
    float _currentLayoutWidthSpace;
    float _currentLayoutHeightSpace;
    struct CGPoint { 
        float x; 
        float y; 
    } _currentLayoutOrigin;
    struct CGSize { 
        float width; 
        float height; 
    } _currentImageSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _tableViewContentOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tableViewContentInset;
    struct CGColorSpace { } *_deviceRGB;
    struct { 
        unsigned int allowsPinchToCollapse : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsSelectionGestures : 1; 
        unsigned int canCreateStackedImage : 1; 
        unsigned int showsTextBadges : 1; 
        unsigned int expandingItemImagesLoadSynchronously : 1; 
        unsigned int didStartExpand : 1; 
        unsigned int dontChangeTransforms : 1; 
        unsigned int handlingSingleTouch : 1; 
        unsigned int eventWasForwardedForSingleTouch : 1; 
        unsigned int firstPass : 1; 
        unsigned int dataSourceImplementsDataForImage : 1; 
        unsigned int dataSourceImplementsTextBadgeStringForImage : 1; 
        unsigned int dataSourceImplementsWillRemoveItemViewAtIndex : 1; 
        unsigned int replaceBitmapWithStackItemViews : 1; 
        unsigned int dragSelectionState : 2; 
        unsigned int expansionFractionIsDirty : 1; 
        unsigned int imageSizeIsDirty : 1; 
        unsigned int isDisplayingContextMenu : 1; 
        unsigned int useExpandedBoundsForPointInside : 1; 
        unsigned int preventReload : 1; 
        unsigned int needsReload : 1; 
        unsigned int debugDelegateSupportsSingleTaps : 1; 
        unsigned int showLoadingIndicator : 1; 
    } _stackFlags;
    NSMutableArray *_inProgressAnimationContexts;
}

@property <PLStackViewDataSource> *dataSource;
@property CGSize collapsedImageSize;
@property CGSize expandedImageSize;
@property UIEdgeInsets scrollViewContentInset;
@property BOOL canCreateStackedImage;
@property BOOL allowsPinchToCollapse;
@property BOOL showTextBadges;
@property BOOL expandingItemImagesLoadSynchronously;
@property(retain) UIImage *badgeImage;
@property(retain) NSIndexSet *badgedIndexes;
@property BOOL allowsSelection;
@property BOOL allowsSelectionGestures;
@property(retain) NSIndexSet *selectedIndexes;

+ (float)maxStackedAngle;
+ (id)selectionBadgeImage;
+ (void)initialize;
+ (void)_initializeSafeCategory;

- (void)setAllowsSelectionGestures:(BOOL)arg1;
- (void)firstTouchBegan:(id)arg1 withEvent:(id)arg2;
- (id)beginTrackingState:(NSInteger)arg1 withTouches:(id)arg2 event:(id)arg3;
- (NSInteger)snapState;
- (void)stateDidChangeFrom:(NSInteger)arg1;
- (float)continueTrackingState:(NSInteger)arg1 withTouches:(id)arg2 event:(id)arg3;
- (void)expandWithDuration:(double)arg1;
- (id)selectedIndexes;
- (BOOL)allowsSelectionGestures;
- (id)badgeImage;
- (BOOL)showTextBadges;
- (struct CGSize { float x1; float x2; })collapsedImageSize;
- (void)_calculateLayout;
- (void)reconfigureViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSuperview:(id)arg2;
- (void)reconfigureViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)parentTableViewCellWillChange:(id)arg1;
- (void)_reloadVisibleRows;
- (void)reloadItemAtIndex:(NSInteger)arg1;
- (void)unloadItemAtIndex:(NSInteger)arg1;
- (void)invalidateImagesForItemAtIndex:(NSInteger)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)_updateItemCount;
- (NSUInteger)itemCount;
- (NSUInteger)_numberOfRowsForNItems:(NSUInteger)arg1;
- (id)_imageViewForItemView:(id)arg1;
- (id)visibleStackItemViewAtIndex:(NSInteger)arg1;
- (void)scrollToItemAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (id)visibleItemViews;
- (void)_addAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_removeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_layoutStacked;
- (void)_tileStackItemsWithDuration:(double)arg1;
- (void)updateItemViewPositionForContractedState;
- (void)_setLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDuration:(double)arg2;
- (void)_setLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forState:(NSInteger)arg2 withDuration:(double)arg3;
- (id)itemViewAtIndex:(NSUInteger)arg1 loadSynchronously:(BOOL)arg2;
- (void)refreshStackedImage;
- (void)_invalidateStackedImage;
- (void)_updateStackedImageView;
- (BOOL)_stackedImageShouldBeSquare;
- (id)_createStackedImageWithViews:(id)arg1;
- (id)collapsedStackIndexes;
- (struct CGSize { float x1; float x2; })preferredStackedImageSize;
- (void)imageDidChangeForItemIndex:(NSUInteger)arg1;
- (void)_imageDidChangeForItemsAtIndexes:(id)arg1;
- (void)_tileStackItemsInTableView;
- (void)_updateDisplayedImageIndexes;
- (void)_beginExpansion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contractedLayoutBounds;
- (float)currentExpansionFraction;
- (struct CGPoint { float x1; float x2; })positionOfImageAtIndex:(NSInteger)arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfImageAtIndex:(NSInteger)arg1 inView:(id)arg2;
- (void)_moveItemsToTableView;
- (void)_moveItemsFromTableView;
- (id)imageItemViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setForwardingViewForTouches:(id)arg1 withEvent:(id)arg2;
- (void)willBeginForwardingTouchesToView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 usingProvidedTouches:(BOOL)arg3;
- (double)_updatePinchStateWithTouches:(id)arg1 event:(id)arg2;
- (float)completeTrackingToState:(NSInteger)arg1 withTouches:(id)arg2 duration:(double)arg3 event:(id)arg4;
- (void)longPressRecognized:(id)arg1;
- (id)singleTapForwardingViewForPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinchRect;
- (void)_addBehaviorToLayer:(id)arg1 withSprings:(id)arg2;
- (void)_removeBehavior;
- (void)_behaviorEnded:(BOOL)arg1;
- (void)_nudgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_cancelBehavior;
- (void)behaviorDidStop:(id)arg1;
- (void)setShowTextBadges:(BOOL)arg1;
- (void)_badgeChangeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_updateBadgesForOldIndexes:(id)arg1 newIndexes:(id)arg2 animated:(BOOL)arg3;
- (void)_updateBadgesForItemAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (id)badgedIndexes;
- (void)setBadgedIndexes:(id)arg1;
- (void)_shiftCustomBadgeImagesStartingAtIndex:(NSUInteger)arg1 by:(NSInteger)arg2;
- (void)setCustomBadgeImage:(id)arg1 forItemAtIndex:(NSUInteger)arg2;
- (void)setAllowsSelection:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showLoadingIndicatorWithAnimation:(NSInteger)arg1;
- (void)hideLoadingIndicatorWithAnimation:(NSInteger)arg1;
- (void)tapItem:(id)arg1;
- (void)pinch:(id)arg1;
- (void)_dragSelect:(id)arg1;
- (void)_setSelectedIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAll:(BOOL)arg1;
- (void)setSelectedIndexes:(id)arg1;
- (id)_setSelectionState:(NSInteger)arg1 forImageViewAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_deselectAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_displayContextMenu:(id)arg1;
- (void)_autohideMenu;
- (void)_hideMenu;
- (void)setCollapsedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setExpandedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })expandedImageSize;
- (void)setExpandedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollViewContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollViewContentInset;
- (void)setCanCreateStackedImage:(BOOL)arg1;
- (BOOL)canCreateStackedImage;
- (void)setAllowsPinchToCollapse:(BOOL)arg1;
- (BOOL)allowsPinchToCollapse;
- (void)setExpandingItemImagesLoadSynchronously:(BOOL)arg1;
- (BOOL)expandingItemImagesLoadSynchronously;
- (void)_scrollToItemAtIndex:(NSUInteger)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)_layoutItemViewsFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 inTableCell:(id)arg3 atRow:(NSUInteger)arg4;
- (struct CGSize { float x1; float x2; })_currentImageSize;
- (id)_stackedImage;
- (id)_stackedViews;
- (void)setBadgeImage:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)didMoveToSuperview;
- (void)copy:(id)arg1;
- (id)dataSource;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (BOOL)allowsSelection;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)_reloadDataIfNeeded;
- (NSInteger)orientation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (id)accessibilityContainer;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end