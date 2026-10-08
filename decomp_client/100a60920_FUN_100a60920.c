
undefined8 * FUN_100a60920(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  QArrayData *pQVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  undefined *puVar16;
  size_t *psVar17;
  char *local_190;
  QArrayData *local_180;
  undefined1 local_178 [16];
  char *local_168;
  long local_160;
  undefined1 local_158 [16];
  char *local_148;
  size_t local_140;
  size_t local_138 [33];
  
  lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar15 = 0;
  local_138[0x20] = lVar13;
  do {
    pbVar4 = (byte *)_strchr((char *)param_2,0x3a);
    pbVar9 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      if (uVar15 == 0) {
        uVar5 = QString::fromAscii_helper((char *)0x0,-1);
        *param_1 = uVar5;
        goto LAB_100a60cb9;
      }
      break;
    }
    do {
      do {
        pbVar11 = pbVar9;
        pbVar9 = pbVar11 + 1;
      } while (*pbVar9 == 9);
    } while (*pbVar9 == 0x20);
    local_138[uVar15 * 4 + 2] = (size_t)pbVar9;
    pbVar1 = pbVar9;
    while ((pbVar8 = pbVar1, *pbVar8 != 0 && (*pbVar8 != 0x3b))) {
      pbVar1 = pbVar11 + 2;
      pbVar11 = pbVar8;
    }
    local_138[uVar15 * 4 + 3] = (long)pbVar8 - (long)pbVar9;
    pbVar9 = pbVar4;
    while ((param_2 <= pbVar9 &&
           ((0x3b < (ulong)*pbVar9 || ((0x800000100000200U >> ((ulong)*pbVar9 & 0x3f) & 1) == 0)))))
    {
      pbVar9 = pbVar9 + -1;
    }
    local_138[uVar15 * 4] = (size_t)(pbVar9 + 1);
    local_138[uVar15 * 4 + 1] = (long)pbVar4 - (long)(pbVar9 + 1);
    uVar15 = uVar15 + 1;
    param_2 = pbVar8;
  } while (uVar15 < 8);
  ppuVar6 = &PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
  local_190 = (char *)0x0;
  pcVar12 = (char *)0x0;
  if (PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0 != (undefined *)0x0) {
    local_190 = (char *)0x0;
    puVar16 = PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
    do {
      psVar17 = local_138 + 3;
      lVar13 = 0;
      uVar7 = uVar15;
      do {
        cVar2 = FUN_100a602a0(puVar16,psVar17[-3],psVar17[-2],local_158);
        if ((cVar2 != '\0') && (*psVar17 == local_140)) {
          iVar3 = _strncasecmp((char *)psVar17[-1],local_148,*psVar17);
          lVar13 = lVar13 + (ulong)(iVar3 == 0);
        }
        psVar17 = psVar17 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pcVar14 = local_190;
      if ((((lVar13 != 0) &&
           (cVar2 = FUN_100a602a0(*ppuVar6,"winln",5,local_178), pcVar12 = local_168, cVar2 != '\0')
           ) && (local_160 == 8)) &&
         (iVar3 = _strncasecmp("a00",local_168,3), pcVar14 = pcVar12, iVar3 == 0)) break;
      puVar16 = ppuVar6[1];
      ppuVar6 = ppuVar6 + 1;
      pcVar12 = (char *)0x0;
      local_190 = pcVar14;
    } while (puVar16 != (undefined *)0x0);
  }
  if (pcVar12 != (char *)0x0) {
    local_190 = pcVar12;
  }
  if (local_190 == (char *)0x0) {
    uVar5 = QString::fromAscii_helper((char *)0x0,-1);
    *param_1 = uVar5;
    lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
    goto LAB_100a60cb9;
  }
  QByteArray::QByteArray((QByteArray *)&local_180,local_190,8);
  lVar13 = 0;
  pQVar10 = local_180 + *(long *)(local_180 + 0x10);
  if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_180 + 4) != 0)) {
    lVar13 = 0;
    do {
      if (pQVar10[lVar13] == (QArrayData)0x0) break;
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 < *(uint *)(local_180 + 4));
  }
  pQVar10 = (QArrayData *)QString::fromAscii_helper((char *)pQVar10,(int)lVar13);
  lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_158[0] = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_158[0]) goto LAB_100a60c3c;
    }
    QArrayData::deallocate(local_180,1,8);
  }
LAB_100a60c3c:
  *param_1 = pQVar10;
  iVar3 = *(int *)pQVar10;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)pQVar10 = *(int *)pQVar10 + 1;
    local_158[0] = *(int *)pQVar10 != 0;
    UNLOCK();
    iVar3 = *(int *)pQVar10;
  }
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_158[0] = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_158[0]) goto LAB_100a60cb9;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_100a60cb9:
  if (lVar13 == local_138[0x20]) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

