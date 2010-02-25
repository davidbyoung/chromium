// Copyright (c) 2009 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_BASE_NETWORK_CHANGE_NOTIFIER_WIN_H_
#define NET_BASE_NETWORK_CHANGE_NOTIFIER_WIN_H_

#include "base/basictypes.h"
#include "base/object_watcher.h"
#include "base/observer_list.h"
#include "net/base/network_change_notifier.h"

namespace net {

class NetworkChangeNotifierWin : public NetworkChangeNotifier {
 public:
  NetworkChangeNotifierWin();

  // Called by NetworkChangeNotifierWin::Impl.
  void OnIPAddressChanged() {
    FOR_EACH_OBSERVER(Observer, observers_, OnIPAddressChanged());
  }


  // NetworkChangeNotifier methods:

  virtual void AddObserver(Observer* observer) {
    observers_.AddObserver(observer);
  }

  virtual void RemoveObserver(Observer* observer) {
    observers_.RemoveObserver(observer);
  }

 private:
  class Impl;

  virtual ~NetworkChangeNotifierWin();

  // TODO(willchan): Fix the URLRequestContextGetter leaks and flip the false to
  // true so we assert that all observers have been removed.
  ObserverList<Observer, false> observers_;
  scoped_ptr<Impl> impl_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeNotifierWin);
};

}  // namespace net

#endif  // NET_BASE_NETWORK_CHANGE_NOTIFIER_WIN_H_
