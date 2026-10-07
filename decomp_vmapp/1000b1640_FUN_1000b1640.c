
void FUN_1000b1640(long param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1008e3970("","vm",0,"Setting process verbose log level. bVerboseLogEnabled=%d",param_2);
  bVar1 = (bool)CDispCommonPreferences::getDebug();
  CDspDebug::setVerboseLogEnabled(bVar1);
  iVar2 = FUN_1007da300("vm.log_level",0xffffffff);
  if (param_2 == '\0') {
    FUN_1008e4520(0xffffffff);
    iVar3 = FUN_1008e4540();
    if (iVar3 < iVar2) {
      FUN_1008e4520(iVar2);
    }
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    iVar3 = 3;
    if (2 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_1008e4520(iVar3);
    uVar5 = 2;
    uVar6 = 2;
  }
  FUN_1002d9f10(uVar6);
  puVar4 = (undefined4 *)FUN_1000e99d0(*(undefined8 *)(param_1 + 0x1158),0x206,0);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar5;
  }
  return;
}

