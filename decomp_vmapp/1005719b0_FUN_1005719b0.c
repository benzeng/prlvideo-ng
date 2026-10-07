
void FUN_1005719b0(long *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar3;
  if (param_1[600] != 0) {
    if (param_2 == '\0') {
      iVar2 = FUN_1005f49d0();
      if (iVar2 < 0) goto LAB_100571a36;
    }
    else {
      FUN_1005f4960();
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x38);
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0x40))(local_48);
  (*pcVar1)(param_1,local_48,param_2,param_3,param_4);
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100571a36:
  if (lVar3 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

