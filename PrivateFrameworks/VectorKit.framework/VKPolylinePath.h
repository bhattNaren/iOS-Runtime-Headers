/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, VKPolylineTile;

@interface VKPolylinePath : NSObject {
    struct { 
        unsigned int index; 
        float offset; 
    struct { 
        unsigned int index; 
        float offset; 
    NSArray *_edges;
    BOOL _isMapMatched;
    BOOL _pathEntersTile;
    BOOL _pathExitsTile;
    unsigned int _pointCount;
    struct { float x1; float x2; } *_points;
    } _routeEnd;
    } _routeStart;
    double _simplifiedEpsilon;
    unsigned int _simplifiedIndexCount;
    unsigned int *_simplifiedIndices;
    VKPolylineTile *_tile;
    float _totalCost;
    BOOL _trafficSpeed;
}

@property(readonly) NSArray * edges;
@property(readonly) BOOL isMapMatched;
@property(readonly) BOOL pathEntersTile;
@property(readonly) BOOL pathExitsTile;
@property(readonly) unsigned int pointCount;
@property(readonly) struct { float x1; float x2; }* points;
@property struct { unsigned int x1; float x2; } routeEnd;
@property struct { unsigned int x1; float x2; } routeStart;
@property(readonly) double simplifiedEpsilon;
@property(readonly) unsigned int simplifiedIndexCount;
@property(readonly) const unsigned int* simplifiedIndices;
@property(readonly) VKPolylineTile * tile;
@property BOOL trafficSpeed;

- (id).cxx_construct;
- (float)_maxDistanceToEdgeOfTile;
- (void)_printPointsOnRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (void)addPoints:(const struct { float x1; float x2; }*)arg1 count:(unsigned int)arg2;
- (BOOL)addRoadEdge:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 prevEdge:(id)arg2 toList:(id)arg3 maxCost:(float)arg4;
- (void)assignPoints:(struct { float x1; float x2; }*)arg1 count:(unsigned int)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)arg2;
- (void)checkEdgeList:(id)arg1;
- (void)clearSimplification;
- (void)dealloc;
- (id)edges;
- (void)findEdges;
- (void)followEdge:(id)arg1 edgeList:(id)arg2;
- (id)initWithTile:(id)arg1;
- (struct { float x1; float x2; })interpolateAt:(const struct { unsigned int x1; float x2; }*)arg1;
- (BOOL)isMapMatched;
- (BOOL)pathEntersTile;
- (BOOL)pathExitsTile;
- (struct { unsigned int x1; float x2; })pathIndexFromRouteIndex:(struct { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (struct { float x1; float x2; }*)points;
- (void)postUpdate;
- (struct { unsigned int x1; float x2; })routeEnd;
- (struct { unsigned int x1; float x2; })routeStart;
- (void)setRouteEnd:(struct { unsigned int x1; float x2; })arg1;
- (void)setRouteStart:(struct { unsigned int x1; float x2; })arg1;
- (void)setTrafficSpeed:(BOOL)arg1;
- (double)simplifiedEpsilon;
- (unsigned int)simplifiedIndexCount;
- (const unsigned int*)simplifiedIndices;
- (void)simplifyWithEpsilon:(double)arg1;
- (void)sortCandidates:(id)arg1;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;
- (id)tile;
- (BOOL)trafficSpeed;

@end
