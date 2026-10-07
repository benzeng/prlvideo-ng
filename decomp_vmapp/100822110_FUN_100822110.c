
ulong FUN_100822110(char *param_1,int param_2,long param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  char cVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  int iVar17;
  bool bVar18;
  ulong local_c8;
  int local_b4;
  char *local_b0;
  undefined1 local_a0 [16];
  uint local_90;
  undefined4 local_78 [2];
  undefined1 *local_70;
  char local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  uVar7 = 0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) goto LAB_1008226da;
  if ((param_4 != 0) || (uVar4 = FUN_100821ab0(param_3), uVar4 == 0)) goto LAB_10082230b;
  if (uVar4 < 0x398) {
    if (*(int *)(&DAT_100bd2850 + (long)(int)uVar4 * 0x28) == 0) {
      FUN_100887ce0(8,0x66,0x65,"obj_dat.c",0x176);
      goto LAB_100822237;
    }
    ppuVar6 = &PTR_s_undefined_100bd2848 + (long)(int)uVar4 * 5;
LAB_1008221e5:
    pcVar9 = *ppuVar6;
    if (pcVar9 == (char *)0x0) goto LAB_100822237;
LAB_10082229e:
    if (param_1 != (char *)0x0) {
      FUN_10087d1f0(param_1,pcVar9,(long)param_2);
    }
    uVar7 = _strlen(pcVar9);
  }
  else {
    if (DAT_1011c06e8 != 0) {
      local_78[0] = 3;
      local_70 = local_a0;
      local_90 = uVar4;
      lVar8 = FUN_100885dc0(DAT_1011c06e8,local_78);
      if (lVar8 != 0) {
        ppuVar6 = (undefined **)(*(long *)(lVar8 + 8) + 8);
        goto LAB_1008221e5;
      }
      FUN_100887ce0(8,0x66,0x65,"obj_dat.c",0x184);
    }
LAB_100822237:
    if (uVar4 < 0x398) {
      if (*(int *)(&DAT_100bd2850 + (long)(int)uVar4 * 0x28) == 0) {
        uVar13 = 0x15b;
LAB_100822306:
        FUN_100887ce0(8,0x68,0x65,"obj_dat.c",uVar13);
      }
      else {
        ppuVar6 = &PTR_s_UNDEF_100bd2840 + (long)(int)uVar4 * 5;
LAB_100822296:
        pcVar9 = *ppuVar6;
        if (pcVar9 != (char *)0x0) goto LAB_10082229e;
      }
    }
    else if (DAT_1011c06e8 != 0) {
      local_78[0] = 3;
      local_70 = local_a0;
      local_90 = uVar4;
      lVar8 = FUN_100885dc0(DAT_1011c06e8,local_78);
      if (lVar8 == 0) {
        uVar13 = 0x169;
        goto LAB_100822306;
      }
      ppuVar6 = *(undefined ***)(lVar8 + 8);
      goto LAB_100822296;
    }
LAB_10082230b:
    iVar17 = *(int *)(param_3 + 0x14);
    uVar7 = 0;
    if (0 < iVar17) {
      pbVar16 = *(byte **)(param_3 + 0x18);
      bVar2 = true;
      lVar8 = 0;
      local_c8 = 0;
      local_b4 = param_2;
      local_b0 = param_1;
LAB_10082232c:
      bVar1 = false;
      uVar14 = 0;
      while( true ) {
        bVar3 = *pbVar16;
        if ((iVar17 + -1 == 0) && ((char)bVar3 < '\0')) break;
        bVar12 = bVar3 >> 7;
        pbVar16 = pbVar16 + 1;
        iVar17 = iVar17 + -1;
        while( true ) {
          if (bVar1) {
            iVar5 = FUN_100850720(lVar8);
            if (iVar5 == 0) goto LAB_1008226c1;
          }
          else {
            uVar14 = uVar14 | (ulong)bVar3 & 0x7f;
          }
          if (bVar12 == 0) {
            if (bVar2) {
              if (uVar14 < 0x50) {
                cVar11 = (char)(uVar14 / 0x28);
              }
              else if (bVar1) {
                iVar5 = FUN_100850820(lVar8,0x50);
                cVar11 = '\x02';
                if (iVar5 == 0) goto LAB_1008226c1;
              }
              else {
                cVar11 = '\x02';
              }
              if ((1 < local_b4) && (local_b0 != (char *)0x0)) {
                *local_b0 = cVar11 + '0';
                local_b0[1] = '\0';
                local_b0 = local_b0 + 1;
                local_b4 = local_b4 + -1;
              }
              local_c8._0_4_ = (int)local_c8 + 1;
            }
            if (bVar1) {
              pcVar9 = (char *)FUN_10084efa0(lVar8);
              if (pcVar9 == (char *)0x0) goto LAB_1008226c1;
              sVar10 = _strlen(pcVar9);
              iVar5 = (int)sVar10;
              if (local_b0 == (char *)0x0) {
                local_b0 = (char *)0x0;
              }
              else {
                if (1 < local_b4) {
                  local_b0[0] = '.';
                  local_b0[1] = '\0';
                  local_b0 = local_b0 + 1;
                  local_b4 = local_b4 + -1;
                }
                lVar15 = (long)local_b4;
                FUN_10087d1f0(local_b0,pcVar9,lVar15);
                if (local_b4 < iVar5) {
                  local_b4 = 0;
                }
                else {
                  lVar15 = (long)iVar5;
                  local_b4 = local_b4 - iVar5;
                }
                local_b0 = local_b0 + lVar15;
              }
              uVar4 = (int)local_c8 + 1 + iVar5;
              FUN_10081e1a0(pcVar9);
            }
            else {
              FUN_1008823b0(local_68,0x25,".%lu");
              sVar10 = _strlen(local_68);
              iVar5 = (int)sVar10;
              if ((0 < local_b4) && (local_b0 != (char *)0x0)) {
                lVar15 = (long)local_b4;
                FUN_10087d1f0(local_b0,local_68,lVar15);
                if (local_b4 < iVar5) {
                  local_b4 = 0;
                }
                else {
                  lVar15 = (long)iVar5;
                  local_b4 = local_b4 - iVar5;
                }
                local_b0 = local_b0 + lVar15;
              }
              uVar4 = (int)local_c8 + iVar5;
            }
            local_c8 = (ulong)uVar4;
            bVar2 = false;
            if (0 < iVar17) goto LAB_10082232c;
            uVar7 = local_c8;
            if (lVar8 != 0) {
              FUN_10084b4b0(lVar8);
            }
            goto LAB_1008226da;
          }
          if ((!bVar1) && (uVar14 >> 0x39 != 0)) break;
          if (bVar1) goto LAB_10082242c;
          uVar14 = uVar14 << 7;
          bVar3 = *pbVar16;
          bVar12 = bVar3 >> 7;
          iVar5 = iVar17 + -1;
          pbVar16 = pbVar16 + 1;
          bVar1 = false;
          bVar18 = iVar17 == 1;
          iVar17 = iVar5;
          if ((bVar18) && ((char)bVar3 < '\0')) goto LAB_1008226c1;
        }
        if (lVar8 == 0) {
          lVar8 = FUN_10084b520();
          uVar7 = 0xffffffff;
          if (lVar8 == 0) goto LAB_1008226da;
        }
        iVar5 = FUN_10084bbb0(lVar8,uVar14);
        bVar1 = true;
        if (iVar5 == 0) goto LAB_1008226cc;
LAB_10082242c:
        iVar5 = FUN_10084ffd0(lVar8,lVar8,7);
        if (iVar5 == 0) break;
      }
LAB_1008226c1:
      uVar7 = 0xffffffff;
      if (lVar8 != 0) {
LAB_1008226cc:
        FUN_10084b4b0(lVar8);
        uVar7 = 0xffffffff;
      }
    }
  }
LAB_1008226da:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

