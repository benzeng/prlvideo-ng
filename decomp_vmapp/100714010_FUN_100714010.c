
int FUN_100714010(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  FILE *pFVar10;
  char *pcVar11;
  size_t sVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0 [2];
  undefined1 local_1e8 [120];
  undefined1 local_170 [168];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  long local_38;
  
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar17;
  puVar6 = _malloc(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    param_2 = FUN_10071e690(0xfffffffe,0);
    goto LAB_100714572;
  }
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar16 = puVar6 + 1;
  puVar6[2] = puVar16;
  puVar6[1] = puVar16;
  pcVar7 = _malloc(0x400);
  if (pcVar7 == (char *)0x0) {
    param_2 = FUN_10071e690(0xfffffffe,0);
    goto LAB_100714331;
  }
  uVar2 = FUN_100714a30();
  if ((uVar2 < 9) && ((0x1a0U >> (uVar2 & 0x1f) & 1) != 0)) {
    ___snprintf_chk(pcVar7,0x3ff,0,0x400,"%s/history",PTR_DAT_10116e310);
    iVar3 = _stat_INODE64(pcVar7,&local_c8);
    if (iVar3 == 0) goto LAB_10071415f;
    piVar8 = ___error();
    if (*piVar8 == 2) {
      iVar3 = _mkdir(pcVar7,0x1ed);
      if (iVar3 != 0) {
        piVar8 = ___error();
        pcVar9 = _strerror(*piVar8);
        FUN_10071e690(0xfffffffc,"Error %s , can\'t create dir %s\n",pcVar9,pcVar7);
        _free(pcVar7);
        goto LAB_100714331;
      }
      goto LAB_10071415f;
    }
    piVar8 = ___error();
    pcVar11 = _strerror(*piVar8);
    pcVar15 = "Error %s in stat on dir %s\n";
    pcVar9 = pcVar7;
LAB_1007142fd:
    param_2 = FUN_10071e690(0xfffffffc,pcVar15,pcVar11,pcVar9);
  }
  else {
LAB_10071415f:
    ___snprintf_chk(pcVar7,0x3ff,0,0x400,"%s/history/key_history",PTR_DAT_10116e310);
    iVar3 = _open(pcVar7,0x282,0x180);
    if (-1 < iVar3) {
      _free(pcVar7);
      do {
        iVar4 = _flock(iVar3,6);
        if (-1 < iVar4) {
          if (param_2 == 0) goto LAB_100714257;
          goto LAB_100714240;
        }
        piVar8 = ___error();
      } while (*piVar8 != 4);
      piVar8 = ___error();
      if (*piVar8 == 0x23) {
        uVar13 = 0xfffffff7;
        goto LAB_10071431b;
      }
      piVar8 = ___error();
      pcVar7 = _strerror(*piVar8);
      param_2 = FUN_10071e690(0xfffffff7,"flock failed - %s",pcVar7);
      goto LAB_100714324;
    }
    piVar8 = ___error();
    lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*piVar8 != 0xd) {
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      pcVar15 = "Can\'t open or create file %s, with error %s";
      pcVar11 = pcVar7;
      goto LAB_1007142fd;
    }
    param_2 = FUN_10071e690(0xfffffff8,0);
  }
  _free(pcVar7);
LAB_100714331:
  if (param_2 != 0) {
    _free(puVar6);
    goto LAB_100714572;
  }
  goto LAB_100714343;
  while (piVar8 = ___error(), *piVar8 == 4) {
LAB_100714240:
    iVar4 = _ftruncate(iVar3,0);
    if (iVar4 == 0) break;
  }
LAB_100714257:
  pFVar10 = _fdopen(iVar3,"r+");
  *puVar6 = pFVar10;
  if (pFVar10 == (FILE *)0x0) {
    piVar8 = ___error();
    if (*piVar8 == 0xc) {
      uVar13 = 0xfffffffe;
    }
    else {
      _close(iVar3);
      uVar13 = 0xfffffffc;
    }
LAB_10071431b:
    param_2 = FUN_10071e690(uVar13,0);
LAB_100714324:
    lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_100714331;
  }
LAB_100714343:
  iVar3 = 0;
  while( true ) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_58 = 0;
    sVar12 = _fread(local_1f0,0x80,1,(FILE *)*puVar6);
    if ((sVar12 != 1) && (iVar4 = _feof((FILE *)*puVar6), iVar4 == 0)) {
      uVar13 = 0xfffffffc;
      goto LAB_10071452a;
    }
    iVar4 = _feof((FILE *)*puVar6);
    if (iVar4 != 0) {
      iVar4 = _fileno((FILE *)*puVar6);
      while ((iVar5 = _ftruncate(iVar4,(long)iVar3 << 7), iVar5 == -1 &&
             (piVar8 = ___error(), *piVar8 == 4))) {
        piVar8 = ___error();
        *piVar8 = 0;
      }
      *param_1 = puVar6;
      param_2 = 0;
      lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_100714572;
    }
    local_1f4 = 0;
    FUN_10088ae60(local_170);
    uVar13 = FUN_10088cc40();
    FUN_10088bc60(local_170,uVar13,0,&DAT_10116db10,&DAT_10116db20);
    FUN_10088b630(local_170,&local_c8,&local_1f4,local_1e8,local_1f0[0]);
    FUN_10088b8f0(local_170,(long)&local_c8 + (long)local_1f4,&local_1f8);
    local_1f4 = local_1f4 + local_1f8;
    FUN_10088b320(local_170);
    if (local_1f4 != 0x51) {
      uVar13 = 0xfffffff4;
      goto LAB_10071452a;
    }
    plVar14 = _malloc(0x20);
    if (plVar14 == (long *)0x0) goto LAB_1007144bb;
    pcVar7 = _strdup((char *)&local_c8);
    plVar14[2] = (long)pcVar7;
    pcVar7 = _strdup((char *)((long)&local_b8 + 1));
    plVar14[3] = (long)pcVar7;
    if ((pcVar7 == (char *)0x0) || (plVar14[2] == 0)) break;
    plVar14[1] = (long)puVar16;
    lVar17 = puVar6[1];
    *plVar14 = lVar17;
    *(long **)(lVar17 + 8) = plVar14;
    puVar6[1] = plVar14;
    puVar6[3] = plVar14;
    iVar3 = iVar3 + 1;
  }
  FUN_100713fa0(plVar14);
LAB_1007144bb:
  uVar13 = 0xfffffffe;
LAB_10071452a:
  param_2 = FUN_10071e690(uVar13,0);
  _fclose((FILE *)*puVar6);
  puVar1 = (undefined8 *)*puVar16;
  while (puVar1 != puVar16) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_100713fa0();
  }
  _free(puVar6);
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100714572:
  if (lVar17 == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

