
undefined1 FUN_1009d7c00(char *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  undefined1 uVar4;
  undefined1 local_2098 [8200];
  undefined1 local_90 [88];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar4 = 0;
  local_38 = lVar1;
  iVar2 = _open(param_1,0);
  if (iVar2 != -1) {
    FUN_1009d03c0(local_90);
    sVar3 = _read(iVar2,local_2098,0x2000);
    if (0 < sVar3) {
      do {
        FUN_1009d03f0(local_90,local_2098,1);
        sVar3 = _read(iVar2,local_2098,1);
      } while (0 < sVar3);
    }
    _close(iVar2);
    FUN_1009d0c00(param_2,local_90);
    uVar4 = 1;
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

