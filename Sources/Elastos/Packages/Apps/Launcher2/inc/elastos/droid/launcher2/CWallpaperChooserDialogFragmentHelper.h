
#ifndef __ELASTOS_DROID_LAUNCHER2_CWALLPAPERCHOOSERDIALOGFRAGMENTHELPER_H__
#define __ELASTOS_DROID_LAUNCHER2_CWALLPAPERCHOOSERDIALOGFRAGMENTHELPER_H__

#include "_Elastos_Droid_Launcher2_CWallpaperChooserDialogFragmentHelper.h"
#include <elastos/core/Singleton.h>

namespace Elastos {
namespace Droid {
namespace Launcher2 {

CarClass(CWallpaperChooserDialogFragmentHelper)
    , public Singleton
    , public IWallpaperChooserDialogFragmentHelper
{
public:
    CAR_SINGLETON_DECL()

    CAR_INTERFACE_DECL()

    CARAPI NewInstance(
        /* [out] */ IWallpaperChooserDialogFragment** fragment);
};

} // namespace Launcher2
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_LAUNCHER2_CWALLPAPERCHOOSERDIALOGFRAGMENTHELPER_H__