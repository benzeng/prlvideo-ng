
undefined1
FUN_1009d7cd0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 local_4b8 [1152];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_1009d7f10(local_4b8,param_1);
  cVar2 = FUN_1009d8550(local_4b8,param_2,param_3,param_4);
  uVar3 = 1;
  if (cVar2 == '\0') {
    uVar3 = FUN_1009d8c40(local_4b8,param_2,param_3,param_4);
  }
  FUN_1009d8190(local_4b8);
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

