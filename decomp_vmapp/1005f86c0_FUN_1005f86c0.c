
undefined8 FUN_1005f86c0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(param_1 + 0x90);
  local_38 = lVar1;
  if (lVar4 != param_1 + 0x88) {
    do {
      (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xa0))(local_48);
      iVar2 = FUN_1007ea6f0(lVar4 + 0x10,local_48);
      uVar3 = 1;
      if (iVar2 == 0) goto LAB_1005f8737;
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != param_1 + 0x88);
  }
  uVar3 = 0;
LAB_1005f8737:
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

