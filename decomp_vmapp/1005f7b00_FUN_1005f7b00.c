
undefined8 FUN_1005f7b00(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xa0))(local_38);
  iVar2 = FUN_1007ea6f0(param_1 + 0x62,local_38);
  uVar3 = 0x80019014;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  if (lVar1 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

