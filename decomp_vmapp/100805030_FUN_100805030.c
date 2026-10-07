
undefined8 FUN_100805030(int *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  void *pvVar16;
  char *pcVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  undefined8 uVar22;
  void *local_140;
  long local_128;
  undefined1 *local_118;
  long local_108;
  undefined1 *local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  long local_38;
  
  lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar11 = *(long *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(lVar11 + 0x3f8);
  uVar13 = *(ulong *)(*(long *)(lVar11 + 0x3a8) + 0x40);
  uVar12 = *(undefined8 *)(lVar11 + 0x400);
  uVar9 = *(undefined4 *)(lVar11 + 0x408);
  lVar2 = *(long *)(lVar11 + 0x410);
  uVar10 = *(ulong *)(*(long *)(lVar11 + 0x3a8) + 0x48) & 4;
  uVar1 = param_1[0x32];
  local_38 = lVar20;
  if ((param_2 & 1) == 0) {
    uVar14 = uVar1 | 2;
    if (uVar10 == 0) {
      uVar14 = uVar1 & 0xfffffffd;
    }
    param_1[0x32] = uVar14;
    local_108 = *(long *)(param_1 + 0x3a);
    if ((local_108 == 0) || (bVar4 = true, **(int **)(param_1 + 2) == 0xfeff)) {
      local_108 = FUN_10088ae70();
      *(long *)(param_1 + 0x3a) = local_108;
      if (local_108 != 0) {
        bVar4 = false;
        if (**(int **)(param_1 + 2) != 0xfeff) goto LAB_100805277;
        local_128 = FUN_10088a690();
        if (local_128 == 0) goto LAB_100805409;
        *(long *)(param_1 + 0x3c) = local_128;
        bVar4 = false;
        goto LAB_10080529c;
      }
    }
    else {
LAB_100805277:
      local_128 = FUN_100811bd0(param_1 + 0x3c,0);
      if (local_128 != 0) {
LAB_10080529c:
        if (*(long *)(param_1 + 0x3e) != 0) {
          FUN_1008d7a40();
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
        }
        if (lVar2 != 0) {
          lVar11 = FUN_1008d79b0(*(undefined8 *)(lVar2 + 0x10));
          *(long *)(param_1 + 0x3e) = lVar11;
          if (lVar11 == 0) {
            uVar15 = 0x8e;
            uVar12 = 0x1bd;
            goto LAB_100805425;
          }
        }
        if (*param_1 != 0xfeff) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
        }
        lVar11 = *(long *)(param_1 + 0x20);
        local_140 = (void *)(lVar11 + 100);
        piVar19 = (int *)(lVar11 + 0x60);
LAB_100805303:
        if (bVar4) {
          FUN_10088b320(local_108);
          lVar11 = *(long *)(param_1 + 0x20);
        }
        pvVar3 = *(void **)(lVar11 + 0x3f0);
        iVar8 = *(int *)(lVar11 + 0x40c);
        *piVar19 = iVar8;
        iVar5 = FUN_100894670(uVar15);
        uVar13 = uVar13 & 2;
        if (uVar13 != 0) {
          lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x3a8);
          uVar10 = *(ulong *)(lVar11 + 0x40) & 8;
          iVar6 = 5;
          if ((uVar10 == 0) && (iVar6 = 8, *(long *)(lVar11 + 0x28) != 1)) {
            iVar6 = 7;
          }
          if (((iVar6 <= iVar5) && (iVar5 = 5, uVar10 == 0)) &&
             (iVar5 = 8, *(long *)(lVar11 + 0x28) != 1)) {
            iVar5 = 7;
          }
        }
        uVar10 = FUN_100894630(uVar15);
        iVar6 = 4;
        if ((uVar10 & 0xf0007) != 6) {
          iVar6 = FUN_100894660(uVar15);
        }
        if ((param_2 == 0x12) || (param_2 == 0x21)) {
          iVar18 = iVar8 * 2;
          iVar21 = iVar18 + iVar5 * 2;
          iVar7 = iVar21 + iVar6 * 2;
          pcVar17 = "client write key";
          bVar4 = true;
          pvVar16 = pvVar3;
        }
        else {
          pvVar16 = (void *)((long)pvVar3 + (long)iVar8);
          iVar18 = iVar5 + iVar8 * 2;
          iVar21 = iVar18 + iVar5 + iVar6;
          iVar7 = iVar21 + iVar6;
          pcVar17 = "server write key";
          bVar4 = false;
        }
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x3ec) < iVar7) {
          FUN_100887ce0(0x14,0xd1,0x44,"t1_enc.c",499);
          lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
          uVar22 = 0;
          goto LAB_1008058f5;
        }
        _memcpy(local_140,pvVar16,(long)iVar8);
        uVar10 = FUN_100894630(uVar15);
        if ((uVar10 & 0x200000) == 0) {
          uVar22 = 0;
          lVar11 = FUN_1008976e0(uVar9,0,local_140,*piVar19);
          if ((lVar11 == 0) || (iVar8 = FUN_1008977b0(local_128,0,uVar12,0,lVar11), iVar8 < 1)) {
            FUN_1008924e0(lVar11);
            FUN_100887ce0(0x14,0xd1,0x44,"t1_enc.c",0x1ff);
            lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1008058f5;
          }
          FUN_1008924e0(lVar11);
        }
        local_118 = (undefined1 *)((long)iVar21 + (long)pvVar3);
        if (uVar13 == 0) {
          lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
          local_100 = (undefined1 *)((long)iVar18 + (long)pvVar3);
        }
        else {
          uVar12 = FUN_1007f9770(param_1);
          lVar11 = *(long *)(param_1 + 0x20);
          uVar9 = FUN_100894670(uVar15);
          local_100 = local_78;
          iVar8 = FUN_100805940(uVar12,pcVar17,0x10,lVar11 + 0xc4,0x20,lVar11 + 0xa4,0x20,0,0,
                                (undefined1 *)((long)iVar18 + (long)pvVar3),iVar5,local_100,local_b8
                                ,uVar9);
          uVar22 = 0;
          if (iVar8 == 0) {
            lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1008058f5;
          }
          lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (0 < iVar6) {
            uVar12 = FUN_1007f9770(param_1);
            local_118 = local_d8;
            iVar8 = FUN_100805940(uVar12,"IV block",8,*(long *)(param_1 + 0x20) + 0xc4,0x20,
                                  *(long *)(param_1 + 0x20) + 0xa4,0x20,0,0,&DAT_100b4dd80,0,
                                  local_118,local_f8,iVar6 * 2);
            uVar22 = 0;
            if (iVar8 == 0) goto LAB_1008058f5;
            if (!bVar4) {
              local_118 = local_d8 + iVar6;
            }
          }
        }
        *(undefined4 *)(*(long *)(param_1 + 0x4c) + 4) = 0;
        uVar13 = FUN_100894630(uVar15);
        uVar22 = 0;
        if ((uVar13 & 0xf0007) == 6) {
          iVar8 = FUN_10088af10(local_108,uVar15,0,local_100,0,param_2 & 2);
          if ((iVar8 == 0) || (iVar8 = FUN_10088b3a0(local_108,0x12,iVar6,local_118), iVar8 == 0)) {
            FUN_100887ce0(0x14,0xd1,0x44,"t1_enc.c",0x23b);
            uVar22 = 0;
            goto LAB_1008058f5;
          }
        }
        else {
          iVar8 = FUN_10088af10(local_108,uVar15,0,local_100,local_118,param_2 & 2);
          if (iVar8 == 0) {
            FUN_100887ce0(0x14,0xd1,0x44,"t1_enc.c",0x240);
            goto LAB_1008058f5;
          }
        }
        uVar13 = FUN_100894630(uVar15);
        if ((((uVar13 & 0x200000) == 0) || (*piVar19 == 0)) ||
           (iVar8 = FUN_10088b3a0(local_108,0x17,*piVar19,local_140), iVar8 != 0)) {
          _OPENSSL_cleanse(local_78,0x40);
          _OPENSSL_cleanse(local_b8,0x40);
          _OPENSSL_cleanse(local_d8,0x20);
          _OPENSSL_cleanse(local_f8,0x20);
          uVar22 = 1;
          goto LAB_1008058f5;
        }
        uVar15 = 0x44;
        uVar12 = 0x248;
        goto LAB_100805425;
      }
    }
LAB_100805409:
    uVar15 = 0x41;
    uVar12 = 0x262;
  }
  else {
    uVar14 = uVar1 | 1;
    if (uVar10 == 0) {
      uVar14 = uVar1 & 0xfffffffe;
    }
    param_1[0x32] = uVar14;
    local_108 = *(long *)(param_1 + 0x34);
    bVar4 = true;
    if (local_108 == 0) {
      lVar11 = FUN_10081ddd0(0xa8,"t1_enc.c",0x17b);
      *(long *)(param_1 + 0x34) = lVar11;
      if (lVar11 == 0) goto LAB_100805409;
      FUN_10088ae60(lVar11);
      local_108 = *(long *)(param_1 + 0x34);
      bVar4 = false;
    }
    local_128 = FUN_100811bd0(param_1 + 0x36,0);
    if (local_128 == 0) goto LAB_100805409;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1008d7a40();
      param_1[0x38] = 0;
      param_1[0x39] = 0;
    }
    if (lVar2 == 0) {
LAB_10080523e:
      if (*param_1 != 0xfeff) {
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc) = 0;
      }
      lVar11 = *(long *)(param_1 + 0x20);
      local_140 = (void *)(lVar11 + 0x18);
      piVar19 = (int *)(lVar11 + 0x14);
      goto LAB_100805303;
    }
    lVar11 = FUN_1008d79b0(*(undefined8 *)(lVar2 + 0x10));
    *(long *)(param_1 + 0x38) = lVar11;
    if (lVar11 != 0) {
      if (*(long *)(*(long *)(param_1 + 0x20) + 0x140) == 0) {
        lVar11 = FUN_10081ddd0(0x4540,"t1_enc.c",0x194);
        *(long *)(*(long *)(param_1 + 0x20) + 0x140) = lVar11;
        if (lVar11 == 0) goto LAB_100805409;
      }
      goto LAB_10080523e;
    }
    uVar15 = 0x8e;
    uVar12 = 399;
  }
LAB_100805425:
  FUN_100887ce0(0x14,0xd1,uVar15,"t1_enc.c",uVar12);
  uVar22 = 0;
LAB_1008058f5:
  if (lVar20 == local_38) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

