
undefined8 FUN_100da8db0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  do {
    iVar1 = FUN_100dab310(param_1);
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
      if (iVar1 == 1) {
        uVar2 = 0;
      }
      break;
    }
    uVar2 = FUN_100daafc0(param_1);
    if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
      FUN_100da96a0(param_1);
    }
    if (param_2 == 0) {
      ___strlcpy_chk(local_438,uVar2,0x400,0x400);
    }
    else {
      ___snprintf_chk(local_438,0x400,0,0x400,"%s/%s",param_2,uVar2);
    }
    iVar1 = FUN_100da9bb0(param_1,local_438);
    uVar2 = 0xffffffff;
  } while (iVar1 == 0);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

