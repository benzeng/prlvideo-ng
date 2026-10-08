
undefined8
FUN_100c3a820(long *param_1,long *param_2,long param_3,ulong param_4,long param_5,long param_6,
             long param_7)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  void *pvVar30;
  long lVar31;
  long *plVar32;
  bool bVar33;
  bool bVar34;
  ulong local_c0;
  long local_a8;
  ulong local_80;
  long local_78;
  long *local_48;
  long local_40;
  ulong local_38;
  
  if (*param_1 != *param_2) {
    uVar26 = 0x168;
LAB_100c3a861:
    FUN_100c62ee0(0x10,0xbb,0x65,"ec_mult.c",uVar26);
    return 0;
  }
  if ((param_3 == 0) && (param_4 == 0)) {
    uVar26 = FUN_100c373f0(param_1,param_2);
    return uVar26;
  }
  uVar16 = 0;
  if (param_4 != 0) {
    do {
      if (*param_1 != **(long **)(param_5 + uVar16 * 8)) {
        uVar26 = 0x172;
        goto LAB_100c3a861;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_4);
  }
  local_80 = 0;
  lVar31 = 0;
  if ((param_7 == 0) && (param_7 = FUN_100c27a20(), lVar31 = param_7, param_7 == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    lVar7 = 0;
    uVar16 = 0;
    uVar22 = 0;
    lVar14 = 0;
    local_a8 = 0;
    goto LAB_100c3a9e1;
  }
  lVar7 = FUN_100c36bc0(param_1);
  if (lVar7 == 0) {
    FUN_100c62ee0(0x10,0xbb,0x71,"ec_mult.c",0x180);
    local_40 = 0;
    local_48 = (long *)0x0;
    lVar8 = 0;
    local_78 = 0;
LAB_100c3ac93:
    plVar13 = (long *)0x0;
    lVar14 = 0;
    uVar26 = 0;
    goto LAB_100c3b08e;
  }
  local_80 = FUN_100c37230(param_1[0xc],FUN_100c3b6f0,FUN_100c3b730,FUN_100c3b7b0);
  local_a8 = 1;
  if (((local_80 == 0) || (*(long *)(local_80 + 0x10) == 0)) ||
     (iVar3 = FUN_100c371c0(param_1,lVar7,**(undefined8 **)(local_80 + 0x20)), iVar3 != 0)) {
    uVar16 = 0;
    uVar22 = 1;
    lVar14 = 0;
    local_80 = 0;
LAB_100c3a9e1:
    local_c0 = uVar22 + param_4;
    uVar28 = local_c0 * 8;
    local_40 = FUN_100bf3540(uVar28 & 0xffffffff,"ec_mult.c",0x1ad);
    lVar8 = FUN_100bf3540(uVar28 & 0xffffffff,"ec_mult.c",0x1ae);
    local_48 = (long *)FUN_100bf3540((local_c0 << 0x20 | 0xffffffff) + 1 >> 0x1d,"ec_mult.c",0x1af);
    local_78 = FUN_100bf3540(uVar28 & 0xffffffff,"ec_mult.c",0x1b1);
    if (((local_48 == (long *)0x0) || (*local_48 = 0, local_40 == 0)) ||
       ((lVar8 == 0 || (local_78 == 0)))) {
      uVar26 = 0x41;
      uVar27 = 0x1b8;
      goto LAB_100c3ac3f;
    }
    lVar17 = 0;
    uVar9 = local_a8 + param_4;
    uVar28 = 0;
    if (uVar9 != 0) {
      lVar29 = 0;
      lVar17 = 0;
      uVar28 = 0;
      uVar21 = 0;
      do {
        lVar23 = param_3;
        if (uVar21 < param_4) {
          lVar23 = *(long *)(param_6 + uVar21 * 8);
        }
        uVar4 = FUN_100c26610(lVar23);
        lVar23 = 6;
        if (((uVar4 < 2000) && (lVar23 = 5, uVar4 < 800)) &&
           ((lVar23 = 4, uVar4 < 300 && (lVar23 = 3, uVar4 < 0x46)))) {
          lVar23 = (ulong)(0x13 < uVar4) + 1;
        }
        *(long *)(local_40 + uVar21 * 8) = lVar23;
        local_48[uVar21 + 1] = 0;
        lVar10 = param_3;
        if (uVar21 < param_4) {
          lVar10 = *(long *)(param_6 + uVar21 * 8);
        }
        lVar10 = FUN_100c3b850(lVar10,lVar23,lVar8 + lVar29);
        local_48[uVar21] = lVar10;
        if (lVar10 == 0) {
          lVar14 = 0;
          uVar26 = 0;
          plVar13 = (long *)0x0;
          goto LAB_100c3b08e;
        }
        lVar17 = lVar17 + (1L << ((char)lVar23 - 1U & 0x3f));
        uVar1 = *(ulong *)(lVar8 + uVar21 * 8);
        uVar21 = uVar21 + 1;
        if (uVar28 < uVar1) {
          uVar28 = uVar1;
        }
        lVar29 = lVar29 + 8;
      } while (uVar21 < uVar9);
    }
    if (uVar22 != 0) {
      if (local_80 == 0) {
        if ((int)local_a8 == 0) {
          uVar26 = 0x44;
          uVar27 = 0x1d6;
          goto LAB_100c3ac3f;
        }
      }
      else {
        local_38 = 0;
        if ((int)local_a8 != 0) {
          uVar26 = 0x44;
          uVar27 = 0x1df;
LAB_100c3ac3f:
          FUN_100c62ee0(0x10,0xbb,uVar26,"ec_mult.c",uVar27);
          plVar13 = (long *)0x0;
          goto LAB_100c3ac49;
        }
        uVar26 = *(undefined8 *)(local_80 + 0x18);
        *(undefined8 *)(local_40 + param_4 * 8) = uVar26;
        pvVar11 = (void *)FUN_100c3b850(param_3,uVar26,&local_38);
        if (pvVar11 == (void *)0x0) goto LAB_100c3ac93;
        if (uVar28 < local_38) {
          if (local_38 < uVar22 * uVar16) {
            uVar26 = 0;
            local_c0 = ((uVar16 - 1) + local_38) / uVar16;
            if (*(ulong *)(local_80 + 0x10) < local_c0) {
              FUN_100c62ee0(0x10,0xbb,0x44,"ec_mult.c",0x20c);
              lVar14 = 0;
              plVar13 = (long *)0x0;
              goto LAB_100c3b08e;
            }
            local_c0 = local_c0 + param_4;
          }
          if (param_4 < local_c0) {
            plVar13 = *(long **)(local_80 + 0x20);
            uVar22 = param_4;
            local_80 = local_38;
            pvVar30 = pvVar11;
            do {
              if (uVar22 < local_c0 - 1) {
                *(ulong *)(lVar8 + uVar22 * 8) = uVar16;
                bVar33 = uVar16 <= local_80;
                local_80 = local_80 - uVar16;
                uVar21 = uVar16;
                uVar1 = local_80;
                if (bVar33) goto LAB_100c3af06;
                FUN_100c62ee0(0x10,0xbb,0x44,"ec_mult.c",0x21a);
LAB_100c3b54a:
                lVar14 = 0;
                plVar13 = (long *)0x0;
                uVar26 = 0;
                goto LAB_100c3b08e;
              }
              *(ulong *)(lVar8 + uVar22 * 8) = local_80;
              uVar21 = local_80;
              uVar1 = local_38;
LAB_100c3af06:
              local_38 = uVar1;
              local_48[uVar22 + 1] = 0;
              pvVar12 = (void *)FUN_100bf3540(uVar21,"ec_mult.c",0x226);
              local_48[uVar22] = (long)pvVar12;
              if (pvVar12 == (void *)0x0) {
                FUN_100c62ee0(0x10,0xbb,0x41,"ec_mult.c",0x228);
                FUN_100bf3910(pvVar11);
                goto LAB_100c3b54a;
              }
              _memcpy(pvVar12,pvVar30,*(size_t *)(lVar8 + uVar22 * 8));
              if (*plVar13 == 0) {
                FUN_100c62ee0(0x10,0xbb,0x44,"ec_mult.c",0x231);
                FUN_100bf3910(pvVar11);
                lVar14 = 0;
                plVar13 = (long *)0x0;
                uVar26 = 0;
                goto LAB_100c3b08e;
              }
              uVar21 = *(ulong *)(lVar8 + uVar22 * 8);
              if (uVar28 < uVar21) {
                uVar28 = uVar21;
              }
              *(long **)(local_78 + uVar22 * 8) = plVar13;
              uVar22 = uVar22 + 1;
              pvVar30 = (void *)((long)pvVar30 + uVar16);
              plVar13 = plVar13 + lVar14;
            } while (uVar22 < local_c0);
          }
          FUN_100bf3910(pvVar11);
        }
        else {
          local_c0 = param_4 + 1;
          local_48[param_4] = (long)pvVar11;
          local_48[param_4 + 1] = 0;
          *(ulong *)(lVar8 + param_4 * 8) = local_38;
          *(undefined8 *)(local_78 + param_4 * 8) = *(undefined8 *)(local_80 + 0x20);
        }
      }
    }
    plVar13 = (long *)FUN_100bf3540((lVar17 << 0x20 | 0xffffffffU) + 1 >> 0x1d,"ec_mult.c",0x243);
    if (plVar13 == (long *)0x0) {
      uVar26 = 0x41;
      uVar27 = 0x245;
    }
    else {
      uVar16 = 0;
      plVar13[lVar17] = 0;
      plVar32 = plVar13;
      if (uVar9 != 0) {
        do {
          *(long **)(local_78 + uVar16 * 8) = plVar32;
          uVar22 = 0;
          do {
            lVar14 = FUN_100c368e0(param_1);
            *plVar32 = lVar14;
            if (lVar14 == 0) {
              uVar26 = 0;
              lVar14 = 0;
              goto LAB_100c3b08e;
            }
            plVar32 = plVar32 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar22 < (ulong)(1L << ((char)*(undefined4 *)(local_40 + uVar16 * 8) - 1U & 0x3f)
                                   ));
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar9);
      }
      if (plVar32 == plVar13 + lVar17) {
        lVar14 = FUN_100c368e0(param_1);
        uVar26 = 0;
        if (lVar14 == 0) {
          lVar14 = 0;
          goto LAB_100c3b08e;
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            lVar29 = lVar7;
            if (uVar16 < param_4) {
              lVar29 = *(long *)(param_5 + uVar16 * 8);
            }
            iVar3 = FUN_100c369b0(**(undefined8 **)(local_78 + uVar16 * 8),lVar29);
            if (iVar3 == 0) {
LAB_100c3b511:
              uVar26 = 0;
              goto LAB_100c3b08e;
            }
            if (1 < *(ulong *)(local_40 + uVar16 * 8)) {
              iVar3 = FUN_100c37700(param_1,lVar14,**(undefined8 **)(local_78 + uVar16 * 8),param_7)
              ;
              if (iVar3 == 0) goto LAB_100c3b511;
              uVar22 = 1;
              if (*(long *)(local_40 + uVar16 * 8) != 1) {
                do {
                  lVar29 = *(long *)(local_78 + uVar16 * 8);
                  iVar3 = FUN_100c37690(param_1,*(undefined8 *)(lVar29 + uVar22 * 8),
                                        *(undefined8 *)(lVar29 + -8 + uVar22 * 8),lVar14,param_7);
                  if (iVar3 == 0) goto LAB_100c3b511;
                  uVar22 = uVar22 + 1;
                } while (uVar22 < (ulong)(1L << ((char)*(undefined4 *)(local_40 + uVar16 * 8) - 1U &
                                                0x3f)));
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar9);
        }
        iVar3 = FUN_100c378f0(param_1,lVar17,plVar13,param_7);
        if (iVar3 == 0) {
LAB_100c3b6b3:
          uVar26 = 0;
        }
        else {
          uVar16 = uVar28 + 0xffffffff;
          iVar3 = (int)uVar16;
          if (iVar3 < 0) {
LAB_100c3b691:
            iVar3 = FUN_100c373f0(param_1,param_2);
LAB_100c3b6a7:
            if (iVar3 == 0) goto LAB_100c3b6b3;
          }
          else {
            if (local_c0 == 0) {
              iVar5 = (int)uVar28;
              uVar4 = ~(iVar5 - 1U);
              if ((int)uVar4 < -1) {
                uVar4 = 0xffffffff;
              }
              iVar18 = uVar4 + (iVar5 - 1U);
              if (iVar18 != -2) {
                uVar6 = iVar18 + 2;
                uVar19 = uVar6 & 0xfffffff8;
                uVar4 = 0;
                if (uVar19 != 0) {
                  uVar4 = ~(iVar5 - 1U);
                  if ((int)uVar4 < -1) {
                    uVar4 = 0xffffffff;
                  }
                  uVar20 = (uVar4 + 2 + (iVar5 - 1U) & 0xfffffff8) - 8 >> 3;
                  iVar18 = 0;
                  if ((uVar20 + 1 & 7) != 0) {
                    uVar24 = ~(iVar5 - 1U);
                    uVar4 = 0xffffffff;
                    if (-2 < (int)uVar24) {
                      uVar4 = uVar24;
                    }
                    iVar25 = -(((uVar4 + 2 + (iVar5 - 1U) & 0x38) - 8 >> 3) + 1 & 7);
                    iVar18 = 0;
                    do {
                      iVar18 = iVar18 + 8;
                      iVar25 = iVar25 + 1;
                    } while (iVar25 != 0);
                  }
                  uVar16 = (ulong)(iVar3 - (uVar6 & 0xfffffff8));
                  uVar4 = uVar19;
                  if (6 < uVar20) {
                    uVar20 = ~(iVar5 - 1U);
                    uVar19 = 0xffffffff;
                    if (-2 < (int)uVar20) {
                      uVar19 = uVar20;
                    }
                    iVar18 = (uVar19 + 2 + (iVar5 - 1U) & 0xfffffff8) - iVar18;
                    do {
                      iVar18 = iVar18 + -0x40;
                    } while (iVar18 != 0);
                  }
                }
                if (uVar6 == uVar4) goto LAB_100c3b691;
              }
              uVar6 = (uint)uVar16;
              uVar19 = ~uVar6;
              uVar4 = 0xffffffff;
              if (-2 < (int)uVar19) {
                uVar4 = uVar19;
              }
              iVar3 = uVar6 + 1;
              if ((uVar6 + 2 + uVar4 & 7) != 0) {
                uVar20 = 0xffffffff;
                if (-2 < (int)uVar19) {
                  uVar20 = uVar19;
                }
                iVar5 = -(uVar6 + 2 + uVar20 & 7);
                do {
                  uVar6 = (int)uVar16 - 1;
                  uVar16 = (ulong)uVar6;
                  iVar5 = iVar5 + 1;
                } while (iVar5 != 0);
              }
              if (6 < iVar3 + uVar4) {
                iVar3 = uVar6 + 1;
                do {
                  iVar3 = iVar3 + -8;
                } while (0 < iVar3);
              }
              goto LAB_100c3b691;
            }
            bVar34 = false;
            bVar33 = true;
            uVar16 = (long)iVar3;
            do {
              if (!bVar33) {
                iVar3 = FUN_100c37700(param_1,param_2,param_2,param_7);
                bVar33 = false;
                if (iVar3 == 0) {
LAB_100c3b6cf:
                  uVar26 = 0;
                  goto LAB_100c3b08e;
                }
              }
              uVar22 = 0;
              do {
                if (uVar16 < *(ulong *)(lVar8 + uVar22 * 8)) {
                  bVar15 = *(byte *)(local_48[uVar22] + uVar16);
                  if (bVar15 != 0) {
                    iVar3 = -(int)(char)bVar15;
                    if (-1 < (char)bVar15) {
                      iVar3 = (int)(char)bVar15;
                    }
                    if ((bool)(bVar15 >> 7) != bVar34) {
                      if ((!bVar33) && (iVar5 = FUN_100c37770(param_1,param_2,param_7), iVar5 == 0))
                      goto LAB_100c3b6cf;
                      bVar34 = bVar34 == false;
                    }
                    uVar26 = *(undefined8 *)
                              (*(long *)(local_78 + uVar22 * 8) + (long)(iVar3 >> 1) * 8);
                    if (bVar33) {
                      iVar3 = FUN_100c369b0(param_2,uVar26);
                    }
                    else {
                      iVar3 = FUN_100c37690(param_1,param_2,param_2,uVar26,param_7);
                    }
                    bVar33 = false;
                    if (iVar3 == 0) goto LAB_100c3b6cf;
                  }
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < local_c0);
              bVar2 = 0 < (long)uVar16;
              uVar16 = uVar16 - 1;
            } while (bVar2);
            if (bVar33) goto LAB_100c3b691;
            if (bVar34 != false) {
              iVar3 = FUN_100c37770(param_1,param_2,param_7);
              goto LAB_100c3b6a7;
            }
          }
          uVar26 = 1;
        }
        goto LAB_100c3b08e;
      }
      uVar26 = 0x44;
      uVar27 = 0x256;
    }
    FUN_100c62ee0(0x10,0xbb,uVar26,"ec_mult.c",uVar27);
  }
  else {
    uVar16 = *(ulong *)(local_80 + 8);
    iVar3 = FUN_100c26610(param_3);
    local_a8 = 0;
    uVar22 = (ulong)(long)iVar3 / uVar16 + 1;
    uVar28 = *(ulong *)(local_80 + 0x10);
    if (uVar28 < uVar22) {
      uVar22 = uVar28;
    }
    bVar15 = (char)*(undefined4 *)(local_80 + 0x18) - 1;
    lVar14 = 1L << (bVar15 & 0x3f);
    if (*(long *)(local_80 + 0x28) == uVar28 << (bVar15 & 0x3f)) goto LAB_100c3a9e1;
    FUN_100c62ee0(0x10,0xbb,0x44,"ec_mult.c",0x19f);
    local_40 = 0;
    local_48 = (long *)0x0;
    lVar8 = 0;
    plVar13 = (long *)0x0;
    local_78 = 0;
  }
LAB_100c3ac49:
  lVar14 = 0;
  uVar26 = 0;
LAB_100c3b08e:
  if (lVar31 != 0) {
    FUN_100c27ab0(lVar31);
  }
  if (lVar14 != 0) {
    FUN_100c36280(lVar14);
  }
  if (local_40 != 0) {
    FUN_100bf3910();
  }
  if (lVar8 != 0) {
    FUN_100bf3910();
  }
  if (local_48 != (long *)0x0) {
    lVar31 = *local_48;
    plVar32 = local_48;
    while (lVar31 != 0) {
      plVar32 = plVar32 + 1;
      FUN_100bf3910();
      lVar31 = *plVar32;
    }
    FUN_100bf3910(local_48);
  }
  if (plVar13 != (long *)0x0) {
    lVar31 = *plVar13;
    plVar32 = plVar13;
    while (lVar31 != 0) {
      plVar32 = plVar32 + 1;
      FUN_100c36410();
      lVar31 = *plVar32;
    }
    FUN_100bf3910(plVar13);
  }
  if (local_78 != 0) {
    FUN_100bf3910();
  }
  return uVar26;
}

