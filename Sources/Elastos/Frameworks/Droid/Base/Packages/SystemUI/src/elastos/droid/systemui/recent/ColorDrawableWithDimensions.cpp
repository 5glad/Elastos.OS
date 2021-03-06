//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#include "elastos/droid/systemui/recent/ColorDrawableWithDimensions.h"

namespace Elastos {
namespace Droid {
namespace SystemUI {
namespace Recent {

ColorDrawableWithDimensions::ColorDrawableWithDimensions()
    : mWidth(0)
    , mHeight(0)
{}

ECode ColorDrawableWithDimensions::constructor(
    /* [in] */ Int32 color,
    /* [in] */ Int32 width,
    /* [in] */ Int32 height)
{
    FAIL_RETURN(ColorDrawable::constructor(color));
    mWidth = width;
    mHeight = height;
    return NOERROR;
}

ECode ColorDrawableWithDimensions::GetIntrinsicWidth(
    /* [out] */ Int32* width)
{
    VALIDATE_NOT_NULL(width)
    *width = mWidth;
    return NOERROR;
}

ECode ColorDrawableWithDimensions::GetIntrinsicHeight(
    /* [out] */ Int32* height)
{
    VALIDATE_NOT_NULL(height)
    *height = mHeight;
    return NOERROR;
}

} // namespace Recent
} // namespace SystemUI
} // namespace Droid
} // namespace Elastos