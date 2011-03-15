//
//  Authenticator.h
//  Pithos
//
//  Created by Alex Crichton on 3/11/11.
//  Copyright 2011 Carnegie Mellon University. All rights reserved.
//

#import <libxml/parser.h>

#import "Song.h"

@interface Pandora : NSObject {
  NSString *authToken;
  NSString *listenerID;
  NSMutableArray *stations;
}

@property (retain) NSString* authToken;
@property (retain) NSString* listenerID;
@property (retain) NSArray* stations;

- (BOOL) authenticate: (NSString*)user :(NSString*)pass;
- (BOOL) fetchStations;
- (NSMutableArray*) getFragment: (NSString*)station_id;
- (xmlDocPtr) sendRequest: (NSString*)method :(NSString*)data;
- (BOOL) sync;
- (BOOL) rateSong: (Song*)song : (NSString*)rating;

@end
