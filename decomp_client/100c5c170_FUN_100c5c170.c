
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100c5c170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_848 = local_838;
  local_858[1] = 0x800;
  local_858[0] = 0;
  local_30 = lVar1;
  FUN_100bf3cd0("doapr()","b_print.c",0x32a);
  iVar2 = FUN_100c5c280(&local_848,local_858,local_858 + 1,local_840,local_85c,param_2,param_3);
  if (iVar2 == 0) {
    FUN_100bf3910(local_858[0]);
    uVar3 = 0xffffffff;
  }
  else {
    if (local_858[0] == 0) {
      uVar3 = FUN_100c58980(param_1,local_838,local_840[0]);
    }
    else {
      uVar3 = FUN_100c58980(param_1,local_858[0],local_840[0]);
      FUN_100bf3910(local_858[0]);
    }
    FUN_100bf3ed0();
  }
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

