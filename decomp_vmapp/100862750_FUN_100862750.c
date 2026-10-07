
int * FUN_100862750(long param_1,int *param_2)

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
    param_2 = (int *)FUN_1008a4610(&DAT_100bdc998);
    if (param_2 == (int *)0x0) {
      FUN_100887ce0(0x10,0x9c,0x41,"ec_asn1.c",0x28d);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 1) {
    if (*(long *)(param_2 + 2) != 0) {
      FUN_1008a4c40(*(long *)(param_2 + 2),&DAT_100bdc8e0);
    }
  }
  else if ((*param_2 == 0) && (*(long *)(param_2 + 2) != 0)) {
    FUN_100899890();
  }
  iVar6 = FUN_10085ba70(param_1);
  if (iVar6 == 0) {
    *param_2 = 1;
    lVar11 = FUN_10084b520();
    if (lVar11 == 0) {
      FUN_100887ce0(0x10,0x9b,0x41,"ec_asn1.c",0x22a);
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_1008632e3;
    }
    puVar10 = (undefined8 *)FUN_1008a4610(&DAT_100bdc8e0);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_100887ce0(0x10,0x9b,0x41,"ec_asn1.c",0x230);
      FUN_10084b4b0(lVar11);
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_1008632e3;
    }
    *puVar10 = 1;
    if ((param_1 == 0) || (plVar4 = (long *)puVar10[1], plVar4 == (long *)0x0)) {
LAB_100862bb1:
      FUN_100887ce0(0x10,0x9b,0x10,"ec_asn1.c",0x23b);
      lVar13 = 0;
LAB_1008632a9:
      FUN_1008a4c40(puVar10,&DAT_100bdc8e0);
      FUN_10084b4b0(lVar11);
      puVar10 = (undefined8 *)0x0;
      if (lVar13 == 0) {
        param_2[2] = 0;
        param_2[3] = 0;
        goto LAB_1008632e3;
      }
    }
    else {
      if (*plVar4 != 0) {
        FUN_100899890();
      }
      if (plVar4[1] != 0) {
        FUN_1008a89a0();
      }
      uVar12 = FUN_10085b870(param_1);
      iVar6 = FUN_10085b880(uVar12);
      lVar13 = FUN_100821870(iVar6);
      *plVar4 = lVar13;
      if (lVar13 == 0) {
        uVar12 = 8;
        uVar23 = 0x148;
LAB_100862bac:
        FUN_100887ce0(0x10,0x9a,uVar12,"ec_asn1.c",uVar23);
        goto LAB_100862bb1;
      }
      if (iVar6 == 0x196) {
        lVar13 = FUN_10084b520();
        if (lVar13 == 0) {
          uVar12 = 0x41;
          uVar23 = 0x14e;
          goto LAB_100862bac;
        }
        iVar6 = FUN_10085bb90(param_1,lVar13,0,0,0);
        if (iVar6 == 0) {
          uVar12 = 0x10;
          uVar23 = 0x153;
        }
        else {
          lVar14 = FUN_10089b490(lVar13,0);
          plVar4[1] = lVar14;
          if (lVar14 != 0) {
            FUN_10084b4b0(lVar13);
            goto LAB_100862901;
          }
          uVar12 = 0xd;
          uVar23 = 0x159;
        }
        FUN_100887ce0(0x10,0x9a,uVar12,"ec_asn1.c",uVar23);
        FUN_10084b4b0(lVar13);
LAB_100862ce3:
        uVar12 = 0x10;
        uVar23 = 0x23b;
LAB_1008632a1:
        FUN_100887ce0(0x10,0x9b,uVar12,"ec_asn1.c",uVar23);
        lVar13 = 0;
        goto LAB_1008632a9;
      }
      plVar15 = (long *)FUN_1008a4610(&DAT_100bdc678);
      plVar4[1] = (long)plVar15;
      if (plVar15 == (long *)0x0) {
        uVar12 = 0x41;
        uVar23 = 0x16b;
        goto LAB_100862bac;
      }
      iVar6 = FUN_10085bc50(param_1);
      *plVar15 = (long)iVar6;
      uVar12 = FUN_10085b870(param_1);
      iVar6 = FUN_10085b880(uVar12);
      if (iVar6 != 0x197) {
LAB_100862b49:
        uVar23 = 0x9a;
        uVar12 = 0x10;
        uVar22 = 0x174;
LAB_100862b65:
        FUN_100887ce0(0x10,uVar23,uVar12,"ec_asn1.c",uVar22);
        goto LAB_100862ce3;
      }
      lVar13 = -1;
      do {
        lVar14 = lVar13 * 4;
        lVar13 = lVar13 + 1;
      } while (*(int *)(param_1 + 0x84 + lVar14) != 0);
      iVar6 = 0x2ab;
      if (((int)lVar13 != 4) && (iVar6 = 0x2aa, (int)lVar13 != 2)) goto LAB_100862b49;
      lVar13 = FUN_100821870();
      plVar15[1] = lVar13;
      if (lVar13 == 0) {
        uVar23 = 0x9a;
        uVar12 = 8;
        uVar22 = 0x179;
        goto LAB_100862cde;
      }
      if (iVar6 == 0x2ab) {
        uVar12 = FUN_10085b870(param_1);
        iVar6 = FUN_10085b880(uVar12);
        if ((((iVar6 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
            (uVar1 = *(uint *)(param_1 + 0x84), (ulong)uVar1 != 0)) &&
           (((uVar2 = *(uint *)(param_1 + 0x88), (ulong)uVar2 != 0 &&
             (uVar3 = *(uint *)(param_1 + 0x8c), (ulong)uVar3 != 0)) &&
            (*(int *)(param_1 + 0x90) == 0)))) {
          puVar18 = (ulong *)FUN_1008a4610(&DAT_100bdc5c8);
          plVar15[2] = (long)puVar18;
          if (puVar18 != (ulong *)0x0) {
            *puVar18 = (ulong)uVar3;
            puVar18[1] = (ulong)uVar2;
            puVar18[2] = (ulong)uVar1;
            goto LAB_100862901;
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
        goto LAB_100862b65;
      }
      if (iVar6 == 0x2aa) {
        uVar12 = FUN_10085b870(param_1);
        iVar6 = FUN_10085b880(uVar12);
        if (((iVar6 == 0x197) && (*(int *)(param_1 + 0x80) != 0)) &&
           ((iVar6 = *(int *)(param_1 + 0x84), iVar6 != 0 && (*(int *)(param_1 + 0x88) == 0)))) {
          lVar13 = FUN_1008a8200();
          plVar15[2] = lVar13;
          if (lVar13 == 0) {
            uVar23 = 0x9a;
            uVar12 = 0x41;
            uVar22 = 0x185;
          }
          else {
            iVar6 = FUN_10089b2a0(lVar13,iVar6);
            if (iVar6 != 0) goto LAB_100862901;
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
LAB_100862cde:
        FUN_100887ce0(0x10,uVar23,uVar12,"ec_asn1.c",uVar22);
        goto LAB_100862ce3;
      }
      lVar13 = FUN_1008a8400();
      plVar15[2] = lVar13;
      if (lVar13 == 0) {
        uVar23 = 0x9a;
        uVar12 = 0x41;
        uVar22 = 0x1a1;
        goto LAB_100862cde;
      }
LAB_100862901:
      plVar4 = (long *)puVar10[2];
      local_31 = 0;
      if (((plVar4 == (long *)0x0) || (*plVar4 == 0)) || (plVar4[1] == 0)) {
LAB_100863285:
        uVar12 = 0x10;
        uVar23 = 0x241;
        goto LAB_1008632a1;
      }
      lVar13 = FUN_10084b520();
      if (lVar13 == 0) {
        FUN_100887ce0(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
        goto LAB_100863285;
      }
      lVar14 = FUN_10084b520();
      if (lVar14 == 0) {
        FUN_100887ce0(0x10,0x99,0x41,"ec_asn1.c",0x1bc);
        FUN_10084b4b0(lVar13);
        goto LAB_100863285;
      }
      uVar12 = FUN_10085b870(param_1);
      iVar6 = FUN_10085b880(uVar12);
      if (iVar6 == 0x196) {
        iVar6 = FUN_10085bb90(param_1,0,lVar13,lVar14);
        if (iVar6 == 0) {
          uVar12 = 0x1c5;
          goto LAB_100862f2f;
        }
LAB_100862d73:
        iVar6 = FUN_10084b410(lVar13);
        iVar7 = FUN_10084b410(lVar14);
        local_64 = 1;
        local_70 = &local_31;
        puVar16 = (undefined1 *)0x0;
        iVar8 = 1;
        puVar20 = local_70;
        if (0xe < iVar6 + 0xeU) {
          puVar16 = (undefined1 *)
                    FUN_10081ddd0((int)(iVar6 + 7 + ((uint)(iVar6 + 7 >> 0x1f) >> 0x1d)) >> 3,
                                  "ec_asn1.c",0x1da);
          if (puVar16 != (undefined1 *)0x0) {
            iVar8 = FUN_10084bdf0(lVar13,puVar16);
            puVar20 = puVar16;
            if (iVar8 != 0) goto LAB_100862e0f;
            FUN_100887ce0(0x10,0x99,3,"ec_asn1.c",0x1df);
            local_58 = (undefined1 *)0x0;
            bVar5 = false;
            goto LAB_10086312e;
          }
          FUN_100887ce0(0x10,0x99,0x41,"ec_asn1.c",0x1db);
          goto LAB_100862f80;
        }
LAB_100862e0f:
        local_58 = (undefined1 *)0x0;
        if (iVar7 + 0xeU < 0xf) {
LAB_100862e72:
          iVar6 = FUN_1008afb30(*plVar4,puVar20,iVar8);
          if ((iVar6 == 0) || (iVar6 = FUN_1008afb30(plVar4[1],local_70,local_64), iVar6 == 0)) {
            uVar12 = 0xd;
            uVar23 = 0x1f8;
LAB_100863116:
            FUN_100887ce0(0x10,0x99,uVar12,"ec_asn1.c",uVar23);
            bVar5 = false;
          }
          else {
            lVar21 = *(long *)(param_1 + 0x50);
            lVar17 = plVar4[2];
            if (lVar21 == 0) {
              if (lVar17 != 0) {
                FUN_1008a8320();
                plVar4[2] = 0;
              }
            }
            else {
              if (lVar17 == 0) {
                lVar17 = FUN_1008a8300();
                plVar4[2] = lVar17;
                if (lVar17 == 0) {
                  uVar12 = 0x41;
                  uVar23 = 0x200;
                  goto LAB_100863116;
                }
                lVar21 = *(long *)(param_1 + 0x50);
              }
              *(ulong *)(lVar17 + 0x10) = *(ulong *)(lVar17 + 0x10) & 0xfffffffffffffff0 | 8;
              iVar6 = FUN_100899940(lVar17,lVar21,*(undefined4 *)(param_1 + 0x58));
              if (iVar6 == 0) {
                uVar12 = 0xd;
                uVar23 = 0x207;
                goto LAB_100863116;
              }
            }
            bVar5 = true;
          }
        }
        else {
          local_70 = (undefined1 *)
                     FUN_10081ddd0((int)(iVar7 + 7 + ((uint)(iVar7 + 7 >> 0x1f) >> 0x1d)) >> 3,
                                   "ec_asn1.c",0x1ea);
          if (local_70 != (undefined1 *)0x0) {
            local_64 = FUN_10084bdf0(lVar14,local_70);
            local_58 = local_70;
            if (local_64 != 0) goto LAB_100862e72;
            uVar12 = 3;
            uVar23 = 0x1ef;
            goto LAB_100863116;
          }
          FUN_100887ce0(0x10,0x99,0x41,"ec_asn1.c",0x1eb);
          bVar5 = false;
          local_58 = (undefined1 *)0x0;
        }
        if (puVar16 != (undefined1 *)0x0) {
LAB_10086312e:
          FUN_10081e1a0(puVar16);
        }
        if (local_58 != (undefined1 *)0x0) {
          FUN_10081e1a0();
        }
        FUN_10084b4b0(lVar13);
      }
      else {
        iVar6 = FUN_10085bc10(param_1,0,lVar13,lVar14,0);
        if (iVar6 != 0) goto LAB_100862d73;
        uVar12 = 0x1cd;
LAB_100862f2f:
        FUN_100887ce0(0x10,0x99,0x10,"ec_asn1.c",uVar12);
LAB_100862f80:
        FUN_10084b4b0(lVar13);
        bVar5 = false;
      }
      FUN_10084b4b0(lVar14);
      if (!bVar5) goto LAB_100863285;
      lVar14 = FUN_10085b9c0(param_1);
      if (lVar14 == 0) {
        uVar12 = 0x71;
        uVar23 = 0x247;
        goto LAB_1008632a1;
      }
      uVar9 = FUN_10085ba90(param_1);
      uVar19 = FUN_10086a220(param_1,lVar14,uVar9,0,0,0);
      if (uVar19 == 0) {
        uVar12 = 0x10;
        uVar23 = 0x24f;
        goto LAB_1008632a1;
      }
      lVar13 = FUN_10081ddd0(uVar19 & 0xffffffff,"ec_asn1.c",0x252);
      if (lVar13 == 0) {
        uVar12 = 0x41;
        uVar23 = 0x253;
        goto LAB_1008632a1;
      }
      lVar14 = FUN_10086a220(param_1,lVar14,uVar9,lVar13,uVar19,0);
      if (lVar14 == 0) {
        uVar12 = 0x10;
        uVar23 = 599;
LAB_10086341f:
        FUN_100887ce0(0x10,0x9b,uVar12,"ec_asn1.c",uVar23);
        goto LAB_1008632a9;
      }
      lVar14 = puVar10[3];
      if (lVar14 == 0) {
        lVar14 = FUN_1008a8380();
        puVar10[3] = lVar14;
        if (lVar14 == 0) {
          uVar12 = 0x41;
          uVar23 = 0x25b;
          goto LAB_10086341f;
        }
      }
      iVar6 = FUN_10089b640(lVar14,lVar13,uVar19 & 0xffffffff);
      if (iVar6 == 0) {
        uVar12 = 0xd;
        uVar23 = 0x25f;
        goto LAB_10086341f;
      }
      iVar6 = FUN_10085b9d0(param_1,lVar11,0);
      if (iVar6 == 0) {
        uVar12 = 0x10;
        uVar23 = 0x265;
        goto LAB_10086341f;
      }
      lVar14 = FUN_10089b490(lVar11,puVar10[4]);
      puVar10[4] = lVar14;
      if (lVar14 == 0) {
        uVar12 = 0xd;
        uVar23 = 0x26a;
        goto LAB_10086341f;
      }
      iVar6 = FUN_10085ba00(param_1,lVar11,0);
      if (iVar6 != 0) {
        lVar14 = FUN_10089b490(lVar11,puVar10[5]);
        puVar10[5] = lVar14;
        if (lVar14 == 0) {
          uVar12 = 0xd;
          uVar23 = 0x272;
          goto LAB_10086341f;
        }
      }
      FUN_10084b4b0(lVar11);
    }
    FUN_10081e1a0(lVar13);
    *(undefined8 **)(param_2 + 2) = puVar10;
  }
  else {
    iVar6 = FUN_10085ba50(param_1);
    if (iVar6 == 0) goto LAB_1008632e3;
    *param_2 = 0;
    puVar10 = (undefined8 *)FUN_100821870(iVar6);
    *(undefined8 **)(param_2 + 2) = puVar10;
  }
  if (puVar10 != (undefined8 *)0x0) {
    return param_2;
  }
LAB_1008632e3:
  FUN_1008a4c40(param_2,&DAT_100bdc998);
  return (int *)0x0;
}

