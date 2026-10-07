
undefined8 FUN_1007345c0(long *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar8 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0x0;
  if (param_4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    param_4 = puVar5;
  }
  FUN_1007353b0(param_4);
  lVar6 = FUN_100735470(param_4);
  lVar7 = FUN_100735470(param_4);
  if (lVar6 == 0) {
    uVar26 = 0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar26 = 1;
    if (lVar7 == 0) {
      uVar26 = 0;
    }
    else {
      do {
        uVar25 = uVar26;
        uVar26 = uVar25 * 2;
      } while (uVar25 < param_2);
      puVar8 = (undefined8 *)FUN_10081ddd0(uVar25 << 4,"../src/snlic/sn_crypto_helper_08.c",0x5fc);
      if (puVar8 == (undefined8 *)0x0) {
        uVar19 = 0;
        goto LAB_100734c49;
      }
      *puVar8 = 0;
      uVar23 = uVar25 & 0x7fffffffffffffff;
      uVar24 = uVar23 - 1;
      if (uVar24 != 0) {
        uVar10 = uVar24;
        if (uVar23 != 1) {
          uVar9 = (ulong)((int)uVar25 + 3) & 3;
          uVar15 = uVar24 - uVar9;
          uVar21 = 0;
          if (uVar15 != 0) {
            pauVar18 = (undefined1 (*) [16])(puVar8 + (uVar25 - 2));
            lVar20 = (uVar23 - 1) - ((ulong)((int)uVar25 + 3) & 3);
            do {
              *pauVar18 = (undefined1  [16])0x0;
              pauVar18[-1] = (undefined1  [16])0x0;
              pauVar18 = pauVar18 + -2;
              lVar20 = lVar20 + -4;
              uVar10 = uVar9;
              uVar21 = uVar15;
            } while (lVar20 != 0);
          }
          if (uVar24 == uVar21) goto LAB_10073477d;
        }
        do {
          puVar8[uVar10] = 0;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
LAB_10073477d:
      uVar10 = 0;
      if (param_2 == 0) {
LAB_100734852:
        plVar11 = param_3 + uVar10;
        lVar20 = param_2 - uVar10;
        plVar16 = puVar8 + uVar10 + uVar25;
        do {
          *plVar16 = *plVar11 + 0x38;
          plVar11 = plVar11 + 1;
          plVar16 = plVar16 + 1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      else {
        uVar10 = 0;
        if (((param_2 & 0xfffffffffffffffc) != 0) &&
           ((param_3 + (param_2 - 1) < puVar8 + uVar25 ||
            (uVar10 = 0, puVar8 + param_2 + (uVar25 - 1) < param_3)))) {
          plVar16 = puVar8 + uVar25 + 2;
          plVar11 = param_3 + 2;
          uVar21 = param_2 & 0xfffffffffffffffc;
          do {
            lVar20 = plVar11[-1];
            lVar13 = *plVar11;
            lVar3 = plVar11[1];
            plVar16[-2] = plVar11[-2] + 0x38;
            plVar16[-1] = lVar20 + 0x38;
            *plVar16 = lVar13 + 0x38;
            plVar16[1] = lVar3 + 0x38;
            plVar16 = plVar16 + 4;
            plVar11 = plVar11 + 4;
            uVar21 = uVar21 - 4;
            uVar10 = param_2 & 0xfffffffffffffffc;
          } while (uVar21 != 0);
        }
        if (uVar10 != param_2) goto LAB_100734852;
      }
      uVar23 = uVar23 + param_2;
      if (uVar23 < uVar26) {
        ___bzero(puVar8 + uVar25 + param_2,(uVar25 - param_2) * 8);
      }
      if (uVar24 != 0) {
        lVar20 = uVar25 * 8 + -4;
        do {
          puVar12 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
          if (puVar12 == (undefined8 *)0x0) {
            puVar8[uVar24] = 0;
            uVar19 = 0;
            goto LAB_100734c49;
          }
          *(undefined4 *)((long)puVar12 + 0x14) = 1;
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar8[uVar24] = puVar12;
          lVar13 = *(long *)((long)puVar8 + lVar20 * 2 + -8);
          if (lVar13 != 0) {
            lVar3 = *(long *)((long)puVar8 + lVar20 * 2);
            lVar22 = lVar13;
            if (((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) ||
               (lVar22 = lVar3, *(int *)(lVar13 + 8) == 0)) {
              lVar13 = FUN_10072d5c0(puVar12,lVar22);
              if (lVar13 == 0) goto LAB_100734c2b;
            }
            else {
              iVar4 = (**(code **)(*param_1 + 0x100))(param_1,puVar12,lVar13,lVar3,param_4);
              if (iVar4 == 0) goto LAB_100734c2b;
            }
          }
          lVar20 = lVar20 + -8;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      lVar20 = puVar8[1];
      if ((*(int *)(lVar20 + 8) == 0) ||
         (lVar20 = FUN_100735740(lVar20,lVar20,param_1 + 0xd,param_4), lVar20 != 0)) {
        if (*(code **)(*param_1 + 0x118) != (code *)0x0) {
          iVar4 = (**(code **)(*param_1 + 0x118))(param_1,puVar8[1],puVar8[1],param_4);
          uVar19 = 0;
          if ((iVar4 == 0) ||
             (iVar4 = (**(code **)(*param_1 + 0x118))(param_1,puVar8[1],puVar8[1],param_4),
             iVar4 == 0)) goto LAB_100734c49;
        }
        uVar25 = 2;
        if (2 < uVar23) {
          do {
            lVar20 = puVar8[uVar25 + 1];
            if ((lVar20 == 0) || (*(int *)(lVar20 + 8) == 0)) {
              lVar20 = FUN_10072d5c0(puVar8[uVar25],*(undefined8 *)((long)puVar8 + uVar25 * 4));
              if (lVar20 == 0) goto LAB_100734c2b;
            }
            else {
              iVar4 = (**(code **)(*param_1 + 0x100))
                                (param_1,lVar6,puVar8[uVar25 >> 1],lVar20,param_4);
              if (((iVar4 == 0) ||
                  (iVar4 = (**(code **)(*param_1 + 0x100))
                                     (param_1,lVar7,puVar8[uVar25 >> 1],puVar8[uVar25],param_4),
                  iVar4 == 0)) || (lVar20 = FUN_10072d5c0(puVar8[uVar25],lVar6), lVar20 == 0)) {
                uVar19 = 0;
                goto LAB_100734c49;
              }
              lVar20 = FUN_10072d5c0(puVar8[uVar25 + 1],lVar7);
              if (lVar20 == 0) goto LAB_100734c37;
            }
            uVar25 = uVar25 + 2;
          } while (uVar25 < uVar23);
        }
        uVar25 = 0;
        do {
          lVar6 = param_3[uVar25];
          if (*(int *)(lVar6 + 0x40) != 0) {
            lVar20 = lVar6 + 0x38;
            iVar4 = (**(code **)(*param_1 + 0x108))(param_1,lVar7,lVar20,param_4);
            if (((iVar4 == 0) ||
                (iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar6 + 8,lVar6 + 8,lVar7,param_4),
                iVar4 == 0)) ||
               ((iVar4 = (**(code **)(*param_1 + 0x100))(param_1,lVar7,lVar7,lVar20,param_4),
                iVar4 == 0 ||
                (iVar4 = (**(code **)(*param_1 + 0x100))
                                   (param_1,lVar6 + 0x20,lVar6 + 0x20,lVar7,param_4), iVar4 == 0))))
            goto LAB_100734c37;
            if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
              if ((*(int *)(lVar6 + 0x44) < 1) && (lVar20 = FUN_10072d730(lVar20,1), lVar20 == 0))
              goto LAB_100734c37;
              *(undefined4 *)(lVar6 + 0x48) = 0;
              **(undefined8 **)(lVar6 + 0x38) = 1;
              *(undefined4 *)(lVar6 + 0x40) = 1;
            }
            else {
              iVar4 = (**(code **)(*param_1 + 0x128))(param_1,lVar20,param_4);
              if (iVar4 == 0) goto LAB_100734c37;
            }
            *(undefined4 *)(lVar6 + 0x50) = 1;
          }
          uVar25 = uVar25 + 1;
          uVar19 = 1;
        } while (uVar25 < param_2);
        goto LAB_100734c49;
      }
    }
  }
  uVar19 = 0;
LAB_100734c49:
  if (*(int *)((long)param_4 + 0x34) == 0) {
    iVar4 = *(int *)(param_4 + 5);
    *(uint *)(param_4 + 5) = iVar4 - 1U;
    uVar1 = *(uint *)(param_4[4] + (ulong)(iVar4 - 1U) * 4);
    uVar2 = *(uint *)(param_4 + 6);
    if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
      iVar4 = *(int *)(param_4 + 3);
      uVar14 = uVar2 - uVar1;
      *(uint *)(param_4 + 3) = iVar4 - (uVar2 - uVar1);
      if (uVar14 != 0) {
        uVar17 = iVar4 + 0xfU & 0xf;
        if ((uVar14 & 1) != 0) {
          if (uVar17 == 0) {
            param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
            uVar17 = 0xf;
          }
          else {
            uVar17 = uVar17 - 1;
          }
          uVar14 = uVar14 - 1;
        }
        if (uVar2 - 1 != uVar1) {
          do {
            if (uVar17 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              iVar4 = 0xf;
            }
            else {
              iVar4 = uVar17 - 1;
            }
            uVar14 = uVar14 - 2;
            if (iVar4 == 0) {
              param_4[1] = *(undefined8 *)(param_4[1] + 0x180);
              uVar17 = 0xf;
            }
            else {
              uVar17 = iVar4 - 1;
            }
          } while (uVar14 != 0);
        }
      }
    }
    *(uint *)(param_4 + 6) = uVar1;
    *(undefined4 *)(param_4 + 7) = 0;
  }
  else {
    *(int *)((long)param_4 + 0x34) = *(int *)((long)param_4 + 0x34) + -1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_100729fd0(puVar5);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar26 = uVar26 >> 1;
    while (uVar26 = uVar26 - 1, uVar26 != 0) {
      if (puVar8[uVar26] != 0) {
        FUN_10072d9d0();
      }
    }
    FUN_10081e1a0(puVar8);
  }
  return uVar19;
LAB_100734c2b:
  uVar19 = 0;
  goto LAB_100734c49;
LAB_100734c37:
  uVar19 = 0;
  goto LAB_100734c49;
}

