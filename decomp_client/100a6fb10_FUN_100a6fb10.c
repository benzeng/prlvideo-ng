
bool FUN_100a6fb10(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  FUN_100dda450(local_30);
  cVar2 = FUN_100deade0(param_1 + 0x40);
  if (cVar2 == '\0') {
    cVar2 = FUN_100deade0(local_30);
    if (cVar2 == '\0') {
      iVar3 = FUN_100deb2c0(param_1 + 0x40,local_30);
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
  }
  if (lVar1 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

