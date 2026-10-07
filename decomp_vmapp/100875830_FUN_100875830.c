
ulong FUN_100875830(undefined8 param_1,int param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if ((((param_4 == 0) || (lVar3 = FUN_1008648d0(param_4), lVar3 == 0)) ||
      (lVar4 = FUN_100864970(param_4), param_3 == (long *)0x0)) || (lVar4 == 0)) {
    uVar6 = 0x67;
    uVar7 = 0x156;
LAB_100875992:
    FUN_100887ce0(0x2a,0x66,uVar6,"ecs_ossl.c",uVar7);
    return 0xffffffff;
  }
  lVar5 = FUN_10084c820();
  if (lVar5 == 0) {
    uVar6 = 0x41;
    uVar7 = 0x15c;
    goto LAB_100875992;
  }
  FUN_10084ca60(lVar5);
  uVar6 = FUN_10084cc20(lVar5);
  uVar7 = FUN_10084cc20(lVar5);
  uVar8 = FUN_10084cc20(lVar5);
  uVar9 = FUN_10084cc20(lVar5);
  lVar10 = FUN_10084cc20(lVar5);
  if (lVar10 == 0) {
    uVar6 = 3;
    uVar7 = 0x166;
  }
  else {
    iVar1 = FUN_10085b9d0(lVar3,uVar6,lVar5);
    if (iVar1 == 0) {
      uVar6 = 0x10;
      uVar7 = 0x16b;
    }
    else {
      lVar11 = *param_3;
      if ((((*(int *)(lVar11 + 8) == 0) || (*(int *)(lVar11 + 0x10) != 0)) ||
          ((iVar1 = FUN_10084bf00(lVar11,uVar6), -1 < iVar1 ||
           ((lVar11 = param_3[1], *(int *)(lVar11 + 8) == 0 || (*(int *)(lVar11 + 0x10) != 0))))))
         || (iVar1 = FUN_10084bf00(lVar11,uVar6), -1 < iVar1)) {
        FUN_100887ce0(0x2a,0x66,100,"ecs_ossl.c",0x172);
        uVar12 = 0;
        lVar11 = 0;
        goto LAB_100875a16;
      }
      lVar11 = FUN_100851d20(uVar8,param_3[1],uVar6,lVar5);
      if (lVar11 == 0) {
        uVar6 = 3;
        uVar7 = 0x178;
      }
      else {
        uVar2 = FUN_10084b410(uVar6);
        if ((int)uVar2 < param_2 * 8) {
          param_2 = (int)(uVar2 + 7 + ((uint)((int)(uVar2 + 7) >> 0x1f) >> 0x1d)) >> 3;
        }
        lVar11 = FUN_10084bc20(param_1,param_2,uVar9);
        if (lVar11 == 0) {
          uVar6 = 3;
          uVar7 = 0x183;
        }
        else if (((int)uVar2 < param_2 * 8) &&
                (iVar1 = FUN_100850250(uVar9,uVar9,8 - (uVar2 & 7)), iVar1 == 0)) {
          uVar6 = 3;
          uVar7 = 0x188;
        }
        else {
          iVar1 = FUN_10084eac0(uVar7,uVar9,uVar8,uVar6,lVar5);
          if (iVar1 == 0) {
            uVar6 = 3;
            uVar7 = 0x18d;
          }
          else {
            iVar1 = FUN_10084eac0(uVar8,*param_3,uVar8,uVar6,lVar5);
            if (iVar1 == 0) {
              uVar6 = 3;
              uVar7 = 0x192;
            }
            else {
              lVar11 = FUN_10085b6e0(lVar3);
              if (lVar11 != 0) {
                iVar1 = FUN_10085c790(lVar3,lVar11,uVar7,lVar4,uVar8,lVar5);
                if (iVar1 == 0) {
                  uVar6 = 0x10;
                  uVar7 = 0x19b;
                }
                else {
                  uVar8 = FUN_10085b870(lVar3);
                  iVar1 = FUN_10085b880(uVar8);
                  if (iVar1 == 0x196) {
                    iVar1 = FUN_10085c3d0(lVar3,lVar11,lVar10,0,lVar5);
                    if (iVar1 == 0) {
                      uVar6 = 0x10;
                      uVar7 = 0x1a1;
                    }
                    else {
LAB_100875c99:
                      iVar1 = FUN_10084e8b0(uVar7,lVar10,uVar6,lVar5);
                      if (iVar1 != 0) {
                        iVar1 = FUN_10084bf00(uVar7,*param_3);
                        uVar12 = (ulong)(iVar1 == 0);
                        goto LAB_100875a16;
                      }
                      uVar6 = 3;
                      uVar7 = 0x1af;
                    }
                  }
                  else {
                    iVar1 = FUN_10085c430(lVar3,lVar11,lVar10,0,lVar5);
                    if (iVar1 != 0) goto LAB_100875c99;
                    uVar6 = 0x10;
                    uVar7 = 0x1a9;
                  }
                }
                FUN_100887ce0(0x2a,0x66,uVar6,"ecs_ossl.c",uVar7);
                uVar12 = 0xffffffff;
                goto LAB_100875a16;
              }
              uVar6 = 0x41;
              uVar7 = 0x197;
            }
          }
        }
      }
    }
  }
  FUN_100887ce0(0x2a,0x66,uVar6,"ecs_ossl.c",uVar7);
  uVar12 = 0xffffffff;
  lVar11 = 0;
LAB_100875a16:
  FUN_10084cb40(lVar5);
  FUN_10084c8b0(lVar5);
  if (lVar11 == 0) {
    return uVar12;
  }
  FUN_10085b080(lVar11);
  return uVar12;
}

