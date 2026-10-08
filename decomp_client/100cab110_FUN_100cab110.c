
undefined8 FUN_100cab110(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  size_t sVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  long lVar22;
  byte *pbVar23;
  undefined8 uVar24;
  long lVar25;
  bool bVar26;
  long local_98;
  long local_88;
  byte *local_60;
  undefined1 local_58 [32];
  long local_38;
  
  lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_60 = (byte *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  local_38 = lVar22;
  lVar7 = FUN_100c57ec0();
  if (lVar7 == 0) {
    FUN_100c62ee0(0xe,0x79,7,"conf_def.c",0xe0);
    lVar25 = 0;
    local_88 = 0;
    goto LAB_100cab986;
  }
  pbVar8 = (byte *)FUN_100c58250("default");
  local_60 = pbVar8;
  if (pbVar8 == (byte *)0x0) {
    uVar18 = 0x41;
    uVar24 = 0xe6;
LAB_100cab972:
    FUN_100c62ee0(0xe,0x79,uVar18,"conf_def.c",uVar24);
    lVar25 = 0;
    local_88 = 0;
  }
  else {
    iVar6 = FUN_100caad30(param_1);
    if (iVar6 == 0) {
      uVar18 = 0x41;
      uVar24 = 0xeb;
      goto LAB_100cab972;
    }
    local_98 = FUN_100caaf30(param_1,pbVar8);
    if (local_98 == 0) {
      uVar18 = 0x67;
      uVar24 = 0xf1;
      goto LAB_100cab972;
    }
    iVar6 = FUN_100c57f60(lVar7,0x200);
    local_88 = 0;
    if (iVar6 != 0) {
      local_88 = 0;
      do {
        uVar14 = 0;
        bVar26 = false;
LAB_100cab1e0:
        iVar19 = (int)uVar14;
        lVar25 = (long)iVar19;
        lVar22 = *(long *)(lVar7 + 8);
        *(undefined1 *)(lVar22 + lVar25) = 0;
        FUN_100c58b50(param_2,(char *)(lVar22 + lVar25),0x1ff);
        *(undefined1 *)(lVar22 + 0x1ff + lVar25) = 0;
        sVar9 = _strlen((char *)(lVar22 + lVar25));
        iVar6 = (int)sVar9;
        if (!bVar26 && iVar6 == 0) {
          FUN_100c57f20(lVar7);
          uVar18 = 1;
          if (local_60 != (byte *)0x0) {
            FUN_100bf3910();
          }
          lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_100caba1b;
        }
        uVar14 = sVar9 & 0xffffffff;
        if (0 < iVar6) {
          uVar13 = (long)iVar6;
          do {
            cVar1 = *(char *)(lVar22 + -1 + lVar25 + uVar13);
            if ((cVar1 != '\n') && (uVar14 = uVar13, cVar1 != '\r')) break;
            uVar14 = uVar13 - 1;
            bVar26 = 1 < (long)uVar13;
            uVar13 = uVar14;
          } while (bVar26);
        }
        iVar11 = (int)uVar14;
        if ((iVar6 == 0) || (bVar4 = true, iVar11 != iVar6)) {
          *(undefined1 *)(lVar22 + iVar11 + lVar25) = 0;
          local_88 = local_88 + 1;
          bVar4 = false;
        }
        uVar12 = iVar11 + iVar19;
        if (uVar12 != 0 && SCARRY4(iVar11,iVar19) == (int)uVar12 < 0) {
          lVar22 = (long)(int)uVar12;
          if ((*(byte *)(*(long *)(param_1 + 8) +
                        (ulong)*(byte *)(*(long *)(lVar7 + 8) + -1 + lVar22) * 2) & 0x20) == 0)
          goto LAB_100cab2c0;
          uVar14 = lVar22 - 1;
          bVar26 = true;
          if ((1 < (int)uVar12) &&
             ((*(byte *)(*(long *)(param_1 + 8) +
                        (ulong)*(byte *)(lVar22 + -2 + *(long *)(lVar7 + 8)) * 2) & 0x20) != 0))
          goto LAB_100cab2c0;
          goto LAB_100cab750;
        }
LAB_100cab2c0:
        bVar26 = true;
        uVar14 = (ulong)uVar12;
        if (bVar4) goto LAB_100cab750;
        pbVar8 = *(byte **)(lVar7 + 8);
        uVar14 = (ulong)*pbVar8;
        lVar22 = *(long *)(param_1 + 8);
        uVar2 = *(ushort *)(lVar22 + uVar14 * 2);
        pbVar15 = pbVar8;
        while ((uVar2 & 0x800) == 0) {
          if ((uVar2 & 0x10) == 0) goto LAB_100cab328;
          uVar14 = (ulong)pbVar15[1];
          pbVar15 = pbVar15 + 1;
          uVar2 = *(ushort *)(lVar22 + uVar14 * 2);
        }
LAB_100cab460:
        *pbVar15 = 0;
LAB_100cab463:
        lVar25 = *(long *)(param_1 + 8);
        do {
          pbVar15 = pbVar8;
          uVar14 = (ulong)*pbVar15;
          uVar2 = *(ushort *)(lVar25 + uVar14 * 2);
          pbVar8 = pbVar15 + 1;
        } while ((uVar2 & 0x18) == 0x10);
        bVar26 = false;
        if ((uVar2 & 8) != 0) {
          uVar14 = 0;
          goto LAB_100cab750;
        }
        pbVar10 = pbVar15 + 1;
        pbVar8 = pbVar15;
        if (*pbVar15 != 0x5b) {
          do {
            if ((uVar2 & 0x20) == 0) {
              if ((uVar2 & 0x307) == 0) goto LAB_100cab4f2;
              pbVar8 = pbVar8 + 1;
            }
            else {
              pbVar10 = pbVar8 + 1;
              pbVar23 = pbVar8 + 1;
              pbVar8 = pbVar8 + 2;
              if ((*(byte *)(lVar25 + (ulong)*pbVar10 * 2) & 8) != 0) {
                pbVar8 = pbVar23;
              }
            }
            uVar14 = (ulong)*pbVar8;
            uVar2 = *(ushort *)(lVar25 + uVar14 * 2);
          } while( true );
        }
        do {
          pbVar8 = pbVar10;
          uVar14 = (ulong)*pbVar8;
          pbVar10 = pbVar15 + 2;
          pbVar15 = pbVar8;
        } while ((*(ushort *)(lVar25 + uVar14 * 2) & 0x18) == 0x10);
        lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100cab7c8:
        while( true ) {
          while (uVar2 = *(ushort *)(lVar25 + uVar14 * 2), (uVar2 & 0x20) != 0) {
            pbVar10 = pbVar8 + 2;
            if ((*(byte *)(lVar25 + (ulong)pbVar8[1] * 2) & 8) != 0) {
              pbVar10 = pbVar8 + 1;
            }
            uVar14 = (ulong)*pbVar10;
            pbVar8 = pbVar10;
          }
          if ((uVar2 & 0x307) == 0) break;
          uVar14 = (ulong)pbVar8[1];
          pbVar8 = pbVar8 + 1;
        }
        pbVar10 = pbVar8 + -1;
        do {
          bVar21 = pbVar10[1];
          uVar14 = (ulong)bVar21;
          pbVar10 = pbVar10 + 1;
        } while ((*(ushort *)(lVar25 + uVar14 * 2) & 0x18) == 0x10);
        if (bVar21 == 0) {
LAB_100caba61:
          FUN_100c62ee0(0xe,0x79,100,"conf_def.c",0x13e);
          lVar25 = 0;
          goto LAB_100cab97d;
        }
        if (bVar21 != 0x5d) {
          bVar26 = pbVar15 == pbVar10;
          pbVar8 = pbVar10;
          pbVar15 = pbVar10;
          if (bVar26) goto LAB_100caba61;
          goto LAB_100cab7c8;
        }
        *pbVar8 = 0;
        iVar6 = FUN_100cabc80(param_1,0,&local_60);
        pbVar8 = local_60;
        if (iVar6 == 0) {
          lVar25 = 0;
          goto LAB_100cab8b7;
        }
        local_98 = FUN_100caab40(param_1,local_60);
        if ((local_98 == 0) && (local_98 = FUN_100caaf30(param_1,pbVar8), local_98 == 0)) {
          uVar18 = 0x67;
          uVar24 = 0x148;
          goto LAB_100cab8af;
        }
        iVar6 = FUN_100c57f60(lVar7,0x200);
        if (iVar6 == 0) break;
      } while( true );
    }
LAB_100cab88f:
    uVar18 = 7;
    uVar24 = 0xf9;
LAB_100cab8af:
    FUN_100c62ee0(0xe,0x79,uVar18,"conf_def.c",uVar24);
    lVar25 = 0;
LAB_100cab8b7:
    lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
LAB_100cab97d:
  FUN_100c57f20(lVar7);
LAB_100cab986:
  if (local_60 != (byte *)0x0) {
    FUN_100bf3910();
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_88;
  }
  uVar18 = 0;
  FUN_100c5d5b0(local_58,0x18,"%ld",local_88);
  FUN_100c642a0(2,"line ",local_58);
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar3 != *(long *)(param_1 + 0x10))) {
    FUN_100caa7b0();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar25 != 0) {
    if (*(long *)(lVar25 + 8) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(lVar25 + 0x10) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(lVar25);
  }
LAB_100caba1b:
  if (lVar22 == local_38) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100cab328:
  if ((uVar2 & 0x80) != 0) goto LAB_100cab460;
  uVar12 = (uint)uVar14;
  if ((uVar2 & 0x400) == 0) {
    if ((uVar2 & 0x40) == 0) {
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 8) != 0) goto LAB_100cab463;
        pbVar15 = pbVar15 + 1;
      }
      else {
        pbVar10 = pbVar15 + 1;
        pbVar23 = pbVar15 + 1;
        pbVar15 = pbVar15 + 2;
        if ((*(byte *)(lVar22 + (ulong)*pbVar10 * 2) & 8) != 0) {
          pbVar15 = pbVar23;
        }
      }
    }
    else {
      pbVar10 = pbVar15 + 1;
      bVar21 = pbVar15[1];
      uVar20 = (uint)bVar21;
      if (bVar21 != uVar12) {
        uVar2 = *(ushort *)(lVar22 + (ulong)bVar21 * 2);
        pbVar23 = pbVar15;
        while (pbVar17 = pbVar10, pbVar15 = pbVar23, pbVar10 = pbVar17, (uVar2 & 8) == 0) {
          if (((uVar2 & 0x20) != 0) &&
             (pbVar17 = pbVar23 + 2, pbVar15 = pbVar17,
             (*(byte *)(lVar22 + (ulong)pbVar23[2] * 2) & 8) != 0)) goto LAB_100cab320;
          pbVar10 = pbVar17 + 1;
          bVar21 = pbVar17[1];
          uVar20 = (uint)bVar21;
          pbVar15 = pbVar17;
          if (bVar21 == uVar12) break;
          pbVar23 = pbVar17;
          uVar2 = *(ushort *)(lVar22 + (ulong)bVar21 * 2);
        }
      }
      pbVar15 = pbVar15 + 2;
      if (uVar20 != uVar12) {
        pbVar15 = pbVar10;
      }
    }
  }
  else {
    while( true ) {
      pbVar10 = pbVar15;
      bVar21 = pbVar10[1];
      if ((*(byte *)(lVar22 + (ulong)bVar21 * 2) & 8) != 0) break;
      pbVar15 = pbVar10 + 1;
      if (bVar21 == uVar12) {
        if (pbVar10[2] != uVar12) {
          bVar21 = (byte)uVar14;
          break;
        }
        pbVar15 = pbVar10 + 2;
      }
    }
    pbVar15 = pbVar10 + 2;
    if (bVar21 != uVar12) {
      pbVar15 = pbVar10 + 1;
    }
  }
LAB_100cab320:
  uVar14 = (ulong)*pbVar15;
  uVar2 = *(ushort *)(lVar22 + uVar14 * 2);
  goto LAB_100cab328;
LAB_100cab4f2:
  pbVar10 = pbVar15;
  if ((int)uVar14 == 0x3a) {
    uVar14 = 0x3a;
    lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (pbVar8[1] == 0x3a) {
      *pbVar8 = 0;
      pbVar10 = pbVar8 + 2;
      lVar25 = *(long *)(param_1 + 8);
      pbVar8 = pbVar10;
      while( true ) {
        while( true ) {
          uVar14 = (ulong)*pbVar8;
          uVar2 = *(ushort *)(lVar25 + uVar14 * 2);
          if ((uVar2 & 0x20) == 0) break;
          pbVar23 = pbVar8 + 1;
          pbVar17 = pbVar8 + 1;
          pbVar8 = pbVar8 + 2;
          if ((*(byte *)(lVar25 + (ulong)*pbVar23 * 2) & 8) != 0) {
            pbVar8 = pbVar17;
          }
        }
        if ((uVar2 & 0x307) == 0) break;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      pbVar15 = (byte *)0x0;
    }
  }
  else {
    lVar22 = *(long *)PTR____stack_chk_guard_1021e1840;
    pbVar15 = (byte *)0x0;
  }
  uVar12 = (uint)uVar14;
  uVar2 = *(ushort *)(lVar25 + uVar14 * 2);
  pbVar17 = pbVar8 + 1;
  pbVar23 = pbVar8;
  while (pbVar5 = pbVar17, (uVar2 & 0x18) == 0x10) {
    uVar12 = (uint)*pbVar5;
    pbVar17 = pbVar23 + 2;
    pbVar23 = pbVar5;
    uVar2 = *(ushort *)(lVar25 + (ulong)*pbVar5 * 2);
  }
  if (uVar12 != 0x3d) {
    FUN_100c62ee0(0xe,0x79,0x65,"conf_def.c",0x159);
    lVar25 = 0;
    goto LAB_100cab97d;
  }
  *pbVar8 = 0;
  lVar22 = *(long *)(param_1 + 8);
  pbVar8 = pbVar23;
  pbVar17 = pbVar5;
  do {
    pbVar16 = pbVar17;
    pbVar17 = pbVar8 + 2;
    pbVar8 = pbVar16;
  } while ((*(ushort *)(lVar22 + (ulong)*pbVar16 * 2) & 0x18) == 0x10);
  do {
    pbVar8 = pbVar5;
    pbVar5 = pbVar23 + 2;
    pbVar23 = pbVar8;
  } while ((*(byte *)(lVar22 + (ulong)*pbVar8 * 2) & 8) == 0);
  do {
    pbVar23 = pbVar8;
    pbVar8 = pbVar23 + -1;
    if (pbVar16 == pbVar8) break;
  } while ((*(byte *)(lVar22 + (ulong)*pbVar8 * 2) & 0x10) != 0);
  *pbVar23 = 0;
  lVar25 = FUN_100bf3540(0x18,"conf_def.c",0x167);
  pbVar8 = local_60;
  if (lVar25 == 0) {
    FUN_100c62ee0(0xe,0x79,0x41,"conf_def.c",0x168);
    goto LAB_100cab8b7;
  }
  if (pbVar15 == (byte *)0x0) {
    pbVar15 = local_60;
  }
  sVar9 = _strlen((char *)pbVar10);
  lVar22 = FUN_100bf3540((int)sVar9 + 1,"conf_def.c",0x16d);
  *(long *)(lVar25 + 8) = lVar22;
  *(undefined8 *)(lVar25 + 0x10) = 0;
  if (lVar22 == 0) {
    FUN_100c62ee0(0xe,0x79,0x41,"conf_def.c",0x170);
    goto LAB_100cab8b7;
  }
  sVar9 = _strlen((char *)pbVar10);
  FUN_100c583f0(lVar22,pbVar10,sVar9 + 1);
  iVar6 = FUN_100cabc80(param_1,pbVar15,lVar25 + 0x10,pbVar16);
  if (iVar6 == 0) goto LAB_100cab8b7;
  iVar6 = _strcmp((char *)pbVar15,(char *)pbVar8);
  lVar22 = local_98;
  if (((iVar6 != 0) && (lVar22 = FUN_100caab40(param_1,pbVar15), lVar22 == 0)) &&
     (lVar22 = FUN_100caaf30(param_1,pbVar15), lVar22 == 0)) {
    FUN_100c62ee0(0xe,0x79,0x67,"conf_def.c",0x17d);
    goto LAB_100cab8b7;
  }
  iVar6 = FUN_100caabd0(param_1,lVar22,lVar25);
  uVar14 = 0;
  bVar26 = false;
  if (iVar6 == 0) {
    FUN_100c62ee0(0xe,0x79,0x41,"conf_def.c",0x184);
    goto LAB_100cab8b7;
  }
LAB_100cab750:
  iVar6 = FUN_100c57f60(lVar7,(long)((int)uVar14 + 0x200));
  if (iVar6 == 0) goto LAB_100cab88f;
  goto LAB_100cab1e0;
}

