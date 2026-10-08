
bool FUN_1002383c0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = FUN_100319390(uVar4);
  if (lVar3 == 0) {
    bVar5 = false;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is not valid");
  }
  else {
    cVar1 = FUN_10018f900(lVar3);
    bVar5 = true;
    if (cVar1 == '\0') {
      FUN_10018c2b0(lVar3);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      iVar2 = CVmRunTimeOptions::getUndoDisksMode();
      bVar5 = iVar2 == 3;
    }
  }
  return bVar5;
}

