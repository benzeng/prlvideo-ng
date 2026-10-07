
int FUN_100882920(code *param_1,undefined8 param_2,char *param_3,uint param_4,int param_5)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar19;
  bool bVar20;
  char *local_238;
  undefined1 local_218 [144];
  char local_188 [32];
  char local_168 [304];
  long local_38;
  uint uVar18;
  
  uVar11 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = 0;
  if ((int)param_4 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    uVar10 = (long)(int)param_4;
    do {
      uVar11 = uVar10;
      if ((byte)(param_3[uVar10 - 1] | 0x20U) != 0x20) break;
      uVar11 = uVar10 - 1;
      iVar5 = iVar5 + 1;
      bVar20 = 1 < (long)uVar10;
      uVar10 = uVar11;
    } while (bVar20);
  }
  if (0 < param_5) {
    iVar1 = 0x80;
    if (param_5 < 0x81) {
      iVar1 = param_5;
    }
    ___memset_chk(local_218,0x20,(long)iVar1,0x81);
  }
  local_218[iVar1] = 0;
  iVar6 = -6;
  if (iVar1 < 7) {
    iVar6 = -iVar1;
  }
  iVar14 = (int)(((uint)(iVar1 + 3 + iVar6 >> 0x1f) >> 0x1e) + 3 + iVar1 + iVar6) >> 2;
  iVar15 = 0x10 - iVar14;
  iVar9 = (int)uVar11;
  iVar1 = (int)((long)((ulong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) / (long)iVar15);
  iVar7 = (uint)(iVar1 * iVar15 < iVar9) + iVar1;
  iVar6 = 0;
  if (0 < iVar7) {
    if (iVar15 < 1) {
      iVar1 = iVar1 + (uint)(iVar1 * iVar15 < iVar9);
      iVar7 = 0;
      iVar6 = 0;
      do {
        FUN_10087d1f0(local_168,local_218,0x121);
        FUN_1008823b0(local_188,0x14,"%04x - ",iVar7);
        FUN_10087d250(local_168,local_188,0x121);
        FUN_10087d250(local_168,"  ",0x121);
        FUN_10087d250(local_168,"\n",0x121);
        sVar2 = _strlen(local_168);
        iVar15 = (*param_1)(local_168,sVar2,param_2);
        iVar6 = iVar6 + iVar15;
        iVar7 = iVar7 + (0x10 - iVar14);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      uVar8 = -iVar9;
      lVar13 = 0;
      lVar3 = 0;
      iVar6 = 0;
      local_238 = param_3;
      do {
        uVar18 = iVar14 - 0x10U;
        if (iVar14 - 0x10U < uVar8) {
          uVar18 = uVar8;
        }
        iVar17 = -uVar18;
        FUN_10087d1f0(local_168,local_218,0x121);
        FUN_1008823b0(local_188,0x14,"%04x - ");
        FUN_10087d250(local_168,local_188,0x121);
        lVar19 = lVar13;
        iVar1 = 0;
        do {
          if (lVar19 < iVar9) {
            uVar16 = 0x20;
            if (iVar1 == 7) {
              uVar16 = 0x2d;
            }
            FUN_1008823b0(local_188,0x14,"%02x%c",param_3[lVar19],uVar16);
            pcVar12 = local_188;
          }
          else {
            pcVar12 = "   ";
          }
          FUN_10087d250(local_168,pcVar12,0x121);
          lVar19 = lVar19 + 1;
          bVar20 = iVar1 != 0xf - iVar14;
          iVar1 = iVar1 + 1;
        } while (bVar20);
        FUN_10087d250(local_168,"  ",0x121);
        pcVar12 = local_238;
        if (lVar3 * iVar15 < (long)iVar9) {
          do {
            cVar4 = *pcVar12;
            if (0x5e < (byte)(cVar4 - 0x20U)) {
              cVar4 = '.';
            }
            FUN_1008823b0(local_188,0x14,"%c",cVar4);
            FUN_10087d250(local_168,local_188,0x121);
            pcVar12 = pcVar12 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        FUN_10087d250(local_168,"\n",0x121);
        sVar2 = _strlen(local_168);
        iVar1 = (*param_1)(local_168,sVar2,param_2);
        iVar6 = iVar6 + iVar1;
        uVar8 = uVar8 + iVar15;
        lVar13 = lVar13 + (0x10 - iVar14);
        local_238 = local_238 + (0x10 - iVar14);
        iVar1 = (int)lVar3;
        lVar3 = lVar3 + 1;
      } while (iVar1 != iVar7 + -1);
    }
  }
  if (iVar5 < 1) {
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    FUN_1008823b0(local_168,0x121,"%s%04x - <SPACES/NULS>\n",local_218,iVar9 + iVar5);
    sVar2 = _strlen(local_168);
    iVar1 = (*param_1)(local_168,sVar2,param_2);
    iVar6 = iVar1 + iVar6;
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

