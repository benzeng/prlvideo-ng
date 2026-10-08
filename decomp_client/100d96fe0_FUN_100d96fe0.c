
undefined1 FUN_100d96fe0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  size_t local_2d0;
  int local_2c8 [4];
  undefined1 local_2b8 [420];
  int local_114;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_2d0 = 0x288;
  local_30 = lVar1;
  ___bzero(local_2b8,0x288);
  local_2c8[0] = 1;
  local_2c8[1] = 0xe;
  local_2c8[2] = 1;
  uVar3 = 0;
  local_2c8[3] = param_2;
  iVar2 = _sysctl(local_2c8,4,local_2b8,&local_2d0,(void *)0x0,0);
  if ((iVar2 == 0) && (local_2d0 != 0)) {
    if (local_114 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100d96dd0(param_1);
    }
  }
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

