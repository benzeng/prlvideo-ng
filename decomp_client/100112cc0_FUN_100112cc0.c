
undefined8 FUN_100112cc0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = CVmConfiguration::getVmHardwareList();
  iVar4 = 0;
  if (*(int *)(*(long *)(lVar3 + 0x1b0) + 8) < *(int *)(*(long *)(lVar3 + 0x1b0) + 0xc)) {
    do {
      FUN_100129730((long *)(lVar3 + 0x1b0),iVar4);
      iVar2 = CVmDevice::getEmulatedType();
      if (iVar2 == 3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(lVar3 + 0x1b0);
    } while (iVar4 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8));
  }
  return 0;
}

