
char * FUN_100a60680(char *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  size_t *psVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 local_158 [16];
  char *local_148;
  size_t local_140;
  size_t local_138 [33];
  
  puVar5 = PTR_shared_null_1021e1288;
  lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  uVar11 = 0;
  local_138[0x20] = lVar13;
  do {
    pbVar4 = (byte *)_strchr((char *)param_2,0x3a);
    pbVar7 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      if (uVar11 == 0) goto LAB_100a608a3;
      break;
    }
    do {
      do {
        pbVar8 = pbVar7;
        pbVar7 = pbVar8 + 1;
      } while (*pbVar7 == 9);
    } while (*pbVar7 == 0x20);
    local_138[uVar11 * 4 + 2] = (size_t)pbVar7;
    pbVar1 = pbVar7;
    while ((pbVar6 = pbVar1, *pbVar6 != 0 && (*pbVar6 != 0x3b))) {
      pbVar1 = pbVar8 + 2;
      pbVar8 = pbVar6;
    }
    local_138[uVar11 * 4 + 3] = (long)pbVar6 - (long)pbVar7;
    pbVar7 = pbVar4;
    while ((param_2 <= pbVar7 &&
           ((0x3b < (ulong)*pbVar7 || ((0x800000100000200U >> ((ulong)*pbVar7 & 0x3f) & 1) == 0)))))
    {
      pbVar7 = pbVar7 + -1;
    }
    local_138[uVar11 * 4] = (size_t)(pbVar7 + 1);
    local_138[uVar11 * 4 + 1] = (long)pbVar4 - (long)(pbVar7 + 1);
    uVar11 = uVar11 + 1;
    param_2 = pbVar6;
  } while (uVar11 < 8);
  ppuVar9 = &PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
  if (PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0 != (undefined *)0x0) {
    puVar5 = PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
    do {
      psVar10 = local_138 + 3;
      lVar13 = 0;
      uVar12 = uVar11;
      do {
        cVar2 = FUN_100a602a0(puVar5,psVar10[-3],psVar10[-2],local_158);
        if ((cVar2 != '\0') && (*psVar10 == local_140)) {
          iVar3 = _strncasecmp((char *)psVar10[-1],local_148,*psVar10);
          lVar13 = lVar13 + (ulong)(iVar3 == 0);
        }
        psVar10 = psVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (lVar13 != 0) {
        QByteArray::append(param_1);
        QByteArray::append((char)param_1);
      }
      puVar5 = ppuVar9[1];
      ppuVar9 = ppuVar9 + 1;
    } while (puVar5 != (undefined *)0x0);
    puVar5 = *(undefined **)param_1;
    lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (*(int *)(puVar5 + 4) != 0) {
    QByteArray::append((char)param_1);
  }
LAB_100a608a3:
  if (lVar13 == local_138[0x20]) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

