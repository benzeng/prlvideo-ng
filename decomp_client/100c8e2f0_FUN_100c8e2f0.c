
undefined8
FUN_100c8e2f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             long *param_5)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  int local_1a0;
  int local_19c;
  char local_198 [9];
  char local_18f [2];
  char local_18d [243];
  undefined1 local_9a;
  undefined1 local_98 [96];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1a0 = 0;
  local_38 = lVar10;
  lVar5 = FUN_100c57ec0();
  lVar6 = FUN_100c57ec0();
  lVar7 = FUN_100c57ec0();
  if (((lVar5 == 0) || (lVar6 == 0)) || (lVar7 == 0)) {
    FUN_100c57f20(lVar5);
    FUN_100c57f20(lVar6);
    FUN_100c57f20(lVar7);
    FUN_100c62ee0(9,0x6d,0x41,"pem_lib.c",0x2af);
    uVar13 = 0;
    goto LAB_100c8e503;
  }
  local_9a = 0;
  uVar8 = FUN_100c58b50(param_1,local_198,0xfe);
  iVar3 = (int)uVar8;
  while (0 < iVar3) {
    if (-1 < (int)uVar8) {
      uVar11 = (long)(int)uVar8;
      do {
        if (' ' < local_198[uVar11]) {
          uVar8 = uVar11 & 0xffffffff;
          break;
        }
        uVar8 = uVar11 - 1;
        bVar2 = 0 < (long)uVar11;
        uVar11 = uVar8;
      } while (bVar2);
    }
    pcVar1 = local_198 + (long)(int)uVar8 + 1;
    pcVar1[0] = '\n';
    pcVar1[1] = '\0';
    iVar3 = _strncmp(local_198,"-----BEGIN ",0xb);
    if (iVar3 == 0) {
      sVar9 = _strlen(local_18d);
      lVar15 = sVar9 << 0x20;
      iVar3 = _strncmp(local_198 + (lVar15 + 0x500000000 >> 0x20),"-----\n",6);
      if (iVar3 == 0) {
        iVar3 = FUN_100c57f60(lVar5,lVar15 + 0x900000000 >> 0x20);
        lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (iVar3 == 0) {
          FUN_100c62ee0(9,0x6d,0x41,"pem_lib.c",0x2c7);
          goto LAB_100c8e4a4;
        }
        sVar9 = lVar15 + -0x600000000 >> 0x20;
        _memcpy(*(void **)(lVar5 + 8),local_18d,sVar9);
        *(undefined1 *)(*(long *)(lVar5 + 8) + sVar9) = 0;
        iVar3 = FUN_100c57f60(lVar6,0x100);
        if (iVar3 == 0) {
          uVar13 = 0x41;
          uVar16 = 0x2d1;
          goto LAB_100c8e9b4;
        }
        **(undefined1 **)(lVar6 + 8) = 0;
        uVar8 = FUN_100c58b50(param_1,local_198,0xfe);
        bVar2 = false;
        if (0 < (int)uVar8) {
          iVar3 = 0;
          goto LAB_100c8e5cd;
        }
        iVar3 = 0;
        goto LAB_100c8e72b;
      }
    }
    uVar8 = FUN_100c58b50(param_1,local_198,0xfe);
    iVar3 = (int)uVar8;
  }
  FUN_100c62ee0(9,0x6d,0x6c,"pem_lib.c",0x2b8);
LAB_100c8e492:
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  goto LAB_100c8e4a4;
  while( true ) {
    sVar9 = (long)iVar4 + 2;
    iVar4 = FUN_100c57f60(lVar6,(long)(iVar4 + 0xb + iVar3));
    if (iVar4 == 0) {
      FUN_100c62ee0(9,0x6d,0x41,"pem_lib.c",0x2e2);
      goto LAB_100c8e492;
    }
    iVar4 = _strncmp(local_198,"-----END ",9);
    if (iVar4 == 0) {
      bVar2 = true;
      goto LAB_100c8e72b;
    }
    iVar4 = (int)sVar9 + iVar3;
    _memcpy((void *)((long)iVar3 + *(long *)(lVar6 + 8)),local_198,sVar9);
    *(undefined1 *)(*(long *)(lVar6 + 8) + (long)iVar4) = 0;
    uVar8 = FUN_100c58b50(param_1,local_198,0xfe);
    iVar3 = iVar4;
    if ((int)uVar8 < 1) break;
LAB_100c8e5cd:
    if (-1 < (int)uVar8) {
      uVar11 = (long)(int)uVar8;
      do {
        if (' ' < local_198[uVar11]) {
          uVar8 = uVar11 & 0xffffffff;
          break;
        }
        uVar8 = uVar11 - 1;
        bVar2 = 0 < (long)uVar11;
        uVar11 = uVar8;
      } while (bVar2);
    }
    iVar4 = (int)uVar8;
    pcVar1 = local_198 + (long)iVar4 + 1;
    pcVar1[0] = '\n';
    pcVar1[1] = '\0';
    if (local_198[0] == '\n') break;
  }
  bVar2 = false;
LAB_100c8e72b:
  local_1a0 = 0;
  iVar4 = FUN_100c57f60(lVar7,0x400);
  if (iVar4 == 0) {
    uVar13 = 0x2f0;
LAB_100c8e78b:
    FUN_100c62ee0(9,0x6d,0x41,"pem_lib.c",uVar13);
    lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  else {
    **(undefined1 **)(lVar7 + 8) = 0;
    lVar15 = lVar7;
    lVar18 = lVar6;
    if (!bVar2) {
      do {
        iVar4 = FUN_100c58b50(param_1,local_198,0xfe);
        lVar15 = lVar6;
        lVar18 = lVar7;
        iVar3 = local_1a0;
        if (iVar4 < 1) goto LAB_100c8e913;
        lVar10 = (long)iVar4;
        do {
          lVar12 = lVar10;
          if (' ' < local_198[lVar10]) break;
          lVar12 = lVar10 + -1;
          bVar2 = 0 < lVar10;
          lVar10 = lVar12;
        } while (bVar2);
        local_198[(lVar12 << 0x20) + 0x100000000 >> 0x20] = '\n';
        iVar17 = (int)lVar12;
        local_198[(long)iVar17 + 2] = '\0';
        sVar9 = (long)iVar17 + 2;
        iVar4 = _strncmp(local_198,"-----END ",9);
        iVar14 = (int)sVar9;
        iVar3 = local_1a0;
        if ((0x41 < iVar14) || (iVar4 == 0)) goto LAB_100c8e913;
        iVar3 = FUN_100c58060(lVar7,(long)(iVar17 + 0xb + local_1a0));
        if (iVar3 == 0) {
          uVar13 = 0x306;
          goto LAB_100c8e78b;
        }
        _memcpy((void *)((long)local_1a0 + *(long *)(lVar7 + 8)),local_198,sVar9);
        *(undefined1 *)(*(long *)(lVar7 + 8) + (long)iVar14 + (long)local_1a0) = 0;
        local_1a0 = local_1a0 + iVar14;
      } while (iVar14 == 0x41);
      local_198[0] = '\0';
      iVar4 = FUN_100c58b50(param_1,local_198,0xfe);
      iVar3 = local_1a0;
      if (0 < iVar4) {
        lVar10 = (long)iVar4;
        do {
          lVar6 = lVar10;
          if (' ' < local_198[lVar10]) break;
          lVar6 = lVar10 + -1;
          bVar2 = 0 < lVar10;
          lVar10 = lVar6;
        } while (bVar2);
        local_198[(lVar6 << 0x20) + 0x100000000 >> 0x20] = '\n';
        local_198[(lVar6 << 0x20) + 0x200000000 >> 0x20] = '\0';
      }
    }
LAB_100c8e913:
    local_1a0 = iVar3;
    lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
    pcVar1 = *(char **)(lVar5 + 8);
    iVar3 = _strncmp(local_198,"-----END ",9);
    lVar6 = lVar15;
    lVar7 = lVar18;
    if (iVar3 == 0) {
      sVar9 = _strlen(pcVar1);
      iVar3 = _strncmp(pcVar1,local_18f,(long)(int)sVar9);
      if ((iVar3 != 0) ||
         (iVar3 = _strncmp(local_198 + ((long)((sVar9 << 0x20) + 0x900000000) >> 0x20),"-----\n",6),
         iVar3 != 0)) goto LAB_100c8e998;
      FUN_100c65440(local_98);
      iVar3 = FUN_100c65460(local_98,*(undefined8 *)(lVar18 + 8),&local_1a0,
                            *(undefined8 *)(lVar18 + 8),local_1a0);
      if (iVar3 < 0) {
        uVar13 = 100;
        uVar16 = 0x32d;
      }
      else {
        iVar3 = FUN_100c65800(local_98,(long)local_1a0 + *(long *)(lVar18 + 8),&local_19c);
        if (-1 < iVar3) {
          lVar12 = (long)local_1a0;
          local_1a0 = (int)(local_19c + lVar12);
          if (local_1a0 != 0) {
            *param_2 = *(undefined8 *)(lVar5 + 8);
            *param_3 = *(undefined8 *)(lVar15 + 8);
            *param_4 = *(undefined8 *)(lVar18 + 8);
            *param_5 = local_19c + lVar12;
            FUN_100bf3910();
            FUN_100bf3910(lVar15);
            FUN_100bf3910(lVar18);
            uVar13 = 1;
            goto LAB_100c8e503;
          }
          goto LAB_100c8e4a4;
        }
        uVar13 = 100;
        uVar16 = 0x332;
      }
    }
    else {
LAB_100c8e998:
      uVar13 = 0x66;
      uVar16 = 0x324;
    }
LAB_100c8e9b4:
    FUN_100c62ee0(9,0x6d,uVar13,"pem_lib.c",uVar16);
  }
LAB_100c8e4a4:
  FUN_100c57f20(lVar5);
  FUN_100c57f20(lVar6);
  FUN_100c57f20(lVar7);
  uVar13 = 0;
LAB_100c8e503:
  if (lVar10 == local_38) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

