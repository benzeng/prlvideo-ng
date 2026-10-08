
int FUN_100bf1700(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_68 [56];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_2 = 0x73;
  local_30 = lVar1;
  if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
    iVar2 = (**(code **)(param_1 + 0x2b0))(param_1,param_2,*(undefined8 *)(param_1 + 0x2a8));
    if (iVar2 != 0) goto LAB_100bf17fb;
  }
  *param_2 = 0x50;
  iVar2 = 2;
  if ((((*(long *)(param_1 + 0x2d0) != 0) && (*(long *)(param_1 + 0x2d8) != 0)) &&
      (*(long *)(param_1 + 0x2e0) != 0)) && (*(long *)(param_1 + 0x308) != 0)) {
    iVar3 = FUN_100c62100(local_68,0x30);
    if (0 < iVar3) {
      uVar4 = FUN_100c26e20(local_68,0x30,0);
      *(undefined8 *)(param_1 + 0x300) = uVar4;
      _OPENSSL_cleanse(local_68,0x30);
      lVar5 = FUN_100cbca10(*(undefined8 *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x2d0),
                            *(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x308));
      *(long *)(param_1 + 0x2e8) = lVar5;
      iVar2 = (uint)(lVar5 == 0) * 2;
    }
  }
LAB_100bf17fb:
  if (lVar1 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

