
undefined4 FUN_100bdc3d0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 local_108;
  ulong local_100;
  undefined1 local_f8 [48];
  int local_c8;
  undefined1 local_c4 [12];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar8;
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x1b8) != 0) {
    iVar3 = FUN_100bcfe80(param_1);
    uVar5 = 0;
    if (iVar3 == 0) goto LAB_100bdc62e;
  }
  puVar9 = local_b8;
  FUN_100c65850(local_f8);
  iVar3 = FUN_100beaa30(0,&local_100,&local_108);
  bVar1 = false;
  if (iVar3 != 0) {
    puVar9 = local_b8;
    uVar10 = 0;
    bVar1 = false;
    do {
      uVar2 = local_100;
      uVar6 = FUN_100bceee0(param_1);
      if ((uVar2 & uVar6) != 0) {
        iVar3 = FUN_100c6fc50(local_108);
        if (((iVar3 < 0) ||
            (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + uVar10 * 8) == 0)) ||
           ((int)&local_38 - (int)puVar9 < iVar3)) {
          bVar1 = true;
        }
        else {
          iVar4 = FUN_100c65d60(local_f8);
          if (iVar4 == 0) {
LAB_100bdc520:
            bVar1 = true;
          }
          else {
            iVar4 = FUN_100c65bc0(local_f8,puVar9,&local_c8);
            if ((iVar4 == 0) || (local_c8 != iVar3)) goto LAB_100bdc520;
          }
          puVar9 = puVar9 + iVar3;
        }
      }
      uVar10 = uVar10 + 1;
      iVar3 = FUN_100beaa30(uVar10 & 0xffffffff,&local_100,&local_108);
    } while (iVar3 != 0);
  }
  uVar7 = FUN_100bceee0(param_1);
  uVar10 = (long)puVar9 - (long)local_b8;
  iVar3 = FUN_100bdb0b0(uVar7,param_2,param_3,local_b8,uVar10 & 0xffffffff,0,0,0,0,
                        *(long *)(param_1 + 0x130) + 0x14,
                        *(undefined4 *)(*(long *)(param_1 + 0x130) + 0x10),param_4,local_c4,0xc);
  FUN_100c65c50(local_f8);
  _OPENSSL_cleanse(local_b8,(long)(int)uVar10);
  _OPENSSL_cleanse(local_c4,0xc);
  uVar5 = 0xc;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  if (bVar1) {
    uVar5 = 0;
  }
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100bdc62e:
  if (lVar8 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

