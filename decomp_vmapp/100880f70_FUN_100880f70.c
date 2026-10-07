
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100880f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_85c [4];
  long local_858 [2];
  undefined1 *local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [2056];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_848 = local_838;
  local_858[1] = 0x800;
  local_858[0] = 0;
  local_30 = lVar1;
  FUN_10081e560("doapr()","b_print.c",0x32a);
  iVar2 = FUN_100881080(&local_848,local_858,local_858 + 1,local_840,local_85c,param_2,param_3);
  if (iVar2 == 0) {
    FUN_10081e1a0(local_858[0]);
    uVar3 = 0xffffffff;
  }
  else {
    if (local_858[0] == 0) {
      uVar3 = FUN_10087d780(param_1,local_838,local_840[0]);
    }
    else {
      uVar3 = FUN_10087d780(param_1,local_858[0],local_840[0]);
      FUN_10081e1a0(local_858[0]);
    }
    FUN_10081e760();
  }
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

