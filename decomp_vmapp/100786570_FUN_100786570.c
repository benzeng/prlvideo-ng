
void FUN_100786570(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  void *pvVar7;
  size_t sVar8;
  undefined4 uVar9;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    iVar1 = _IORegistryEntryFromPath(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,param_1);
    if (iVar1 != 0) {
      lVar2 = _CFStringCreateWithCString(0,param_1 + 0x100,0x600);
      if (lVar2 != 0) {
        lVar3 = _IORegistryEntryCreateCFProperty
                          (iVar1,lVar2,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
        if (lVar3 != 0) {
          lVar4 = _CFGetTypeID(lVar3);
          lVar5 = _CFDataGetTypeID();
          if (lVar4 == lVar5) {
            sVar6 = _CFDataGetLength(lVar3);
            pvVar7 = (void *)_CFDataGetBytePtr(lVar3);
            sVar8 = 0x50;
            if ((long)sVar6 < 0x51) {
              sVar8 = sVar6;
            }
            uVar9 = 0x50;
            if ((long)sVar6 < 0x51) {
              uVar9 = (undefined4)sVar6;
            }
            _memcpy((void *)(param_1 + 0x150),pvVar7,sVar8);
            *(undefined4 *)(param_1 + 0x1a0) = uVar9;
            _CFRelease(lVar3);
          }
        }
        _CFRelease(lVar2);
      }
      _IOObjectRelease(iVar1);
      return;
    }
  }
  return;
}

