
long FUN_100c2c580(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
LAB_100c2c608:
    FUN_100c62ee0(3,0x79,0x70,"bn_sqrt.c",0x5b);
    lVar15 = 0;
  }
  else {
    uVar1 = *(ulong *)*param_3;
    lVar5 = param_1;
    if (((uVar1 & 1) == 0) || ((iVar2 == 1 && (uVar1 == 1)))) {
      if ((iVar2 != 1) || (uVar1 != 2)) goto LAB_100c2c608;
      if (param_1 == 0) {
        lVar5 = FUN_100c26720();
        lVar15 = 0;
        if (lVar5 == 0) goto LAB_100c2cccf;
      }
      iVar2 = FUN_100c27360(param_2,0);
      iVar2 = FUN_100c26db0(lVar5,(long)iVar2);
    }
    else {
      iVar2 = *(int *)(param_2 + 1);
      if ((iVar2 != 0) &&
         (((iVar2 != 1 || (*(long *)*param_2 != 1)) || (*(int *)(param_2 + 2) != 0)))) {
        FUN_100c27c60(param_4);
        uVar6 = FUN_100c27e20(param_4);
        puVar7 = (undefined8 *)FUN_100c27e20(param_4);
        lVar5 = FUN_100c27e20(param_4);
        puVar8 = (undefined8 *)FUN_100c27e20(param_4);
        lVar9 = FUN_100c27e20(param_4);
        puVar10 = (undefined8 *)FUN_100c27e20(param_4);
        lVar15 = 0;
        if (puVar10 == (undefined8 *)0x0) goto LAB_100c2cccf;
        lVar11 = param_1;
        if (param_1 == 0) {
          lVar11 = FUN_100c26720();
          lVar15 = 0;
          if (lVar11 == 0) goto LAB_100c2cccf;
        }
        iVar2 = FUN_100c29ab0(uVar6,param_2,param_3,param_4);
        if (iVar2 != 0) {
          iVar2 = 0;
          do {
            iVar2 = iVar2 + 1;
            iVar3 = FUN_100c27360(param_3,iVar2);
          } while (iVar3 == 0);
          lVar15 = lVar11;
          if (iVar2 == 2) {
            iVar2 = FUN_100c29e70(puVar8,uVar6,param_3);
            if ((iVar2 != 0) && (iVar2 = FUN_100c2b450(lVar5,param_3,3), iVar2 != 0)) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              iVar2 = FUN_100c239a0(puVar7,puVar8,lVar5,param_3,param_4);
              if (((((iVar2 != 0) &&
                    (iVar2 = FUN_100c29da0(puVar10,puVar7,param_3,param_4), iVar2 != 0)) &&
                   (iVar2 = FUN_100c29cc0(puVar8,puVar8,puVar10,param_3,param_4), iVar2 != 0)) &&
                  ((iVar2 = FUN_100c2ba20(puVar8,1), iVar2 != 0 &&
                   (iVar2 = FUN_100c29cc0(lVar9,uVar6,puVar7,param_3,param_4), iVar2 != 0)))) &&
                 (iVar2 = FUN_100c29cc0(lVar9,lVar9,puVar8,param_3,param_4), iVar2 != 0)) {
LAB_100c2cc5d:
                lVar5 = FUN_100c26b50(lVar11,lVar9);
                if (lVar5 != 0) {
LAB_100c2cc6f:
                  iVar2 = FUN_100c29da0(lVar9,lVar11,param_3,param_4);
                  if (iVar2 != 0) {
                    iVar2 = FUN_100c27160(lVar9,uVar6);
                    if (iVar2 == 0) goto LAB_100c2cccf;
                    uVar6 = 0x6f;
                    uVar16 = 0x18a;
                    goto LAB_100c2ccb3;
                  }
                }
              }
            }
          }
          else if (iVar2 == 1) {
            iVar2 = FUN_100c2b450(lVar5,param_3,2);
            if (iVar2 != 0) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              iVar2 = FUN_100c2b920(lVar5,1);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_100c239a0(lVar11,uVar6,lVar5,param_3,param_4), iVar2 != 0))
              goto LAB_100c2cc6f;
            }
          }
          else {
            lVar12 = FUN_100c26b50(lVar5,param_3);
            if (lVar12 != 0) {
              *(undefined4 *)(lVar5 + 0x10) = 0;
              lVar12 = 2;
              do {
                if (lVar12 < 0x16) {
LAB_100c2c962:
                  iVar3 = FUN_100c26db0(puVar10,lVar12);
                  if (iVar3 == 0) goto LAB_100c2ccb8;
                }
                else {
                  uVar4 = FUN_100c26610(param_3);
                  iVar3 = FUN_100c2ad20(puVar10,uVar4,0,0);
                  if (iVar3 == 0) goto LAB_100c2ccb8;
                  iVar3 = FUN_100c27100(puVar10,param_3);
                  if (-1 < iVar3) {
                    pcVar13 = FUN_100c22b40;
                    if (*(int *)(param_3 + 2) == 0) {
                      pcVar13 = FUN_100c23090;
                    }
                    iVar3 = (*pcVar13)(puVar10,puVar10,param_3);
                    if (iVar3 == 0) goto LAB_100c2ccb8;
                  }
                  if (*(int *)(puVar10 + 1) == 0) goto LAB_100c2c962;
                }
                iVar3 = FUN_100c2c2c0(puVar10,lVar5,param_4);
                if (iVar3 < -1) goto LAB_100c2ccb8;
                if (iVar3 != 1) {
                  if (iVar3 == -1) {
                    iVar3 = FUN_100c2b450(lVar5,lVar5,iVar2);
                    if ((iVar3 == 0) ||
                       (iVar3 = FUN_100c239a0(puVar10,puVar10,lVar5,param_3,param_4), iVar3 == 0))
                    goto LAB_100c2ccb8;
                    if ((*(int *)(puVar10 + 1) == 1) &&
                       ((*(long *)*puVar10 == 1 && (*(int *)(puVar10 + 2) == 0)))) {
                      uVar6 = 0x70;
                      uVar16 = 0x114;
                      goto LAB_100c2ccb3;
                    }
                    iVar3 = FUN_100c2b0f0(puVar8,lVar5);
                    if (iVar3 == 0) goto LAB_100c2ccb8;
                    if (*(int *)(puVar8 + 1) == 0) {
                      iVar3 = FUN_100c29ab0(puVar8,uVar6,param_3,param_4);
                      if (iVar3 == 0) goto LAB_100c2ccb8;
                      if (*(int *)(puVar8 + 1) != 0) {
                        iVar3 = FUN_100c26db0(lVar9,1);
                        if (iVar3 != 0) goto LAB_100c2cae0;
                        goto LAB_100c2ccb8;
                      }
                    }
                    else {
                      iVar3 = FUN_100c239a0(lVar9,uVar6,puVar8,param_3,param_4);
                      if (iVar3 == 0) goto LAB_100c2ccb8;
                      if (*(int *)(lVar9 + 8) != 0) {
LAB_100c2cae0:
                        iVar3 = FUN_100c29da0(puVar7,lVar9,param_3,param_4);
                        if ((iVar3 == 0) ||
                           (iVar3 = FUN_100c29cc0(puVar7,puVar7,uVar6,param_3,param_4), iVar3 == 0))
                        goto LAB_100c2ccb8;
                        iVar3 = FUN_100c29cc0(lVar9,lVar9,uVar6,param_3,param_4);
                        goto joined_r0x000100c2cb31;
                      }
                    }
                    FUN_100c26db0(lVar11,0);
                    goto LAB_100c2cccf;
                  }
                  if (iVar3 == 0) {
                    uVar6 = 0x70;
                    uVar16 = 0xf9;
                    goto LAB_100c2ccb3;
                  }
                  break;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < 0x52);
              uVar6 = 0x71;
              uVar16 = 0x105;
LAB_100c2ccb3:
              FUN_100c62ee0(3,0x79,uVar6,"bn_sqrt.c",uVar16);
            }
          }
        }
LAB_100c2ccb8:
        lVar15 = 0;
        if ((lVar11 != 0) && (lVar11 != param_1)) {
          FUN_100c26640();
          lVar15 = 0;
        }
LAB_100c2cccf:
        FUN_100c27d40(param_4);
        return lVar15;
      }
      if (param_1 == 0) {
        lVar5 = FUN_100c26720();
        lVar15 = 0;
        if (lVar5 == 0) goto LAB_100c2cccf;
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
      iVar2 = FUN_100c26db0(lVar5,bVar17);
    }
    lVar15 = lVar5;
    if ((iVar2 == 0) && (lVar15 = 0, lVar5 != param_1)) {
      FUN_100c266b0(lVar5);
      lVar15 = 0;
    }
  }
  return lVar15;
joined_r0x000100c2cb31:
  if (iVar3 == 0) goto LAB_100c2ccb8;
  if (((*(int *)(puVar7 + 1) == 1) && (*(long *)*puVar7 == 1)) && (*(int *)(puVar7 + 2) == 0))
  goto LAB_100c2cc5d;
  iVar3 = FUN_100c29da0(puVar8,puVar7,param_3,param_4);
  iVar14 = 2;
  while( true ) {
    if (iVar3 == 0) goto LAB_100c2ccb8;
    if (((*(int *)(puVar8 + 1) == 1) && (*(long *)*puVar8 == 1)) && (*(int *)(puVar8 + 2) == 0))
    break;
    if (iVar2 == iVar14) {
      uVar6 = 0x6f;
      uVar16 = 0x168;
      goto LAB_100c2ccb3;
    }
    iVar3 = FUN_100c29cc0(puVar8,puVar8,puVar8,param_3,param_4);
    iVar14 = iVar14 + 1;
  }
  lVar5 = FUN_100c26b50(puVar8,puVar10);
  if (lVar5 == 0) goto LAB_100c2ccb8;
  iVar2 = (iVar2 + 1) - (iVar14 + -1);
  while (iVar2 = iVar2 + -1, 1 < iVar2) {
    iVar3 = FUN_100c29da0(puVar8,puVar8,param_3,param_4);
    if (iVar3 == 0) goto LAB_100c2ccb8;
  }
  iVar2 = FUN_100c29cc0(puVar10,puVar8,puVar8,param_3,param_4);
  if ((iVar2 == 0) || (iVar2 = FUN_100c29cc0(lVar9,lVar9,puVar8,param_3,param_4), iVar2 == 0))
  goto LAB_100c2ccb8;
  iVar3 = FUN_100c29cc0(puVar7,puVar7,puVar10,param_3,param_4);
  iVar2 = iVar14 + -1;
  goto joined_r0x000100c2cb31;
}

