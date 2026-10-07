
undefined8 * FUN_100259440(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  CVmSoundDevice *this;
  undefined8 *puVar2;
  CVmFloppyDisk *this_00;
  CVmOpticalDisk *this_01;
  CVmHardDisk *this_02;
  CVmGenericNetworkAdapter *this_03;
  CVmSerialPort *this_04;
  CVmParallelPort *this_05;
  CVmUsbDevice *this_06;
  CVmGenericPciDevice *this_07;
  CVmGenericScsiDevice *this_08;
  undefined8 *puVar3;
  
  switch(param_2) {
  case 3:
    this_00 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_00 == (CVmFloppyDisk *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmFloppyDisk::CVmFloppyDisk(this_00);
      cVar1 = FUN_10025c880(this_00,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_00 + 0x20))(this_00);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_00 + 0x20))(this_00);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_00;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  default:
    FUN_1008e3970("","LocalDevices",0,"Unsupported device type %d in CDeviceState",param_2);
    puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 1;
      puVar2[2] = 0;
      *puVar2 = &PTR_FUN_101115a78;
      puVar3 = puVar2;
    }
    *param_1 = puVar3;
    break;
  case 5:
    this_01 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_01 == (CVmOpticalDisk *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmOpticalDisk::CVmOpticalDisk(this_01);
      cVar1 = FUN_10025ce80(this_01,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_01 + 0x20))(this_01);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_01 + 0x20))(this_01);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_01;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 6:
    this_02 = operator_new(0x158,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_02 == (CVmHardDisk *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmHardDisk::CVmHardDisk(this_02);
      cVar1 = FUN_100098730(this_02,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_02 + 0x20))(this_02);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_02 + 0x20))(this_02);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_02;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 8:
    this_03 = operator_new(0x198,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_03 == (CVmGenericNetworkAdapter *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(this_03);
      cVar1 = FUN_10025d480(this_03,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_03 + 0x20))(this_03);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_03 + 0x20))(this_03);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_03;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 10:
    this_04 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_04 == (CVmSerialPort *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmSerialPort::CVmSerialPort(this_04);
      cVar1 = FUN_10025da80(this_04,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_04 + 0x20))(this_04);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_04 + 0x20))(this_04);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_04;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 0xb:
    this_05 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_05 == (CVmParallelPort *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmParallelPort::CVmParallelPort(this_05);
      cVar1 = FUN_100097d40(this_05,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_05 + 0x20))(this_05);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_05 + 0x20))(this_05);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_05;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 0xc:
  case 0xd:
    this = operator_new(0x110,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this == (CVmSoundDevice *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmSoundDevice::CVmSoundDevice(this);
      cVar1 = FUN_10025e080(this,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this + 0x20))(this);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this + 0x20))(this);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 0xf:
    this_06 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_06 == (CVmUsbDevice *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmUsbDevice::CVmUsbDevice(this_06);
      cVar1 = FUN_10007f380(this_06,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_06 + 0x20))(this_06);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_06 + 0x20))(this_06);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_06;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 0x11:
    this_07 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_07 == (CVmGenericPciDevice *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmGenericPciDevice::CVmGenericPciDevice(this_07);
      cVar1 = FUN_10025ec80(this_07,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_07 + 0x20))(this_07);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_07 + 0x20))(this_07);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_07;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
    break;
  case 0x12:
    this_08 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (this_08 == (CVmGenericScsiDevice *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_101115a78;
        puVar3 = puVar2;
      }
      *param_1 = puVar3;
    }
    else {
      CVmGenericScsiDevice::CVmGenericScsiDevice(this_08);
      cVar1 = FUN_10025e680(this_08,param_3);
      puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 1;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_101115a78;
          puVar2 = puVar3;
        }
        *param_1 = puVar2;
        (**(code **)(*(long *)this_08 + 0x20))(this_08);
      }
      else if (puVar3 == (undefined8 *)0x0) {
        (**(code **)(*(long *)this_08 + 0x20))(this_08);
        *param_1 = 0;
      }
      else {
        *(undefined4 *)(puVar3 + 1) = 1;
        puVar3[2] = this_08;
        *puVar3 = &PTR_FUN_101115a78;
        *param_1 = puVar3;
      }
    }
  }
  return param_1;
}

