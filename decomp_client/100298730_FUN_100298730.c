
void FUN_100298730(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  uVar2 = FUN_10018c280(lVar3);
  iVar1 = FUN_100319ae0(uVar2);
  if (iVar1 == 0) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100298783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))(param_1,0x80000275);
      return;
    }
  }
  return;
}

