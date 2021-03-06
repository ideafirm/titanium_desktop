/*
 * Copyright (c) 2009-2010 Appcelerator, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SoundGStreamer_h
#define SoundGStreamer_h

#include "../Sound.h"

#include <gst/gst.h>
#include <kroll/kroll.h>

namespace Titanium {

class SoundGStreamer : public Sound {
public:
    SoundGStreamer(std::string& url);

    virtual void LoadImpl();
    virtual void UnloadImpl();
    virtual void PlayImpl();
    virtual void PauseImpl();
    virtual void StopImpl();
    virtual void SetVolumeImpl(double volume);
    virtual double GetVolumeImpl();

private:
    GstElement* pipeline;
    guint watchEventSourceId;
    std::string fileURL;
};

} // namespace Titanium

#endif
