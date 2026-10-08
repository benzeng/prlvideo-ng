
undefined1
FUN_1009d3ff0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 local_120 [248];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  FUN_1009d37a0(local_120,param_1,0,param_3,param_4,0,0);
  uVar2 = FUN_1009d3d80(local_120,param_2);
  FUN_1009d3bb0(local_120);
  if (lVar1 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

