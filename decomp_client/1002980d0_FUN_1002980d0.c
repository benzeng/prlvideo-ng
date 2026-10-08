
void FUN_1002980d0(long *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 == 0) {
    CAbstractTask::clearSubTaskList();
  }
  else {
    lVar5 = 0;
    if ((param_1[6] != 0) && (lVar5 = 0, *(int *)(param_1[6] + 4) != 0)) {
      lVar5 = param_1[7];
    }
    uVar1 = FUN_10038d0c0(lVar5);
    *(undefined1 *)((long)param_1 + 0x29) = uVar1;
  }
  lVar5 = 0;
  if ((param_1[6] != 0) && (lVar5 = 0, *(int *)(param_1[6] + 4) != 0)) {
    lVar5 = param_1[7];
  }
  cVar2 = FUN_10038d0e0(lVar5);
  uVar3 = extraout_RDX;
  if (cVar2 != '\0') {
    FUN_1002961c0(param_2 == 1,*(undefined1 *)((long)param_1 + 0x29));
    uVar3 = extraout_RDX_00;
  }
  uVar4 = 0x80000275;
  if (param_2 != 0) {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010029816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,uVar4,uVar3,*(code **)(*param_1 + 0xb0));
  return;
}

