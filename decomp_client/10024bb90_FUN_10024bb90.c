
undefined1 FUN_10024bb90(long param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 0x3000000f) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10018f900(uVar4);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c2b0(uVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar3 = CVmRunTimeOptions::getUndoDisksMode();
    if (iVar3 != 0) {
      return 1;
    }
  }
  uVar2 = FUN_10024b520(param_1,param_2);
  return uVar2;
}

