
long FUN_100c3cf80(int *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_40;
  long local_38;
  
  if (param_1 == (int *)0x0) {
    uVar15 = 0x7c;
    uVar16 = 0x3a9;
    goto LAB_100c3d19e;
  }
  iVar6 = *param_1;
  if (iVar6 == 2) {
    return 0;
  }
  if (iVar6 != 1) {
    if (iVar6 == 0) {
      uVar7 = FUN_100bf7220(*(undefined8 *)(param_1 + 2));
      lVar11 = FUN_100c3c2e0(uVar7);
      if (lVar11 == 0) {
        uVar15 = 0x77;
        uVar16 = 0x3b1;
        goto LAB_100c3d19e;
      }
      uVar15 = 1;
      goto LAB_100c3d113;
    }
    uVar15 = 0x73;
    uVar16 = 0x3c0;
    goto LAB_100c3d19e;
  }
  lVar1 = *(long *)(param_1 + 2);
  plVar2 = *(long **)(lVar1 + 8);
  if (((plVar2 == (long *)0x0) || (*plVar2 == 0)) || (plVar2[1] == 0)) {
    FUN_100c62ee0(0x10,0x9d,0x73,"ec_asn1.c",700);
  }
  else {
    puVar3 = *(undefined8 **)(lVar1 + 0x10);
    if (((puVar3 == (undefined8 *)0x0) ||
        (puVar12 = (undefined4 *)*puVar3, puVar12 == (undefined4 *)0x0)) ||
       ((*(long *)(puVar12 + 2) == 0 || ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == 0)))))) {
      FUN_100c62ee0(0x10,0x9d,0x73,"ec_asn1.c",0x2c4);
    }
    else {
      lVar8 = FUN_100c26e20(*(long *)(puVar12 + 2),*puVar12,0);
      if (lVar8 == 0) {
        FUN_100c62ee0(0x10,0x9d,3,"ec_asn1.c",0x2c9);
      }
      else {
        puVar12 = *(undefined4 **)(*(long *)(lVar1 + 0x10) + 8);
        lVar9 = FUN_100c26e20(*(undefined8 *)(puVar12 + 2),*puVar12,0);
        if (lVar9 == 0) {
          FUN_100c62ee0(0x10,0x9d,3,"ec_asn1.c",0x2ce);
          lVar14 = 0;
          lVar9 = 0;
          lVar11 = 0;
LAB_100c3d6e9:
          FUN_100c266b0(lVar8);
        }
        else {
          iVar6 = FUN_100bf7220(**(undefined8 **)(lVar1 + 8));
          if (iVar6 != 0x196) {
            if (iVar6 == 0x197) {
              plVar2 = *(long **)(*(long *)(lVar1 + 8) + 8);
              local_40 = *plVar2;
              if (local_40 < 0x296) {
                local_38 = FUN_100c26720();
                if (local_38 != 0) {
                  iVar6 = FUN_100bf7220(plVar2[1]);
                  if (iVar6 == 0x2a9) {
                    uVar15 = 0x7e;
                    uVar16 = 0x322;
                    goto LAB_100c3d2c4;
                  }
                  if (iVar6 == 0x2ab) {
                    plVar4 = (long *)plVar2[2];
                    if (plVar4 == (long *)0x0) {
                      uVar15 = 0x73;
                      uVar16 = 0x30a;
                      goto LAB_100c3d6d3;
                    }
                    if ((((*plVar2 <= plVar4[2]) || (plVar4[2] <= plVar4[1])) ||
                        (plVar4[1] <= *plVar4)) || (*plVar4 < 1)) {
                      uVar15 = 0x84;
                      uVar16 = 0x312;
                      goto LAB_100c3d6d3;
                    }
                    iVar6 = FUN_100c27200(local_38);
                    if (((iVar6 != 0) && (iVar6 = FUN_100c27200(local_38,(int)*plVar4), iVar6 != 0))
                       && ((iVar6 = FUN_100c27200(local_38,(int)plVar4[1]), iVar6 != 0 &&
                           (iVar6 = FUN_100c27200(local_38,(int)plVar4[2]), iVar6 != 0)))) {
                      iVar6 = FUN_100c27200(local_38,0);
joined_r0x000100c3d47a:
                      if (iVar6 != 0) {
                        lVar11 = FUN_100c3a7b0(local_38,lVar8,lVar9,0);
                        goto LAB_100c3d4ad;
                      }
                    }
                  }
                  else {
                    if (iVar6 == 0x2aa) {
                      if (plVar2[2] == 0) {
                        uVar15 = 0x73;
                        uVar16 = 0x2f2;
                      }
                      else {
                        uVar10 = FUN_100c76990();
                        if ((0 < (long)uVar10) && ((long)uVar10 < *plVar2)) {
                          iVar6 = FUN_100c27200(local_38);
                          if ((iVar6 != 0) &&
                             (iVar6 = FUN_100c27200(local_38,uVar10 & 0xffffffff), iVar6 != 0)) {
                            iVar6 = FUN_100c27200(local_38,0);
                            goto joined_r0x000100c3d47a;
                          }
                          goto LAB_100c3d6dc;
                        }
                        uVar15 = 0x89;
                        uVar16 = 0x2fa;
                      }
                    }
                    else {
                      uVar15 = 0x73;
                      uVar16 = 0x326;
                    }
LAB_100c3d6d3:
                    FUN_100c62ee0(0x10,0x9d,uVar15,"ec_asn1.c",uVar16);
                  }
                  goto LAB_100c3d6dc;
                }
                uVar15 = 0x41;
                uVar16 = 0x2e7;
              }
              else {
                uVar15 = 0x8f;
                uVar16 = 0x2e2;
              }
            }
            else {
              uVar15 = 0x67;
              uVar16 = 0x349;
            }
LAB_100c3d3e8:
            FUN_100c62ee0(0x10,0x9d,uVar15,"ec_asn1.c",uVar16);
LAB_100c3d6e4:
            lVar14 = 0;
            lVar11 = 0;
            goto LAB_100c3d6e9;
          }
          lVar11 = *(long *)(*(long *)(lVar1 + 8) + 8);
          if (lVar11 == 0) {
            uVar15 = 0x73;
            uVar16 = 0x332;
            goto LAB_100c3d3e8;
          }
          local_38 = FUN_100c76b30(lVar11,0);
          if (local_38 == 0) {
            uVar15 = 0xd;
            uVar16 = 0x337;
            goto LAB_100c3d3e8;
          }
          if ((*(int *)(local_38 + 0x10) != 0) || (*(int *)(local_38 + 8) == 0)) {
            uVar15 = 0x67;
            uVar16 = 0x33c;
LAB_100c3d2c4:
            FUN_100c62ee0(0x10,0x9d,uVar15,"ec_asn1.c",uVar16);
LAB_100c3d6dc:
            FUN_100c266b0(local_38);
            goto LAB_100c3d6e4;
          }
          iVar6 = FUN_100c26610(local_38);
          if (0x295 < iVar6) {
            uVar15 = 0x8f;
            uVar16 = 0x342;
            goto LAB_100c3d2c4;
          }
          local_40 = (long)iVar6;
          lVar11 = FUN_100c3a6d0(local_38,lVar8,lVar9,0);
LAB_100c3d4ad:
          if (lVar11 == 0) {
            uVar15 = 0x10;
            uVar16 = 0x34e;
            goto LAB_100c3d6d3;
          }
          puVar12 = *(undefined4 **)(*(long *)(lVar1 + 0x10) + 0x10);
          if (puVar12 == (undefined4 *)0x0) {
LAB_100c3d522:
            if (((*(long *)(lVar1 + 0x20) == 0) || (*(long *)(lVar1 + 0x18) == 0)) ||
               (*(long *)(*(long *)(lVar1 + 0x18) + 8) == 0)) {
              uVar15 = 0x73;
              uVar16 = 0x360;
              goto LAB_100c3d737;
            }
            lVar14 = FUN_100c368e0(lVar11);
            if (lVar14 == 0) {
              lVar14 = 0;
            }
            else {
              FUN_100c36c80(lVar11,**(byte **)(*(long *)(lVar1 + 0x18) + 8) & 0xfe);
              iVar6 = FUN_100c454a0(lVar11,lVar14,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                    (long)**(int **)(lVar1 + 0x18),0);
              if (iVar6 == 0) {
                uVar15 = 0x10;
                uVar16 = 0x36e;
              }
              else {
                lVar8 = FUN_100c76b30(*(undefined8 *)(lVar1 + 0x20),lVar8);
                if (lVar8 == 0) {
                  FUN_100c62ee0(0x10,0x9d,0xd,"ec_asn1.c",0x374);
                  lVar8 = 0;
                  goto LAB_100c3d73f;
                }
                if ((*(int *)(lVar8 + 0x10) == 0) && (*(int *)(lVar8 + 8) != 0)) {
                  iVar6 = FUN_100c26610(lVar8);
                  if ((int)local_40 + 1 < iVar6) {
                    uVar15 = 0x7a;
                    uVar16 = 0x37c;
                  }
                  else {
                    if (*(long *)(lVar1 + 0x28) == 0) {
                      FUN_100c266b0(lVar9);
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = FUN_100c76b30(*(long *)(lVar1 + 0x28),lVar9);
                      if (lVar9 == 0) {
                        FUN_100c62ee0(0x10,0x9d,0xd,"ec_asn1.c",0x387);
                        lVar9 = 0;
                        goto LAB_100c3d73f;
                      }
                    }
                    iVar6 = FUN_100c36a90(lVar11,lVar14,lVar8,lVar9);
                    if (iVar6 != 0) {
                      FUN_100c266b0(local_38);
                      goto LAB_100c3d6e9;
                    }
                    uVar15 = 0x10;
                    uVar16 = 0x38c;
                  }
                }
                else {
                  uVar15 = 0x7a;
                  uVar16 = 0x378;
                }
              }
              FUN_100c62ee0(0x10,0x9d,uVar15,"ec_asn1.c",uVar16);
            }
          }
          else {
            if (*(long *)(lVar11 + 0x50) != 0) {
              FUN_100bf3910();
              puVar12 = *(undefined4 **)(*(long *)(lVar1 + 0x10) + 0x10);
            }
            pvVar13 = (void *)FUN_100bf3540(*puVar12,"ec_asn1.c",0x356);
            *(void **)(lVar11 + 0x50) = pvVar13;
            if (pvVar13 != (void *)0x0) {
              piVar5 = *(int **)(*(long *)(lVar1 + 0x10) + 0x10);
              _memcpy(pvVar13,*(void **)(piVar5 + 2),(long)*piVar5);
              *(long *)(lVar11 + 0x58) = (long)**(int **)(*(long *)(lVar1 + 0x10) + 0x10);
              goto LAB_100c3d522;
            }
            uVar15 = 0x41;
            uVar16 = 0x357;
LAB_100c3d737:
            FUN_100c62ee0(0x10,0x9d,uVar15,"ec_asn1.c",uVar16);
            lVar14 = 0;
          }
LAB_100c3d73f:
          FUN_100c362c0(lVar11);
          FUN_100c266b0(local_38);
          lVar11 = 0;
          if (lVar8 != 0) goto LAB_100c3d6e9;
        }
        if (lVar9 != 0) {
          FUN_100c266b0(lVar9);
        }
        if (lVar14 != 0) {
          FUN_100c36280(lVar14);
        }
        if (lVar11 != 0) {
          uVar15 = 0;
LAB_100c3d113:
          FUN_100c36c60(lVar11,uVar15);
          return lVar11;
        }
      }
    }
  }
  uVar15 = 0x10;
  uVar16 = 0x3b9;
LAB_100c3d19e:
  FUN_100c62ee0(0x10,0x9e,uVar15,"ec_asn1.c",uVar16);
  return 0;
}

