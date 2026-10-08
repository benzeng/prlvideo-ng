
void FUN_100aa2290(long param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100dda450(local_48,param_2 + 0x20);
  cVar1 = FUN_100deade0(local_48);
  if (cVar1 != '\0') {
    FUN_100deb2a0(param_1 + 0x34,param_2 + 0x20);
  }
  FUN_100dda450(local_58,param_2);
  cVar1 = FUN_100deade0(local_58);
  if (cVar1 != '\0') {
    FUN_100deb400(param_2);
  }
  uVar2 = FUN_100a6b290(param_2);
  *(undefined2 *)(param_2 + 0x50) = uVar2;
  uVar3 = 0;
  if (*param_3 != 0) {
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
  }
  FUN_100a6fab0(uVar3,param_2);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

