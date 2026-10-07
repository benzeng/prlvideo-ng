
uint FUN_1007d6e70(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint local_48 [6];
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  FUN_1007d6880(local_30,param_1);
  cVar2 = FUN_1007ea210(local_30);
  uVar3 = 0x40000000;
  if (cVar2 == '\0') {
    FUN_1007ea6d0(local_30,local_48);
    uVar3 = local_48[0] & 0x3fffffff | 0x40000000;
  }
  if (lVar1 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

