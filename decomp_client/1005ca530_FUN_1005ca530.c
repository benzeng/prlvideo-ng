
bool FUN_1005ca530(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar2 + 0x1b0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1b0) + 8)) {
    bVar3 = false;
  }
  else {
    CVmConfiguration::getVmHardwareList();
    iVar1 = CVmDevice::getEmulatedType();
    bVar3 = true;
    if (iVar1 != 3) {
      iVar1 = CVmDevice::getEmulatedType();
      bVar3 = iVar1 == 0;
    }
  }
  return bVar3;
}

