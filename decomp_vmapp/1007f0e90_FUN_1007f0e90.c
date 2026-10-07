
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1007f0e90(uint *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [52];
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar11;
  FUN_10088a650(local_b0);
  uVar14 = 1;
  piVar6 = (int *)0x0;
  if (*(long *)(*(long *)(param_1 + 0x4c) + 0xb0) == 0) goto LAB_1007f129d;
  uVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x60))(param_1,0x21a0,0x21a1,0xf,0x4000,&local_7c);
  if (local_7c == 0) {
    uVar14 = uVar5 & 0xffffffff;
    goto LAB_1007f12de;
  }
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xb0);
  piVar6 = (int *)FUN_1008b7420(uVar10);
  uVar7 = FUN_1008bd4d0(uVar10,piVar6);
  if ((uVar7 & 0x10) == 0) {
    FUN_100887ce0(0x14,0x88,0xdc,"s3_srvr.c",0xbbb);
    uVar10 = 0x2f;
    lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1007f1285:
    FUN_1007fd650(param_1,2,uVar10);
    param_1[0x12] = 5;
    uVar14 = 0;
  }
  else {
    pauVar9 = *(undefined1 (**) [16])(param_1 + 0x16);
    if ((uVar5 != 0x40) || (lVar11 = 0x40, 1 < *piVar6 - 0x32bU)) {
      local_c8 = 0;
      if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
LAB_1007f1010:
        uVar7 = (ulong)CONCAT11((*pauVar9)[0],(*pauVar9)[1]);
        lVar11 = uVar5 - 2;
        if ((long)uVar7 <= lVar11) {
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 2);
          goto LAB_1007f1057;
        }
        uVar10 = 0x9f;
        uVar13 = 0xbe9;
        goto LAB_1007f117d;
      }
      uVar3 = FUN_100804c20(piVar6);
      if (uVar3 != 0xffffffff) {
        lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (uVar3 == (byte)(*pauVar9)[1]) {
          local_c8 = FUN_100804c60((*pauVar9)[0]);
          if (local_c8 != 0) {
            pauVar9 = (undefined1 (*) [16])(*pauVar9 + 2);
            uVar5 = uVar5 - 2;
            goto LAB_1007f1010;
          }
          uVar10 = 0x170;
          uVar13 = 0xbdc;
        }
        else {
          uVar10 = 0x172;
          uVar13 = 0xbd6;
        }
        FUN_100887ce0(0x14,0x88,uVar10,"s3_srvr.c",uVar13);
        uVar10 = 0x32;
        goto LAB_1007f1285;
      }
      uVar10 = 0xbcf;
LAB_1007f11b2:
      FUN_100887ce0(0x14,0x88,0x44,"s3_srvr.c",uVar10);
      uVar10 = 0x50;
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1007f1285;
    }
    local_c8 = 0;
    uVar7 = 0x40;
LAB_1007f1057:
    iVar4 = FUN_100891d80(piVar6);
    if (((iVar4 < (int)uVar7) || (lVar11 < 1)) || (iVar4 < lVar11)) {
      uVar10 = 0x109;
      uVar13 = 0xbf0;
LAB_1007f117d:
      FUN_100887ce0(0x14,0x88,uVar10,"s3_srvr.c",uVar13);
      uVar10 = 0x32;
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1007f1285;
    }
    if ((0x302 < (int)*param_1) && ((*param_1 & 0xffffff00) == 0x300)) {
      lVar8 = FUN_10087db60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b8),3,0,&local_b8);
      if (lVar8 < 1) {
        uVar10 = 0xbfa;
        goto LAB_1007f11b2;
      }
      iVar4 = FUN_10088a720(local_b0,local_c8,0);
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (iVar4 != 0) {
        iVar4 = FUN_10088a910(local_b0,local_b8,lVar8);
        if (iVar4 != 0) {
          iVar4 = FUN_100891b50(local_b0,pauVar9,uVar7,piVar6);
          if (0 < iVar4) goto LAB_1007f129d;
          uVar10 = 0x7b;
          uVar13 = 0xc0b;
          goto LAB_1007f1563;
        }
      }
      uVar10 = 6;
      uVar13 = 0xc04;
LAB_1007f15b4:
      FUN_100887ce0(0x14,0x88,uVar10,"s3_srvr.c",uVar13);
      uVar10 = 0x50;
      goto LAB_1007f1285;
    }
    iVar4 = *piVar6;
    if (iVar4 < 0x74) {
      lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (iVar4 != 6) {
LAB_1007f151c:
        FUN_100887ce0(0x14,0x88,0x44,"s3_srvr.c",0xc59);
        uVar10 = 0x2b;
        goto LAB_1007f1285;
      }
      iVar4 = FUN_10086ce40(0x72,*(long *)(param_1 + 0x20) + 0x210,0x24,pauVar9,uVar7,
                            *(undefined8 *)(piVar6 + 8));
      if (iVar4 < 0) {
        uVar10 = 0x76;
        uVar13 = 0xc16;
      }
      else {
        if (iVar4 != 0) goto LAB_1007f129d;
        uVar10 = 0x7a;
        uVar13 = 0xc1b;
      }
LAB_1007f1563:
      FUN_100887ce0(0x14,0x88,uVar10,"s3_srvr.c",uVar13);
      uVar10 = 0x33;
      goto LAB_1007f1285;
    }
    lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar4 - 0x32bU < 2) {
      lVar8 = FUN_100895fc0(piVar6,0);
      if (lVar8 == 0) {
        uVar10 = 0x41;
        uVar13 = 0xc41;
      }
      else {
        iVar4 = FUN_1008969f0(lVar8);
        if (0 < iVar4) {
          if ((int)uVar7 != 0x40) {
            _fprintf(*(FILE **)PTR____stderrp_100ba2328,"GOST signature length is %d");
          }
          lVar11 = 0;
          if ((pauVar9[3] + 0xf < local_48 + 0xf) || (bVar2 = false, &local_78 < pauVar9)) {
            local_48 = pshufb(*pauVar9,_DAT_100b59a20);
            local_58 = pshufb(pauVar9[1],_DAT_100b59a20);
            local_68 = pshufb(pauVar9[2],_DAT_100b59a20);
            local_78 = pshufb(pauVar9[3],_DAT_100b59a20);
            bVar2 = true;
            lVar11 = 0x40;
          }
          if (!bVar2) {
            puVar12 = *pauVar9 + lVar11;
            lVar11 = 0x40 - lVar11;
            do {
              local_78[lVar11 + -1] = *puVar12;
              puVar12 = puVar12 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          iVar4 = FUN_100896a70(lVar8,local_78,0x40,*(long *)(param_1 + 0x20) + 0x210,0x20);
          FUN_1008963e0(lVar8);
          if (iVar4 < 1) {
            FUN_100887ce0(0x14,0x88,0x131,"s3_srvr.c",0xc55);
            uVar10 = 0x33;
            lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1007f1285;
          }
          lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_1007f129d;
        }
        FUN_1008963e0(lVar8);
        uVar10 = 0x44;
        uVar13 = 0xc47;
      }
      goto LAB_1007f15b4;
    }
    if (iVar4 == 0x74) {
      iVar4 = FUN_100872820(piVar6[1],*(long *)(param_1 + 0x20) + 0x220,0x14,pauVar9,uVar7,
                            *(undefined8 *)(piVar6 + 8));
      if (iVar4 < 1) {
        uVar10 = 0x70;
        uVar13 = 0xc28;
        goto LAB_1007f1563;
      }
    }
    else {
      if (iVar4 != 0x198) goto LAB_1007f151c;
      iVar4 = FUN_100875fa0(piVar6[1],*(long *)(param_1 + 0x20) + 0x220,0x14,pauVar9,uVar7,
                            *(undefined8 *)(piVar6 + 8));
      if (iVar4 < 1) {
        uVar10 = 0x131;
        uVar13 = 0xc35;
        goto LAB_1007f1563;
      }
    }
  }
LAB_1007f129d:
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x1b8) != 0) {
    FUN_10087d4e0();
    pbVar1 = *(byte **)(param_1 + 0x20);
    pbVar1[0x1b8] = 0;
    pbVar1[0x1b9] = 0;
    pbVar1[0x1ba] = 0;
    pbVar1[0x1bb] = 0;
    pbVar1[0x1bc] = 0;
    pbVar1[0x1bd] = 0;
    pbVar1[0x1be] = 0;
    pbVar1[0x1bf] = 0;
    *pbVar1 = *pbVar1 & 0xdf;
  }
  FUN_10088aa50(local_b0);
  FUN_1008924e0(piVar6);
LAB_1007f12de:
  if (lVar11 == local_38) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

