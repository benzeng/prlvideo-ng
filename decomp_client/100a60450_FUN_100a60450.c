
undefined * FUN_100a60450(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t *psVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_178;
  ulong local_168;
  undefined1 local_158 [16];
  char *local_148;
  size_t local_140;
  size_t local_138 [33];
  
  local_138[0x20] = *(size_t *)PTR____stack_chk_guard_1021e1840;
  uVar11 = 0;
  do {
    pbVar4 = (byte *)_strchr((char *)param_1,0x3a);
    pbVar7 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      local_178 = (undefined *)0x0;
      if (uVar11 == 0) goto LAB_100a60650;
      break;
    }
    do {
      do {
        pbVar9 = pbVar7;
        pbVar7 = pbVar9 + 1;
      } while (*pbVar7 == 9);
    } while (*pbVar7 == 0x20);
    local_138[uVar11 * 4 + 2] = (size_t)pbVar7;
    pbVar1 = pbVar7;
    while ((pbVar8 = pbVar1, *pbVar8 != 0 && (*pbVar8 != 0x3b))) {
      pbVar1 = pbVar9 + 2;
      pbVar9 = pbVar8;
    }
    local_138[uVar11 * 4 + 3] = (long)pbVar8 - (long)pbVar7;
    pbVar7 = pbVar4;
    while ((param_1 <= pbVar7 &&
           ((0x3b < (ulong)*pbVar7 || ((0x800000100000200U >> ((ulong)*pbVar7 & 0x3f) & 1) == 0)))))
    {
      pbVar7 = pbVar7 + -1;
    }
    local_138[uVar11 * 4] = (size_t)(pbVar7 + 1);
    local_138[uVar11 * 4 + 1] = (long)pbVar4 - (long)(pbVar7 + 1);
    uVar11 = uVar11 + 1;
    param_1 = pbVar8;
  } while (uVar11 < 8);
  ppuVar5 = &PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
  local_178 = (undefined *)0x0;
  if (PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0 != (undefined *)0x0) {
    local_178 = (undefined *)0x0;
    local_168 = 0;
    puVar6 = PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
    do {
      psVar10 = local_138 + 3;
      uVar13 = 0;
      uVar12 = uVar11;
      do {
        cVar2 = FUN_100a602a0(puVar6,psVar10[-3],psVar10[-2],local_158);
        if ((cVar2 != '\0') && (*psVar10 == local_140)) {
          iVar3 = _strncasecmp((char *)psVar10[-1],local_148,*psVar10);
          uVar13 = uVar13 + (iVar3 == 0);
        }
        psVar10 = psVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (local_168 < uVar13) {
        local_178 = *ppuVar5;
        local_168 = uVar13;
      }
      puVar6 = ppuVar5[1];
      ppuVar5 = ppuVar5 + 1;
    } while (puVar6 != (undefined *)0x0);
  }
LAB_100a60650:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_138[0x20]) {
    return local_178;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

