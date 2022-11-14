// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef DINPUTDEVICEKEYBOARD_H
#define DINPUTDEVICEKEYBOARD_H
#include "dinputdevice.h"
#include "dtkinputdevices_global.h"
DINPUTDEVICES_BEGIN_NAMESPACE
class DInputDeviceKeyboardPrivate;
class DInputDeviceKeyboard : public DInputDevice
{
    Q_OBJECT
public:
    explicit DInputDeviceKeyboard(QObject *parent = nullptr);

public Q_SLOTS:
    DExpected<void> reset() override;

private:
    QScopedPointer<DInputDeviceKeyboardPrivate> d_ptr;
    Q_DECLARE_PRIVATE(DInputDeviceKeyboard)
};

DINPUTDEVICES_END_NAMESPACE
#endif  // DINPUTDEVICEKEYBOARD_H