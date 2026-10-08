
CVmFloppyDisk * FUN_10010e020(undefined4 param_1,long *param_2)

{
  CVmPciVideoAdapter *this;
  
  this = (CVmPciVideoAdapter *)0x0;
  if (*(int *)(*param_2 + 4) != 0) {
    this = (CVmPciVideoAdapter *)0x0;
    switch(param_1) {
    case 3:
      this = operator_new(0xf0);
      CVmFloppyDisk::CVmFloppyDisk((CVmFloppyDisk *)this);
      FUN_100125090(this,param_2);
      break;
    case 5:
      this = operator_new(0xf0);
      CVmOpticalDisk::CVmOpticalDisk((CVmOpticalDisk *)this);
      FUN_100126290(this,param_2);
      break;
    case 6:
      this = operator_new(0x158);
      CVmHardDisk::CVmHardDisk((CVmHardDisk *)this);
      FUN_100126890(this,param_2);
      break;
    case 8:
      this = operator_new(0x198);
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter((CVmGenericNetworkAdapter *)this);
      FUN_100127a90(this,param_2);
      break;
    case 10:
      this = operator_new(0xf8);
      CVmSerialPort::CVmSerialPort((CVmSerialPort *)this);
      FUN_100126e90(this,param_2);
      break;
    case 0xb:
      this = operator_new(0xf8);
      CVmParallelPort::CVmParallelPort((CVmParallelPort *)this);
      FUN_100127490(this,param_2);
      break;
    case 0xc:
      this = operator_new(0x110);
      CVmSoundDevice::CVmSoundDevice((CVmSoundDevice *)this);
      FUN_100125690(this,param_2);
      break;
    case 0xf:
      this = operator_new(0xf0);
      CVmUsbDevice::CVmUsbDevice((CVmUsbDevice *)this);
      FUN_100125c90(this,param_2);
      break;
    case 0x11:
      this = operator_new(0xf8);
      CVmGenericPciDevice::CVmGenericPciDevice((CVmGenericPciDevice *)this);
      FUN_100128090(this,param_2);
      break;
    case 0x12:
      this = operator_new(0xf0);
      CVmGenericScsiDevice::CVmGenericScsiDevice((CVmGenericScsiDevice *)this);
      FUN_100128c90(this,param_2);
      break;
    case 0x14:
      this = operator_new(0xf8);
      CVmPciVideoAdapter::CVmPciVideoAdapter(this);
      FUN_100128690(this,param_2);
    }
  }
  return (CVmFloppyDisk *)this;
}

