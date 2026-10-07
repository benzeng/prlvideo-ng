
undefined1 FUN_10042ae10(char *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  undefined1 uVar4;
  undefined1 local_2098 [8200];
  undefined1 local_90 [88];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = 0;
  local_38 = lVar1;
  iVar2 = _open(param_1,0);
  if (iVar2 != -1) {
    FUN_100423700(local_90);
    sVar3 = _read(iVar2,local_2098,0x2000);
    if (0 < sVar3) {
      do {
        FUN_100423730(local_90,local_2098,1);
        sVar3 = _read(iVar2,local_2098,1);
      } while (0 < sVar3);
    }
    _close(iVar2);
    FUN_100423f40(param_2,local_90);
    uVar4 = 1;
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

