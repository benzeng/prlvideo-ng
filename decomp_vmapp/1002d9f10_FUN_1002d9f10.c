
void FUN_1002d9f10(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_24 [4];
  
  if (param_1 < DAT_1011c5688) {
    param_1 = DAT_1011c5688;
  }
  DAT_1011c568c = param_1;
  if (*(long *)(DAT_1011c3698 + 0x1938) != 0) {
    *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2550) = param_1;
  }
  iVar1 = _IORegistryEntryFromPath
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,
                     "IOService:/IOResources/com_parallels_usb_control");
  if (iVar1 == 0) {
    if (-1 < (int)DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"Can\'t get io-registry entry from path");
      return;
    }
  }
  else {
    uVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,9,local_24);
    iVar2 = _IORegistryEntrySetCFProperty(iVar1,&cf_PrlUsbLogLevel,uVar3);
    _CFRelease(uVar3);
    _IOObjectRelease(iVar1);
    if ((iVar2 != 0) && (-1 < (int)DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"Can\'t set io-registry key %08X",iVar2);
    }
  }
  return;
}

