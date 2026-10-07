
undefined1 FUN_10057c5f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 local_31;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_31 = 0;
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  local_20 = lVar1;
  (**(code **)(*plVar2 + 0xb8))(local_30,plVar2,param_2,&local_31);
  if (lVar1 == local_20) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

