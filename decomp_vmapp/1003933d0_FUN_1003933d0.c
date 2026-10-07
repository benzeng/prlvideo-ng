
int FUN_1003933d0(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_4d8 [184];
  undefined1 local_420 [184];
  undefined1 local_368 [184];
  undefined1 local_2b0 [184];
  undefined1 local_1f8 [32];
  int local_1d8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x58;
  FUN_1003a25c0(local_1f8,lVar1);
  FUN_1003a2020(local_4d8,lVar1);
  FUN_1003a2020(local_420,lVar1);
  FUN_1003a2020(local_368,lVar1);
  FUN_1003a2020(local_2b0,lVar1);
  iVar3 = FUN_1003a2ef0(param_1,param_2,param_3,param_4,local_1f8);
  if (iVar3 != 0) goto LAB_100393623;
  uVar4 = param_2 & 0xffff;
  if (uVar4 < 0x2e) {
    if (uVar4 < 0x11) {
      if (uVar4 == 1) {
        iVar3 = FUN_100393940(param_1,param_2,local_1f8,local_4d8);
      }
      else {
        if (uVar4 == 0x10) {
          FUN_100393870(param_1);
          goto LAB_100393600;
        }
LAB_1003935db:
        iVar3 = FUN_1003a3030(param_1,param_2,local_1f8,local_4d8);
      }
      if (iVar3 != 0) goto LAB_100393623;
    }
    else if (uVar4 == 0x11) {
      FUN_100393770(param_1);
    }
    else {
      if (uVar4 != 0x1c) goto LAB_1003935db;
      FUN_100393ba0(param_1);
    }
  }
  else if (uVar4 == 0x2e) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = FUN_1003a2680(local_1f8);
    uVar6 = FUN_1003a2750(local_1f8);
    uVar7 = FUN_1003a23f0(local_4d8);
    uVar8 = FUN_1003a2850(local_1f8);
    FUN_10038e8e0(uVar2,"%s = %sivec4(floor(%s + 0.5))%s;\n",uVar5,uVar6,uVar7,uVar8);
  }
  else if (uVar4 == 0x4e) {
    FUN_100393a70(param_1);
  }
  else {
    if (uVar4 != 0x5f) goto LAB_1003935db;
    FUN_100393c40(param_1);
  }
LAB_100393600:
  iVar3 = 0;
  if (local_1d8 != 0) {
    FUN_1003a29e0(local_1f8,*(undefined8 *)(param_1 + 0x28));
  }
LAB_100393623:
  FUN_1003a20d0(local_2b0);
  FUN_1003a20d0(local_368);
  FUN_1003a20d0(local_420);
  FUN_1003a20d0(local_4d8);
  FUN_1003a2670(local_1f8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

