
undefined4 FUN_1003783a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1060 [8];
  long local_1058;
  long local_1048;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_10038e870(local_1060,local_1038,0x1000);
  iVar2 = FUN_100378470(param_1,param_2,param_3,local_1060);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = FUN_1003ac660(param_2);
    if (local_1058 == 0) {
      local_1058 = local_1048;
    }
    uVar3 = FUN_10036d620(uVar3,local_1058,0);
  }
  FUN_10038e8c0(local_1060);
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

