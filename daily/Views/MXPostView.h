//
//  MXPostView.h
//  daily
//
//  Created by mufeng on 15/7/30.
//  Copyright (c) 2015年 misery.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MXCollectionModel.h"

@class MXPostView;
@protocol MXPostViewDelegate <NSObject>
@optional
- (void)postView:(MXPostView *)postView didScrollToIndex:(NSInteger)index;
@end

@interface MXPostView : UIView<UICollectionViewDataSource,UICollectionViewDelegate>
@property (nonatomic, weak) id<MXPostViewDelegate> delegate;
- (instancetype)initWithFrame:(CGRect)frame stuff:(MXCollectionModel *)model lastScrollToIndex:(NSInteger)index delegate:(id<MXPostViewDelegate>)delegate;
@property (retain,nonatomic,readwrite) MXCollectionModel *collection;
@property (assign,nonatomic,readwrite) NSInteger index;
@end