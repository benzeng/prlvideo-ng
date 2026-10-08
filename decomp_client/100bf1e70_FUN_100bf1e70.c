
uint FUN_100bf1e70(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_58 [48];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  iVar2 = FUN_100c62100(local_58,0x30);
  uVar3 = 0xffffffff;
  if (0 < iVar2) {
    uVar4 = FUN_100c26e20(local_58,0x30,*(undefined8 *)(param_1 + 0x2f8));
    *(undefined8 *)(param_1 + 0x2f8) = uVar4;
    _OPENSSL_cleanse(local_58,0x30);
    lVar5 = FUN_100cbce70(*(undefined8 *)(param_1 + 0x2f8),*(undefined8 *)(param_1 + 0x2d0),
                          *(undefined8 *)(param_1 + 0x2d8));
    *(long *)(param_1 + 0x2f0) = lVar5;
    uVar3 = -(uint)(lVar5 == 0) | 1;
  }
  if (lVar1 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

