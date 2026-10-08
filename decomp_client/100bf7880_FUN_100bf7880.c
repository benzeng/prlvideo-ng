
ulong FUN_100bf7880(char *param_1,int param_2,long param_3,int param_4)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  uVar7 = 0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) goto LAB_100bf7e4a;
  if ((param_4 != 0) || (uVar4 = FUN_100bf7220(param_3), uVar4 == 0)) goto LAB_100bf7a7b;
  if (uVar4 < 0x398) {
    if (*(int *)(&DAT_102242b90 + (long)(int)uVar4 * 0x28) == 0) {
      FUN_100c62ee0(8,0x66,0x65,"obj_dat.c",0x176);
      goto LAB_100bf79a7;
    }
    ppuVar6 = &PTR_s_undefined_102242b88 + (long)(int)uVar4 * 5;
LAB_100bf7955:
    pcVar9 = *ppuVar6;
    if (pcVar9 == (char *)0x0) goto LAB_100bf79a7;
LAB_100bf7a0e:
    if (param_1 != (char *)0x0) {
      FUN_100c583f0(param_1,pcVar9,(long)param_2);
    }
    uVar7 = _strlen(pcVar9);
  }
  else {
    if (DAT_1023160d8 != 0) {
      local_78[0] = 3;
      local_70 = local_a0;
      local_90 = uVar4;
      lVar8 = FUN_100c60fc0(DAT_1023160d8,local_78);
      if (lVar8 != 0) {
        ppuVar6 = (undefined **)(*(long *)(lVar8 + 8) + 8);
        goto LAB_100bf7955;
      }
      FUN_100c62ee0(8,0x66,0x65,"obj_dat.c",0x184);
    }
LAB_100bf79a7:
    if (uVar4 < 0x398) {
      if (*(int *)(&DAT_102242b90 + (long)(int)uVar4 * 0x28) == 0) {
        uVar13 = 0x15b;
LAB_100bf7a76:
        FUN_100c62ee0(8,0x68,0x65,"obj_dat.c",uVar13);
      }
      else {
        ppuVar6 = &PTR_s_UNDEF_102242b80 + (long)(int)uVar4 * 5;
LAB_100bf7a06:
        pcVar9 = *ppuVar6;
        if (pcVar9 != (char *)0x0) goto LAB_100bf7a0e;
      }
    }
    else if (DAT_1023160d8 != 0) {
      local_78[0] = 3;
      local_70 = local_a0;
      local_90 = uVar4;
      lVar8 = FUN_100c60fc0(DAT_1023160d8,local_78);
      if (lVar8 == 0) {
        uVar13 = 0x169;
        goto LAB_100bf7a76;
      }
      ppuVar6 = *(undefined ***)(lVar8 + 8);
      goto LAB_100bf7a06;
    }
LAB_100bf7a7b:
    iVar17 = *(int *)(param_3 + 0x14);
    uVar7 = 0;
    if (0 < iVar17) {
      pbVar16 = *(byte **)(param_3 + 0x18);
      bVar2 = true;
      lVar8 = 0;
      local_c8 = 0;
      local_b4 = param_2;
      local_b0 = param_1;
LAB_100bf7a9c:
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
            iVar5 = FUN_100c2b920(lVar8);
            if (iVar5 == 0) goto LAB_100bf7e31;
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
                iVar5 = FUN_100c2ba20(lVar8,0x50);
                cVar11 = '\x02';
                if (iVar5 == 0) goto LAB_100bf7e31;
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
              pcVar9 = (char *)FUN_100c2a1a0(lVar8);
              if (pcVar9 == (char *)0x0) goto LAB_100bf7e31;
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
                FUN_100c583f0(local_b0,pcVar9,lVar15);
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
              FUN_100bf3910(pcVar9);
            }
            else {
              FUN_100c5d5b0(local_68,0x25,".%lu");
              sVar10 = _strlen(local_68);
              iVar5 = (int)sVar10;
              if ((0 < local_b4) && (local_b0 != (char *)0x0)) {
                lVar15 = (long)local_b4;
                FUN_100c583f0(local_b0,local_68,lVar15);
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
            if (0 < iVar17) goto LAB_100bf7a9c;
            uVar7 = local_c8;
            if (lVar8 != 0) {
              FUN_100c266b0(lVar8);
            }
            goto LAB_100bf7e4a;
          }
          if ((!bVar1) && (uVar14 >> 0x39 != 0)) break;
          if (bVar1) goto LAB_100bf7b9c;
          uVar14 = uVar14 << 7;
          bVar3 = *pbVar16;
          bVar12 = bVar3 >> 7;
          iVar5 = iVar17 + -1;
          pbVar16 = pbVar16 + 1;
          bVar1 = false;
          bVar18 = iVar17 == 1;
          iVar17 = iVar5;
          if ((bVar18) && ((char)bVar3 < '\0')) goto LAB_100bf7e31;
        }
        if (lVar8 == 0) {
          lVar8 = FUN_100c26720();
          uVar7 = 0xffffffff;
          if (lVar8 == 0) goto LAB_100bf7e4a;
        }
        iVar5 = FUN_100c26db0(lVar8,uVar14);
        bVar1 = true;
        if (iVar5 == 0) goto LAB_100bf7e3c;
LAB_100bf7b9c:
        iVar5 = FUN_100c2b1d0(lVar8,lVar8,7);
        if (iVar5 == 0) break;
      }
LAB_100bf7e31:
      uVar7 = 0xffffffff;
      if (lVar8 != 0) {
LAB_100bf7e3c:
        FUN_100c266b0(lVar8);
        uVar7 = 0xffffffff;
      }
    }
  }
LAB_100bf7e4a:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

