
undefined8 FUN_1002b7790(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c280(uVar4);
  iVar2 = FUN_100321a90(uVar4,0);
  if (iVar2 != 1) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10018c280(uVar4);
    iVar2 = FUN_100321a90(uVar4,0);
    if (iVar2 == 2) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar3 = FUN_10018c280(uVar4);
      uVar5 = 0;
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018c2b0(uVar4);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getWin7Look();
      bVar1 = CVmWin7Look::isEnabled();
      FUN_100321630(uVar3,0,bVar1 ^ 1,0);
      CAbstractTask::clearSubTaskList();
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Windows 7 Look feature is inaccessible.");
      uVar5 = 0x80000009;
    }
  }
  return uVar5;
}

