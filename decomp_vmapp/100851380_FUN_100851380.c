
long FUN_100851380(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 < 1) {
LAB_100851408:
    FUN_100887ce0(3,0x79,0x70,"bn_sqrt.c",0x5b);
    lVar15 = 0;
  }
  else {
    uVar1 = *(ulong *)*param_3;
    lVar5 = param_1;
    if (((uVar1 & 1) == 0) || ((iVar2 == 1 && (uVar1 == 1)))) {
      if ((iVar2 != 1) || (uVar1 != 2)) goto LAB_100851408;
      if (param_1 == 0) {
        lVar5 = FUN_10084b520();
        lVar15 = 0;
        if (lVar5 == 0) goto LAB_100851acf;
      }
      iVar2 = FUN_10084c160(param_2,0);
      iVar2 = FUN_10084bbb0(lVar5,(long)iVar2);
    }
    else {
      iVar2 = *(int *)(param_2 + 1);
      if ((iVar2 != 0) &&
         (((iVar2 != 1 || (*(long *)*param_2 != 1)) || (*(int *)(param_2 + 2) != 0)))) {
        FUN_10084ca60(param_4);
        uVar6 = FUN_10084cc20(param_4);
        puVar7 = (undefined8 *)FUN_10084cc20(param_4);
        lVar5 = FUN_10084cc20(param_4);
        puVar8 = (undefined8 *)FUN_10084cc20(param_4);
        lVar9 = FUN_10084cc20(param_4);
        puVar10 = (undefined8 *)FUN_10084cc20(param_4);
        lVar15 = 0;
        if (puVar10 == (undefined8 *)0x0) goto LAB_100851acf;
        lVar11 = param_1;
        if (param_1 == 0) {
          lVar11 = FUN_10084b520();
          lVar15 = 0;
          if (lVar11 == 0) goto LAB_100851acf;
        }
        iVar2 = FUN_10084e8b0(uVar6,param_2,param_3,param_4);
        if (iVar2 != 0) {
          iVar2 = 0;
          do {
            iVar2 = iVar2 + 1;
            iVar3 = FUN_10084c160(param_3,iVar2);
          } while (iVar3 == 0);
          lVar15 = lVar11;
          if (iVar2 == 2) {
            iVar2 = FUN_10084ec70(puVar8,uVar6,param_3);
            if ((iVar2 != 0) && (iVar2 = FUN_100850250(lVar5,param_3,3), iVar2 != 0)) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              iVar2 = FUN_1008487a0(puVar7,puVar8,lVar5,param_3,param_4);
              if (((((iVar2 != 0) &&
                    (iVar2 = FUN_10084eba0(puVar10,puVar7,param_3,param_4), iVar2 != 0)) &&
                   (iVar2 = FUN_10084eac0(puVar8,puVar8,puVar10,param_3,param_4), iVar2 != 0)) &&
                  ((iVar2 = FUN_100850820(puVar8,1), iVar2 != 0 &&
                   (iVar2 = FUN_10084eac0(lVar9,uVar6,puVar7,param_3,param_4), iVar2 != 0)))) &&
                 (iVar2 = FUN_10084eac0(lVar9,lVar9,puVar8,param_3,param_4), iVar2 != 0)) {
LAB_100851a5d:
                lVar5 = FUN_10084b950(lVar11,lVar9);
                if (lVar5 != 0) {
LAB_100851a6f:
                  iVar2 = FUN_10084eba0(lVar9,lVar11,param_3,param_4);
                  if (iVar2 != 0) {
                    iVar2 = FUN_10084bf60(lVar9,uVar6);
                    if (iVar2 == 0) goto LAB_100851acf;
                    uVar6 = 0x6f;
                    uVar16 = 0x18a;
                    goto LAB_100851ab3;
                  }
                }
              }
            }
          }
          else if (iVar2 == 1) {
            iVar2 = FUN_100850250(lVar5,param_3,2);
            if (iVar2 != 0) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              iVar2 = FUN_100850720(lVar5,1);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_1008487a0(lVar11,uVar6,lVar5,param_3,param_4), iVar2 != 0))
              goto LAB_100851a6f;
            }
          }
          else {
            lVar12 = FUN_10084b950(lVar5,param_3);
            if (lVar12 != 0) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              lVar12 = 2;
              do {
                if (lVar12 < 0x16) {
LAB_100851762:
                  iVar3 = FUN_10084bbb0(puVar10,lVar12);
                  if (iVar3 == 0) goto LAB_100851ab8;
                }
                else {
                  uVar4 = FUN_10084b410(param_3);
                  iVar3 = FUN_10084fb20(puVar10,uVar4,0,0);
                  if (iVar3 == 0) goto LAB_100851ab8;
                  iVar3 = FUN_10084bf00(puVar10,param_3);
                  if (-1 < iVar3) {
                    pcVar13 = FUN_100847940;
                    if (*(int *)(param_3 + 2) == 0) {
                      pcVar13 = FUN_100847e90;
                    }
                    iVar3 = (*pcVar13)(puVar10,puVar10,param_3);
                    if (iVar3 == 0) goto LAB_100851ab8;
                  }
                  if (*(int *)(puVar10 + 1) == 0) goto LAB_100851762;
                }
                iVar3 = FUN_1008510c0(puVar10,lVar5,param_4);
                if (iVar3 < -1) goto LAB_100851ab8;
                if (iVar3 != 1) {
                  if (iVar3 == -1) {
                    iVar3 = FUN_100850250(lVar5,lVar5,iVar2);
                    if ((iVar3 == 0) ||
                       (iVar3 = FUN_1008487a0(puVar10,puVar10,lVar5,param_3,param_4), iVar3 == 0))
                    goto LAB_100851ab8;
                    if ((*(int *)(puVar10 + 1) == 1) &&
                       ((*(long *)*puVar10 == 1 && (*(int *)(puVar10 + 2) == 0)))) {
                      uVar6 = 0x70;
                      uVar16 = 0x114;
                      goto LAB_100851ab3;
                    }
                    iVar3 = FUN_10084fef0(puVar8,lVar5);
                    if (iVar3 == 0) goto LAB_100851ab8;
                    if (*(int *)(puVar8 + 1) == 0) {
                      iVar3 = FUN_10084e8b0(puVar8,uVar6,param_3,param_4);
                      if (iVar3 == 0) goto LAB_100851ab8;
                      if (*(int *)(puVar8 + 1) != 0) {
                        iVar3 = FUN_10084bbb0(lVar9,1);
                        if (iVar3 != 0) goto LAB_1008518e0;
                        goto LAB_100851ab8;
                      }
                    }
                    else {
                      iVar3 = FUN_1008487a0(lVar9,uVar6,puVar8,param_3,param_4);
                      if (iVar3 == 0) goto LAB_100851ab8;
                      if (*(int *)(lVar9 + 8) != 0) {
LAB_1008518e0:
                        iVar3 = FUN_10084eba0(puVar7,lVar9,param_3,param_4);
                        if ((iVar3 == 0) ||
                           (iVar3 = FUN_10084eac0(puVar7,puVar7,uVar6,param_3,param_4), iVar3 == 0))
                        goto LAB_100851ab8;
                        iVar3 = FUN_10084eac0(lVar9,lVar9,uVar6,param_3,param_4);
                        goto joined_r0x000100851931;
                      }
                    }
                    FUN_10084bbb0(lVar11,0);
                    goto LAB_100851acf;
                  }
                  if (iVar3 == 0) {
                    uVar6 = 0x70;
                    uVar16 = 0xf9;
                    goto LAB_100851ab3;
                  }
                  break;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < 0x52);
              uVar6 = 0x71;
              uVar16 = 0x105;
LAB_100851ab3:
              FUN_100887ce0(3,0x79,uVar6,"bn_sqrt.c",uVar16);
            }
          }
        }
LAB_100851ab8:
        lVar15 = 0;
        if ((lVar11 != 0) && (lVar11 != param_1)) {
          FUN_10084b440();
          lVar15 = 0;
        }
LAB_100851acf:
        FUN_10084cb40(param_4);
        return lVar15;
      }
      if (param_1 == 0) {
        lVar5 = FUN_10084b520();
        lVar15 = 0;
        if (lVar5 == 0) goto LAB_100851acf;
        iVar2 = *(int *)(param_2 + 1);
      }
      if (iVar2 == 1) {
        if (*(long *)*param_2 == 1) {
          bVar17 = *(int *)(param_2 + 2) == 0;
        }
        else {
          bVar17 = false;
        }
      }
      else {
        bVar17 = false;
      }
      iVar2 = FUN_10084bbb0(lVar5,bVar17);
    }
    lVar15 = lVar5;
    if ((iVar2 == 0) && (lVar15 = 0, lVar5 != param_1)) {
      FUN_10084b4b0(lVar5);
      lVar15 = 0;
    }
  }
  return lVar15;
joined_r0x000100851931:
  if (iVar3 == 0) goto LAB_100851ab8;
  if (((*(int *)(puVar7 + 1) == 1) && (*(long *)*puVar7 == 1)) && (*(int *)(puVar7 + 2) == 0))
  goto LAB_100851a5d;
  iVar3 = FUN_10084eba0(puVar8,puVar7,param_3,param_4);
  iVar14 = 2;
  while( true ) {
    if (iVar3 == 0) goto LAB_100851ab8;
    if (((*(int *)(puVar8 + 1) == 1) && (*(long *)*puVar8 == 1)) && (*(int *)(puVar8 + 2) == 0))
    break;
    if (iVar2 == iVar14) {
      uVar6 = 0x6f;
      uVar16 = 0x168;
      goto LAB_100851ab3;
    }
    iVar3 = FUN_10084eac0(puVar8,puVar8,puVar8,param_3,param_4);
    iVar14 = iVar14 + 1;
  }
  lVar5 = FUN_10084b950(puVar8,puVar10);
  if (lVar5 == 0) goto LAB_100851ab8;
  iVar2 = (iVar2 + 1) - (iVar14 + -1);
  while (iVar2 = iVar2 + -1, 1 < iVar2) {
    iVar3 = FUN_10084eba0(puVar8,puVar8,param_3,param_4);
    if (iVar3 == 0) goto LAB_100851ab8;
  }
  iVar2 = FUN_10084eac0(puVar10,puVar8,puVar8,param_3,param_4);
  if ((iVar2 == 0) || (iVar2 = FUN_10084eac0(lVar9,lVar9,puVar8,param_3,param_4), iVar2 == 0))
  goto LAB_100851ab8;
  iVar3 = FUN_10084eac0(puVar7,puVar7,puVar10,param_3,param_4);
  iVar2 = iVar14 + -1;
  goto joined_r0x000100851931;
}

