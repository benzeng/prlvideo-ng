
long * FUN_100267700(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  FUN_100249d00();
  if (*(int *)(*(long *)(param_2 + 0x48) + 4) != 0) {
    return param_1;
  }
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0xc);
  iVar3 = *(int *)(lVar4 + 8);
  lVar5 = (long)iVar3;
  uVar7 = 0xffffffff;
  if (iVar3 < iVar2) {
    lVar8 = lVar4 + 8 + lVar5 * 8;
    lVar6 = (long)iVar2 * 8 + lVar5 * -8;
    do {
      uVar7 = 0xffffffff;
      if (lVar6 == 0) goto LAB_100267786;
      lVar6 = lVar6 + -8;
      piVar1 = (int *)(lVar8 + 8);
      lVar8 = lVar8 + 8;
    } while (*piVar1 != 6);
    uVar7 = (undefined4)((ulong)(lVar8 - (lVar4 + 0x10 + lVar5 * 8)) >> 3);
LAB_100267786:
    if (iVar3 < iVar2) {
      lVar8 = lVar4 + 8 + lVar5 * 8;
      lVar6 = (long)iVar2 * 8 + lVar5 * -8;
      do {
        if (lVar6 == 0) goto LAB_1002677c4;
        lVar6 = lVar6 + -8;
        piVar1 = (int *)(lVar8 + 8);
        lVar8 = lVar8 + 8;
      } while (*piVar1 != 6);
      if ((int)((ulong)(lVar8 - (lVar4 + 0x10 + lVar5 * 8)) >> 3) != -1) goto LAB_100267806;
    }
  }
LAB_1002677c4:
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                "steps.indexOf( CTaskChangeVmState::ChangeVmState ) != -1",
                "Tasks/CTaskCreateSnapshot.cpp",0x3e,"getDefaultSubTaskList");
LAB_100267806:
  local_20[0] = 8;
  FUN_1002264f0(param_1,uVar7,local_20);
  local_24 = 9;
  FUN_1002264f0(param_1,uVar7,&local_24);
  local_28 = 10;
  FUN_1002264f0(param_1,uVar7,&local_28);
  local_2c = 7;
  FUN_1002264f0(param_1,uVar7,&local_2c);
  return param_1;
}

