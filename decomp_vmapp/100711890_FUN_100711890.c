
bool FUN_100711890(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = FUN_100710f90();
  bVar4 = false;
  if (cVar1 == '\0') {
    iVar2 = _IOPMFindPowerManagement(0);
    bVar4 = false;
    if (iVar2 != 0) {
      iVar3 = _IOPMSleepSystem(iVar2);
      _IOServiceClose(iVar2);
      bVar4 = iVar3 == 0;
    }
  }
  return bVar4;
}

