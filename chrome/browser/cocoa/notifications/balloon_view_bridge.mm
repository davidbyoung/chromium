// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/cocoa/notifications/balloon_view_bridge.h"

#import <Cocoa/Cocoa.h>

BalloonViewBridge::BalloonViewBridge() :
    controller_(NULL) {
}

BalloonViewBridge::~BalloonViewBridge() {
}

void BalloonViewBridge::Close(bool by_user) {
  [controller_ closeBalloon:by_user];
}

gfx::Size BalloonViewBridge::GetSize() const {
  if (controller_)
    return gfx::Size([controller_ desiredTotalWidth],
                     [controller_ desiredTotalHeight]);
  else
    return gfx::Size();
}

void BalloonViewBridge::RepositionToBalloon() {
  [controller_ repositionToBalloon];
}

void BalloonViewBridge::Show(Balloon* balloon) {
  controller_ = [[BalloonController alloc] initWithBalloon:balloon];
  [controller_ repositionToBalloon];
  [controller_ showWindow:nil];
}

BalloonHost* BalloonViewBridge::GetHost() const {
  return [controller_ getHost];
}
