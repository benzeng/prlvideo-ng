
undefined8 FUN_1007f9e10(long param_1)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar11 = 1;
  local_38 = lVar13;
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x3ec) != 0) goto LAB_1007fa235;
  uVar11 = 0;
  iVar4 = FUN_100814db0(*(undefined8 *)(param_1 + 0x130),&local_d0,&local_d8,0,0,&local_e0);
  if (iVar4 == 0) {
    uVar8 = 0x8a;
    uVar10 = 0x196;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(lVar7 + 0x3f8) = local_d0;
    *(undefined8 *)(lVar7 + 0x400) = local_d8;
    *(undefined8 *)(lVar7 + 0x410) = local_e0;
    iVar4 = FUN_1008946d0(local_d8);
    if (iVar4 < 0) goto LAB_1007fa235;
    iVar5 = FUN_100894670(local_d0);
    iVar6 = FUN_100894660(local_d0);
    iVar6 = iVar6 + iVar5 + iVar4;
    uVar3 = iVar6 * 2;
    lVar7 = *(long *)(param_1 + 0x80);
    if (*(void **)(lVar7 + 0x3f0) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(lVar7 + 0x3f0),(long)*(int *)(lVar7 + 0x3ec));
      FUN_10081e1a0(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x3f0));
      lVar7 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(lVar7 + 0x3f0) = 0;
    }
    *(undefined4 *)(lVar7 + 0x3ec) = 0;
    lVar7 = FUN_10081ddd0(uVar3,"s3_enc.c",0x1ab);
    if (lVar7 != 0) {
      lVar13 = *(long *)(param_1 + 0x80);
      *(uint *)(lVar13 + 0x3ec) = uVar3;
      *(long *)(lVar13 + 0x3f0) = lVar7;
      FUN_10088a650(local_98);
      FUN_100894730(local_98,8);
      FUN_10088a650(local_c8);
      if (0 < iVar6) {
        lVar13 = 0;
        uVar12 = 1;
        uVar9 = uVar3;
        do {
          if (0x10 < uVar12) {
            FUN_100887ce0(0x14,0xee,0x44,"s3_enc.c",0xb6);
            uVar11 = 0;
            goto LAB_1007fa1dd;
          }
          pvVar1 = (void *)(lVar7 + lVar13);
          _memset(local_48,(int)uVar12 + 0x40,uVar12);
          uVar11 = FUN_100891760();
          FUN_10088a720(local_c8,uVar11,0);
          FUN_10088a910(local_c8,local_48,uVar12);
          FUN_10088a910(local_c8,*(long *)(param_1 + 0x130) + 0x14,
                        (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10));
          FUN_10088a910(local_c8,*(long *)(param_1 + 0x80) + 0xa4,0x20);
          FUN_10088a910(local_c8,*(long *)(param_1 + 0x80) + 0xc4,0x20);
          FUN_10088a9c0(local_c8,local_68,0);
          uVar11 = FUN_100891710();
          FUN_10088a720(local_98,uVar11,0);
          FUN_10088a910(local_98,*(long *)(param_1 + 0x130) + 0x14,
                        (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10));
          FUN_10088a910(local_98,local_68,0x14);
          lVar13 = lVar13 + 0x10;
          if ((int)uVar3 < (int)lVar13) {
            FUN_10088a9c0(local_98,local_68,0);
            _memcpy(pvVar1,local_68,(ulong)uVar9);
          }
          else {
            FUN_10088a9c0(local_98,pvVar1,0);
          }
          uVar9 = uVar9 - 0x10;
          uVar12 = uVar12 + 1;
        } while ((int)lVar13 < (int)uVar3);
      }
      _OPENSSL_cleanse(local_68,0x14);
      FUN_10088aa50(local_98);
      FUN_10088aa50(local_c8);
      uVar11 = 1;
LAB_1007fa1dd:
      lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
      if ((*(byte *)(param_1 + 0x1a9) & 8) == 0) {
        lVar7 = *(long *)(param_1 + 0x80);
        *(undefined4 *)(lVar7 + 0xe4) = 1;
        lVar2 = *(long *)(*(long *)(param_1 + 0x130) + 0xe0);
        if ((lVar2 != 0) && ((lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 4 || (lVar2 == 0x20)))) {
          *(undefined4 *)(lVar7 + 0xe4) = 0;
        }
      }
      goto LAB_1007fa235;
    }
    uVar8 = 0x41;
    uVar10 = 0x1c8;
  }
  FUN_100887ce0(0x14,0x9d,uVar8,"s3_enc.c",uVar10);
LAB_1007fa235:
  if (lVar13 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

