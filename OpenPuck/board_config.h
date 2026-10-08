#pragma once

#if defined(OPK_BOARD_MDBT50Q_CX_40) || defined(OPK_BOARD_PCA10059)
// The staged updater rewrites an Adafruit-format bootloader settings page.
#define OPK_HAS_ADAFRUIT_DFU 0
#else
#define OPK_HAS_ADAFRUIT_DFU 1
#endif
