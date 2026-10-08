
undefined8 FUN_100bcef20(long param_1,uint param_2)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  void *pvVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  int iVar18;
  void *pvVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long local_d8;
  undefined1 local_b8 [48];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  long local_38;
  
  lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar6 = *(long *)(param_1 + 0x80);
  uVar13 = *(undefined8 *)(lVar6 + 0x3f8);
  uVar1 = *(ulong *)(*(long *)(lVar6 + 0x3a8) + 0x40);
  lVar15 = *(long *)(lVar6 + 0x400);
  local_38 = lVar17;
  if (lVar15 == 0) {
    FUN_100bf2cd0("s3_enc.c",0xeb,"m");
    lVar6 = *(long *)(param_1 + 0x80);
  }
  lVar7 = 0;
  if (*(long *)(lVar6 + 0x410) != 0) {
    lVar7 = *(long *)(*(long *)(lVar6 + 0x410) + 0x10);
  }
  if ((param_2 & 1) == 0) {
    local_d8 = *(long *)(param_1 + 0xe8);
    bVar10 = true;
    if (local_d8 == 0) {
      lVar6 = FUN_100bf3540(0xa8,"s3_enc.c",0x11e);
      *(long *)(param_1 + 0xe8) = lVar6;
      if (lVar6 == 0) {
LAB_100bcf15f:
        uVar13 = 0x41;
        uVar8 = 0x184;
        goto LAB_100bcf330;
      }
      FUN_100c66060(lVar6);
      local_d8 = *(long *)(param_1 + 0xe8);
      bVar10 = false;
    }
    lVar6 = FUN_100be7340(param_1 + 0xf0,lVar15);
    if (lVar6 == 0) {
      uVar13 = 0x44;
      uVar8 = 0x127;
LAB_100bcf330:
      FUN_100c62ee0(0x14,0x81,uVar13,"s3_enc.c",uVar8);
      uVar8 = 0;
      goto LAB_100bcf552;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_100cb4280();
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (lVar7 != 0) {
      lVar6 = FUN_100cb41f0(lVar7);
      *(long *)(param_1 + 0xf8) = lVar6;
      if (lVar6 == 0) {
        uVar13 = 0x8e;
        uVar8 = 0x134;
        goto LAB_100bcf330;
      }
    }
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = 0;
    lVar6 = *(long *)(param_1 + 0x80);
    pvVar14 = (void *)(lVar6 + 100);
  }
  else {
    local_d8 = *(long *)(param_1 + 0xd0);
    bVar10 = true;
    if (local_d8 == 0) {
      lVar6 = FUN_100bf3540(0xa8,"s3_enc.c",0xf7);
      *(long *)(param_1 + 0xd0) = lVar6;
      if (lVar6 == 0) goto LAB_100bcf15f;
      FUN_100c66060(lVar6);
      local_d8 = *(long *)(param_1 + 0xd0);
      bVar10 = false;
    }
    lVar6 = FUN_100be7340(param_1 + 0xd8,lVar15);
    if (lVar6 == 0) {
      uVar13 = 0x44;
      uVar8 = 0x101;
      goto LAB_100bcf330;
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_100cb4280();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    if (lVar7 == 0) {
      lVar6 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar6 = FUN_100cb41f0(lVar7);
      *(long *)(param_1 + 0xe0) = lVar6;
      if (lVar6 == 0) {
        uVar13 = 0x8e;
        uVar8 = 0x10e;
        goto LAB_100bcf330;
      }
      lVar6 = *(long *)(param_1 + 0x80);
      if (*(long *)(lVar6 + 0x140) == 0) {
        lVar7 = FUN_100bf3540(0x4000,"s3_enc.c",0x113);
        lVar6 = *(long *)(param_1 + 0x80);
        *(long *)(lVar6 + 0x140) = lVar7;
        if (lVar7 == 0) goto LAB_100bcf15f;
      }
    }
    *(undefined8 *)(lVar6 + 0xc) = 0;
    lVar6 = *(long *)(param_1 + 0x80);
    pvVar14 = (void *)(lVar6 + 0x18);
  }
  if (bVar10) {
    FUN_100c66520(local_d8);
    lVar6 = *(long *)(param_1 + 0x80);
  }
  pvVar2 = *(void **)(lVar6 + 0x3f0);
  iVar3 = FUN_100c6fc50(lVar15);
  uVar8 = 0;
  if (iVar3 < 0) {
    lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_100bcf552;
  }
  iVar4 = FUN_100c6fbf0(uVar13);
  uVar1 = uVar1 & 2;
  if (uVar1 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
    uVar12 = *(ulong *)(lVar6 + 0x40) & 8;
    iVar5 = 5;
    if ((uVar12 == 0) && (iVar5 = 8, *(long *)(lVar6 + 0x28) != 1)) {
      iVar5 = 7;
    }
    if (((iVar5 <= iVar4) && (iVar4 = 5, uVar12 == 0)) && (iVar4 = 8, *(long *)(lVar6 + 0x28) != 1))
    {
      iVar4 = 7;
    }
  }
  iVar5 = FUN_100c6fbe0(uVar13);
  if ((param_2 == 0x12) || (param_2 == 0x21)) {
    iVar18 = iVar3 * 2;
    iVar9 = iVar18 + iVar4 * 2;
    iVar11 = iVar9 + iVar5 * 2;
    lVar17 = *(long *)(param_1 + 0x80);
    lVar6 = lVar17 + 0xc4;
    lVar15 = lVar17 + 0xa4;
    pvVar19 = pvVar2;
  }
  else {
    pvVar19 = (void *)((long)iVar3 + (long)pvVar2);
    iVar18 = iVar4 + iVar3 * 2;
    iVar9 = iVar5 + iVar4 + iVar18;
    iVar11 = iVar9 + iVar5;
    lVar17 = *(long *)(param_1 + 0x80);
    lVar6 = lVar17 + 0xa4;
    lVar15 = lVar17 + 0xc4;
  }
  if (*(int *)(lVar17 + 0x3ec) < iVar11) {
    FUN_100c62ee0(0x14,0x81,0x44,"s3_enc.c",0x160);
    lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_100bcf552;
  }
  puVar20 = (undefined1 *)((long)iVar18 + (long)pvVar2);
  puVar16 = (undefined1 *)((long)iVar9 + (long)pvVar2);
  FUN_100c65850(local_b8);
  _memcpy(pvVar14,pvVar19,(long)iVar3);
  if (uVar1 == 0) {
LAB_100bcf4ca:
    lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
    puVar21 = puVar20;
  }
  else {
    puVar21 = local_78;
    uVar8 = FUN_100c6c960();
    FUN_100c65920(local_b8,uVar8,0);
    FUN_100c65b10(local_b8,puVar20,(long)iVar4);
    FUN_100c65b10(local_b8,lVar6,0x20);
    FUN_100c65b10(local_b8,lVar15,0x20);
    FUN_100c65bc0(local_b8,puVar21,0);
    if (0 < iVar5) {
      uVar8 = FUN_100c6c960();
      FUN_100c65920(local_b8,uVar8,0);
      FUN_100c65b10(local_b8,lVar6,0x20);
      FUN_100c65b10(local_b8,lVar15,0x20);
      puVar16 = local_88;
      FUN_100c65bc0(local_b8,puVar16,0);
      puVar20 = puVar21;
      goto LAB_100bcf4ca;
    }
    lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x130) + 4) = 0;
  FUN_100c66110(local_d8,uVar13,0,puVar21,puVar16,param_2 & 2);
  _OPENSSL_cleanse(local_78,0x40);
  _OPENSSL_cleanse(local_88,0x10);
  FUN_100c65c50(local_b8);
  uVar8 = 1;
LAB_100bcf552:
  if (lVar17 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

