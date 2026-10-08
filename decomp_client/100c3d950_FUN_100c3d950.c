
int * FUN_100c3d950(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 *local_70;
  int local_64;
  undefined1 *local_58;
  undefined1 local_31;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_100c7fb90(&DAT_10224ccd8);
    if (param_2 == (int *)0x0) {
      FUN_100c62ee0(0x10,0x9c,0x41,"ec_asn1.c",0x28d);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 1) {
    if (*(long *)(param_2 + 2) != 0) {
      FUN_100c801c0(*(long *)(param_2 + 2),&DAT_10224cc20);
    }
  }
  else if ((*param_2 == 0) && (*(long *)(param_2 + 2) != 0)) {
    FUN_100c74e10();
  }
  iVar6 = FUN_100c36c70(param_1);
  if (iVar6 == 0) {
    *param_2 = 1;
    lVar11 = FUN_100c26720();
    if (lVar11 == 0) {
      FUN_100c62ee0(0x10,0x9b,0x41,"ec_asn1.c",0x22a);
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_100c3e4e3;
    }
    puVar10 = (undefined8 *)FUN_100c7fb90(&DAT_10224cc20);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_100c62ee0(0x10,0x9b,0x41,"ec_asn1.c",0x230);
      FUN_100c266b0(lVar11);
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_100c3e4e3;
    }
    *puVar10 = 1;
    if ((param_1 == 0) || (plVar4 = (long *)puVar10[1], plVar4 == (long *)0x0)) {
LAB_100c3ddb1:
      FUN_100c62ee0(0x10,0x9b,0x10,"ec_asn1.c",0x23b);
      lVar13 = 0;
LAB_100c3e4a9:
      FUN_100c801c0(puVar10,&DAT_10224cc20);
      FUN_100c266b0(lVar11);
      puVar10 = (undefined8 *)0x0;
      if (lVar13 == 0) {
        param_2[2] = 0;
        param_2[3] = 0;
        goto LAB_100c3e4e3;
      }
    }
    else {
      if (*plVar4 != 0) {
        FUN_100c74e10();
      }
      if (plVar4[1] != 0) {
        FUN_100c83f20();
      }
      uVar12 = FUN_100c36a70(param_1);
      iVar6 = FUN_100c36a80(uVar12);
      lVar13 = FUN_100bf6fe0(iVar6);
      *plVar4 = lVar13;
      if (lVar13 == 0) {
        uVar12 = 8;
        uVar23 = 0x148;
LAB_100c3ddac:
        FUN_100c62ee0(0x10,0x9a,uVar12,"ec_asn1.c",uVar23);
        goto LAB_100c3ddb1;
      }
      if (iVar6 == 0x196) {
        lVar13 = FUN_100c26720();
        if (lVar13 == 0) {
          uVar12 = 0x41;
          uVar23 = 0x14e;
          goto LAB_100c3ddac;
        }
        iVar6 = FUN_100c36d90(param_1,lVar13,0,0,0);
        if (iVar6 == 0) {
          uVar12 = 0x10;
          uVar23 = 0x153;
        }
        else {
          lVar14 = FUN_100c76a10(lVar13,0);
          plVar4[1] = lVar14;
          if (lVar14 != 0) {
            FUN_100c266b0(lVar13);
            goto LAB_100c3db01;
          }
          uVar12 = 0xd;
          uVar23 = 0x159;
        }
        FUN_100c62ee0(0x10,0x9a,uVar12,"ec_asn1.c",uVar23);
        FUN_100c266b0(lVar13);
LAB_100c3dee3:
        uVar12 = 0x10;
        uVar23 = 0x23b;
LAB_100c3e4a1:
        FUN_100c62ee0(0x10,0x9b,uVar12,"ec_asn1.c",uVar23);
        lVar13 = 0;
        goto LAB_100c3e4a9;
      }
      plVar15 = (long *)FUN_100c7fb90(&DAT_10224c9b8);
      plVar4[1] = (long)plVar15;
      if (plVar15 == (long *)0x0) {
        uVar12 = 0x41;
        uVar23 = 0x16b;
        goto LAB_100c3ddac;
      }
      iVar6 = FUN_100c36e50(param_1);
      *plVar15 = (long)iVar6;
      uVar12 = FUN_100c36a70(param_1);
      iVar6 = FUN_100c36a80(uVar12);
      if (iVar6 != 0x197) {
LAB_100c3dd49:
        uVar23 = 0x9a;
        uVar12 = 0x10;
        uVar22 = 0x174;
LAB_100c3dd65:
        FUN_100c62ee0(0x10,uVar23,uVar12,"ec_asn1.c",uVar22);
        goto LAB_100c3dee3;
      }
      lVar13 = -1;
      do {
        lVar14 = lVar13 * 4;
        lVar13 = lVar13 + 1;
      } while (*(int *)(param_1 + 0x84 + lVar14) != 0);
      iVar6 = 0x2ab;
      if (((int)lVar13 != 4) && (iVar6 = 0x2aa, (int)lVar13 != 2)) goto LAB_100c3dd49;
      lVar13 = FUN_100bf6fe0();
      plVar15[1] = lVar13;
      if (lVar13 == 0) {
        uVar23 = 0x9a;
        uVar12 = 8;
        uVar22 = 0x179;
        goto LAB_100c3dede;
      }
      if (iVar6 == 0x2ab) {
        uVar12 = FUN_100c36a70(param_1);
        iVar6 = FUN_100c36a80(uVar12);
        if ((((iVar6 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
            (uVar1 = *(uint *)(param_1 + 0x84), (ulong)uVar1 != 0)) &&
           (((uVar2 = *(uint *)(param_1 + 0x88), (ulong)uVar2 != 0 &&
             (uVar3 = *(uint *)(param_1 + 0x8c), (ulong)uVar3 != 0)) &&
            (*(int *)(param_1 + 0x90) == 0)))) {
          puVar18 = (ulong *)FUN_100c7fb90(&DAT_10224c908);
          plVar15[2] = (long)puVar18;
          if (puVar18 != (ulong *)0x0) {
            *puVar18 = (ulong)uVar3;
            puVar18[1] = (ulong)uVar2;
            puVar18[2] = (ulong)uVar1;
            goto LAB_100c3db01;
          }
          uVar23 = 0x9a;
          uVar12 = 0x41;
          uVar22 = 0x194;
        }
        else {
          uVar23 = 0xc1;
          uVar12 = 0x42;
          uVar22 = 0x77;
        }
        goto LAB_100c3dd65;
      }
      if (iVar6 == 0x2aa) {
        uVar12 = FUN_100c36a70(param_1);
        iVar6 = FUN_100c36a80(uVar12);
        if (((iVar6 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
           ((iVar6 = *(int *)(param_1 + 0x84), iVar6 != 0 && (*(int *)(param_1 + 0x88) == 0)))) {
          lVar13 = FUN_100c83780();
          plVar15[2] = lVar13;
          if (lVar13 == 0) {
            uVar23 = 0x9a;
            uVar12 = 0x41;
            uVar22 = 0x185;
          }
          else {
            iVar6 = FUN_100c76820(lVar13,iVar6);
            if (iVar6 != 0) goto LAB_100c3db01;
            uVar23 = 0x9a;
            uVar12 = 0xd;
            uVar22 = 0x189;
          }
        }
        else {
          uVar23 = 0xc2;
          uVar12 = 0x42;
          uVar22 = 0x61;
        }
LAB_100c3dede:
        FUN_100c62ee0(0x10,uVar23,uVar12,"ec_asn1.c",uVar22);
        goto LAB_100c3dee3;
      }
      lVar13 = FUN_100c83980();
      plVar15[2] = lVar13;
      if (lVar13 == 0) {
        uVar23 = 0x9a;
        uVar12 = 0x41;
        uVar22 = 0x1a1;
        goto LAB_100c3dede;
      }
LAB_100c3db01:
      plVar4 = (long *)puVar10[2];
      local_31 = 0;
      if (((plVar4 == (long *)0x0) || (*plVar4 == 0)) || (plVar4[1] == 0)) {
LAB_100c3e485:
        uVar12 = 0x10;
        uVar23 = 0x241;
        goto LAB_100c3e4a1;
      }
      lVar13 = FUN_100c26720();
      if (lVar13 == 0) {
        FUN_100c62ee0(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
        goto LAB_100c3e485;
      }
      lVar14 = FUN_100c26720();
      if (lVar14 == 0) {
        FUN_100c62ee0(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
        FUN_100c266b0(lVar13);
        goto LAB_100c3e485;
      }
      uVar12 = FUN_100c36a70(param_1);
      iVar6 = FUN_100c36a80(uVar12);
      if (iVar6 == 0x196) {
        iVar6 = FUN_100c36d90(param_1,0,lVar13,lVar14);
        if (iVar6 == 0) {
          uVar12 = 0x1c5;
          goto LAB_100c3e12f;
        }
LAB_100c3df73:
        iVar6 = FUN_100c26610(lVar13);
        iVar7 = FUN_100c26610(lVar14);
        local_64 = 1;
        local_70 = &local_31;
        puVar16 = (undefined1 *)0x0;
        iVar8 = 1;
        puVar20 = local_70;
        if (0xe < iVar6 + 0xeU) {
          puVar16 = (undefined1 *)
                    FUN_100bf3540((int)(iVar6 + 7 + ((uint)(iVar6 + 7 >> 0x1f) >> 0x1d)) >> 3,
                                  "ec_asn1.c",0x1da);
          if (puVar16 != (undefined1 *)0x0) {
            iVar8 = FUN_100c26ff0(lVar13,puVar16);
            puVar20 = puVar16;
            if (iVar8 != 0) goto LAB_100c3e00f;
            FUN_100c62ee0(0x10,0x99,3,"ec_asn1.c",0x1df);
            local_58 = (undefined1 *)0x0;
            bVar5 = false;
            goto LAB_100c3e32e;
          }
          FUN_100c62ee0(0x10,0x99,0x41,"ec_asn1.c",0x1db);
          goto LAB_100c3e180;
        }
LAB_100c3e00f:
        local_58 = (undefined1 *)0x0;
        if (iVar7 + 0xeU < 0xf) {
LAB_100c3e072:
          iVar6 = FUN_100c8b0b0(*plVar4,puVar20,iVar8);
          if ((iVar6 == 0) || (iVar6 = FUN_100c8b0b0(plVar4[1],local_70,local_64), iVar6 == 0)) {
            uVar12 = 0xd;
            uVar23 = 0x1f8;
LAB_100c3e316:
            FUN_100c62ee0(0x10,0x99,uVar12,"ec_asn1.c",uVar23);
            bVar5 = false;
          }
          else {
            lVar21 = *(long *)(param_1 + 0x50);
            lVar17 = plVar4[2];
            if (lVar21 == 0) {
              if (lVar17 != 0) {
                FUN_100c838a0();
                plVar4[2] = 0;
              }
            }
            else {
              if (lVar17 == 0) {
                lVar17 = FUN_100c83880();
                plVar4[2] = lVar17;
                if (lVar17 == 0) {
                  uVar12 = 0x41;
                  uVar23 = 0x200;
                  goto LAB_100c3e316;
                }
                lVar21 = *(long *)(param_1 + 0x50);
              }
              *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffff0 | 8;
              iVar6 = FUN_100c74ec0(lVar17,lVar21,*(undefined4 *)(param_1 + 0x58));
              if (iVar6 == 0) {
                uVar12 = 0xd;
                uVar23 = 0x207;
                goto LAB_100c3e316;
              }
            }
            bVar5 = true;
          }
        }
        else {
          local_70 = (undefined1 *)
                     FUN_100bf3540((int)(iVar7 + 7 + ((uint)(iVar7 + 7 >> 0x1f) >> 0x1d)) >> 3,
                                   "ec_asn1.c",0x1ea);
          if (local_70 != (undefined1 *)0x0) {
            local_64 = FUN_100c26ff0(lVar14,local_70);
            local_58 = local_70;
            if (local_64 != 0) goto LAB_100c3e072;
            uVar12 = 3;
            uVar23 = 0x1ef;
            goto LAB_100c3e316;
          }
          FUN_100c62ee0(0x10,0x99,0x41,"ec_asn1.c",0x1eb);
          bVar5 = false;
          local_58 = (undefined1 *)0x0;
        }
        if (puVar16 != (undefined1 *)0x0) {
LAB_100c3e32e:
          FUN_100bf3910(puVar16);
        }
        if (local_58 != (undefined1 *)0x0) {
          FUN_100bf3910();
        }
        FUN_100c266b0(lVar13);
      }
      else {
        iVar6 = FUN_100c36e10(param_1,0,lVar13,lVar14,0);
        if (iVar6 != 0) goto LAB_100c3df73;
        uVar12 = 0x1cd;
LAB_100c3e12f:
        FUN_100c62ee0(0x10,0x99,0x10,"ec_asn1.c",uVar12);
LAB_100c3e180:
        FUN_100c266b0(lVar13);
        bVar5 = false;
      }
      FUN_100c266b0(lVar14);
      if (!bVar5) goto LAB_100c3e485;
      lVar14 = FUN_100c36bc0(param_1);
      if (lVar14 == 0) {
        uVar12 = 0x71;
        uVar23 = 0x247;
        goto LAB_100c3e4a1;
      }
      uVar9 = FUN_100c36c90(param_1);
      uVar19 = FUN_100c45420(param_1,lVar14,uVar9,0,0,0);
      if (uVar19 == 0) {
        uVar12 = 0x10;
        uVar23 = 0x24f;
        goto LAB_100c3e4a1;
      }
      lVar13 = FUN_100bf3540(uVar19 & 0xffffffff,"ec_asn1.c",0x252);
      if (lVar13 == 0) {
        uVar12 = 0x41;
        uVar23 = 0x253;
        goto LAB_100c3e4a1;
      }
      lVar14 = FUN_100c45420(param_1,lVar14,uVar9,lVar13,uVar19,0);
      if (lVar14 == 0) {
        uVar12 = 0x10;
        uVar23 = 599;
LAB_100c3e61f:
        FUN_100c62ee0(0x10,0x9b,uVar12,"ec_asn1.c",uVar23);
        goto LAB_100c3e4a9;
      }
      lVar14 = puVar10[3];
      if (lVar14 == 0) {
        lVar14 = FUN_100c83900();
        puVar10[3] = lVar14;
        if (lVar14 == 0) {
          uVar12 = 0x41;
          uVar23 = 0x25b;
          goto LAB_100c3e61f;
        }
      }
      iVar6 = FUN_100c76bc0(lVar14,lVar13,uVar19 & 0xffffffff);
      if (iVar6 == 0) {
        uVar12 = 0xd;
        uVar23 = 0x25f;
        goto LAB_100c3e61f;
      }
      iVar6 = FUN_100c36bd0(param_1,lVar11,0);
      if (iVar6 == 0) {
        uVar12 = 0x10;
        uVar23 = 0x265;
        goto LAB_100c3e61f;
      }
      lVar14 = FUN_100c76a10(lVar11,puVar10[4]);
      puVar10[4] = lVar14;
      if (lVar14 == 0) {
        uVar12 = 0xd;
        uVar23 = 0x26a;
        goto LAB_100c3e61f;
      }
      iVar6 = FUN_100c36c00(param_1,lVar11,0);
      if (iVar6 != 0) {
        lVar14 = FUN_100c76a10(lVar11,puVar10[5]);
        puVar10[5] = lVar14;
        if (lVar14 == 0) {
          uVar12 = 0xd;
          uVar23 = 0x272;
          goto LAB_100c3e61f;
        }
      }
      FUN_100c266b0(lVar11);
    }
    FUN_100bf3910(lVar13);
    *(undefined8 **)(param_2 + 2) = puVar10;
  }
  else {
    iVar6 = FUN_100c36c50(param_1);
    if (iVar6 == 0) goto LAB_100c3e4e3;
    *param_2 = 0;
    puVar10 = (undefined8 *)FUN_100bf6fe0(iVar6);
    *(undefined8 **)(param_2 + 2) = puVar10;
  }
  if (puVar10 != (undefined8 *)0x0) {
    return param_2;
  }
LAB_100c3e4e3:
  FUN_100c801c0(param_2,&DAT_10224ccd8);
  return (int *)0x0;
}

