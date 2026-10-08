
void FUN_100afa2b0(long param_1)

{
  CHwGenericDevice *pCVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  CHwGenericDevice *pCVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    return;
  }
  lVar5 = **(long **)(*(long *)(param_1 + 0x18) + 0x140);
  if (*(int *)(lVar5 + 0xc) != *(int *)(lVar5 + 8)) {
    return;
  }
  lVar5 = _IOServiceMatching("IOUSBInterface");
  if (lVar5 == 0) {
    return;
  }
  local_32 = 8;
  uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
  uVar6 = _CFNumberCreate(uVar7,1,&local_32);
  _CFDictionarySetValue(lVar5,&cf_bInterfaceClass,uVar6);
  local_32 = 4;
  uVar7 = _CFNumberCreate(uVar7,1,&local_32);
  _CFDictionarySetValue(lVar5,&cf_bInterfaceSubClass,uVar7);
  iVar3 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar5);
  if (iVar3 == 0) goto LAB_100afa486;
  pQVar8 = (QArrayData *)QString::fromAscii_helper("1.44 USB Floppy drive",0x15);
  pCVar1 = *(CHwGenericDevice **)(param_1 + 0x18);
  pCVar9 = operator_new(0xb8);
  iVar4 = *(int *)pQVar8;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar8;
  }
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  local_48 = pQVar8;
  local_40 = pQVar8;
  CHwGenericDevice::CHwGenericDevice(pCVar9,3,&local_40,&local_48);
  CHostHardwareInfo::addFloppyDisk(pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100afa429;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100afa429:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100afa459;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100afa459:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100afa486;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100afa486:
  _IOObjectRelease(iVar3);
  return;
}

