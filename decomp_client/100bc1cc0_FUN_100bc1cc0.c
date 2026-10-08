
int FUN_100bc1cc0(uint *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  code *pcVar16;
  int local_3c;
  time_t local_38;
  
  local_38 = _time((time_t *)0x0);
  FUN_100c62060(0,&local_38,8);
  FUN_100c63270();
  piVar11 = ___error();
  *piVar11 = 0;
  pcVar16 = *(code **)(param_1 + 0x54);
  if (pcVar16 == (code *)0x0) {
    pcVar16 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108);
  }
  param_1[0xb] = param_1[0xb] + 1;
  uVar12 = FUN_100be45f0(param_1);
  if (((uVar12 & 0x3000) == 0) || (uVar12 = FUN_100be45f0(param_1), (uVar12 & 0x4000) != 0)) {
    FUN_100be2c50(param_1);
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    FUN_100c62ee0(0x14,0x80,0xb3,"s3_srvr.c",0xeb);
    return -1;
  }
  if (param_1[0xa7] != 0) {
    param_1[0xa7] = 0;
    param_1[0xa8] = param_1[0xa8] + 1;
  }
LAB_100bc1d6a:
  do {
    uVar9 = param_1[0x12];
LAB_100bc1d88:
    uVar15 = uVar9;
    if ((int)uVar15 < 0x3004) {
      if ((int)uVar15 < 0x2200) {
        if ((int)uVar15 < 0x21e0) {
          if ((int)uVar15 < 0x21c0) {
            if ((int)uVar15 < 0x2100) {
              if ((uVar15 == 0x2000) || (uVar15 == 0x2003)) goto LAB_100bc1e0a;
              if (uVar15 != 3) goto LAB_100bc2aa2;
              FUN_100bcf9d0(param_1);
              FUN_100c57f20(*(undefined8 *)(param_1 + 0x14));
              param_1[0x14] = 0;
              param_1[0x15] = 0;
              FUN_100be6ca0(param_1);
              param_1[0x18] = 0;
              iVar7 = 1;
              if (param_1[0xa9] == 2) {
                param_1[0xa9] = 0;
                param_1[0xf] = 0;
                FUN_100be6330(param_1,2);
                *(int *)(*(long *)(param_1 + 0x5c) + 0x7c) =
                     *(int *)(*(long *)(param_1 + 0x5c) + 0x7c) + 1;
                *(code **)(param_1 + 0xc) = FUN_100bc1cc0;
                if (pcVar16 == (code *)0x0) {
                  param_1[0xb] = param_1[0xb] - 1;
                  return 1;
                }
                iVar7 = 1;
                (*pcVar16)(param_1,0x20,1);
                param_1[0xb] = param_1[0xb] - 1;
                goto LAB_100bc2ad1;
              }
            }
            else if ((int)uVar15 < 0x2190) {
              if ((int)uVar15 < 0x2170) {
                if (0x214f < (int)uVar15) {
                  if (1 < uVar15 - 0x2150) {
                    if (uVar15 - 0x2160 < 2) {
                      uVar9 = param_1[0x50];
                      if (((uVar9 & 1) != 0) &&
                         (((uVar9 & 4) == 0 || (*(long *)(*(long *)(param_1 + 0x4c) + 0xb0) == 0))))
                      {
                        lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x3a8);
                        uVar12 = *(ulong *)(lVar13 + 0x20);
                        if (((byte)((uVar12 & 4) == 0 | (byte)((uVar9 & 2) >> 1)) == 1) &&
                           (((uVar12 & 0x420) == 0 && ((*(byte *)(lVar13 + 0x19) & 1) == 0)))) {
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x418) = 1;
                          iVar7 = FUN_100bc4b00(param_1);
                          if (0 < iVar7) {
                            param_1[0x12] = 0x2100;
                            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c0) = 0x2180;
                            param_1[0x18] = 0;
                            goto LAB_100bc28f0;
                          }
                          goto LAB_100bc2ac8;
                        }
                      }
                      lVar13 = *(long *)(param_1 + 0x20);
                      *(undefined4 *)(lVar13 + 0x418) = 0;
                      param_1[0x12] = 0x2170;
                      bVar5 = true;
                      bVar6 = true;
                      if (*(long *)(lVar13 + 0x1b8) != 0) goto LAB_100bc2665;
                      goto LAB_100bc28f3;
                    }
LAB_100bc2aa2:
                    FUN_100c62ee0(0x14,0x80,0xff,"s3_srvr.c",0x364);
                    iVar7 = -1;
                    goto LAB_100bc2ac8;
                  }
                  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x3a8);
                  uVar12 = *(ulong *)(lVar13 + 0x18);
                  *(undefined4 *)(*(long *)(param_1 + 0x20) + 1000) = 0;
                  if ((uVar12 & 0x100) == 0) {
                    if ((uVar12 & 0x48e) != 0) goto LAB_100bc2783;
LAB_100bc2734:
                    bVar5 = true;
                    if (((uVar12 & 1) != 0) &&
                       ((*(long *)(*(long *)(param_1 + 0x40) + 0x68) == 0 ||
                        (((*(byte *)(lVar13 + 0x40) & 2) != 0 &&
                         (iVar7 = FUN_100c6d160(),
                         (int)((~(*(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) << 6
                                 ) & 0x200U) + 0x200) < iVar7 * 8)))))) goto LAB_100bc2783;
                  }
                  else {
                    if (((uVar12 & 0x48e) == 0) &&
                       (*(long *)(*(long *)(param_1 + 0x5c) + 0x208) == 0)) goto LAB_100bc2734;
LAB_100bc2783:
                    iVar7 = FUN_100bc3ad0(param_1);
                    bVar5 = false;
                    if (iVar7 < 1) goto LAB_100bc2ac8;
                  }
                  param_1[0x12] = 0x2160;
                  param_1[0x18] = 0;
                  goto LAB_100bc28f3;
                }
                if ((int)uVar15 < 0x2130) {
                  if (0x210f < (int)uVar15) {
                    if (uVar15 - 0x2110 < 3) {
                      param_1[0x11] = 0;
                      if ((param_1[10] != 4) && (iVar7 = FUN_100bc2be0(param_1), iVar7 < 1))
                      goto LAB_100bc2ac8;
                      local_3c = 0x70;
                      if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x19) & 4) != 0
                          ) && (*(long *)(param_1 + 0xac) != 0)) {
                        if (*(long *)(param_1 + 0xb2) == 0) {
                          local_3c = 0x73;
                        }
                        else {
                          iVar7 = FUN_100bf1700(param_1,&local_3c);
                          if (iVar7 < 0) {
                            param_1[10] = 4;
                            goto LAB_100bc2ac8;
                          }
                          if (iVar7 == 0) goto LAB_100bc26fa;
                        }
                        FUN_100bd2dc0(param_1,2,local_3c);
                        if (local_3c != 0x73) {
                          FUN_100c62ee0(0x14,0x80,0xe2,"s3_srvr.c",0x181);
                        }
                        goto LAB_100bc29f9;
                      }
LAB_100bc26fa:
                      param_1[0xa9] = 2;
                      param_1[0x12] = 0x2130;
                      param_1[0x18] = 0;
                    }
                    else if (uVar15 - 0x2120 < 2) {
                      param_1[0x11] = 0;
                      if (uVar15 == 0x2120) {
                        **(undefined4 **)(*(long *)(param_1 + 0x14) + 8) = 0;
                        param_1[0x12] = 0x2121;
                        param_1[0x18] = 4;
                        param_1[0x19] = 0;
                      }
                      iVar7 = FUN_100bd30a0(param_1,0x16);
                      if (iVar7 < 1) goto LAB_100bc2ac8;
                      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c0) = 0x2122;
                      param_1[0x12] = 0x2100;
                      param_1[0x18] = 0;
                      FUN_100bcfc00(param_1);
                    }
                    else {
                      if (uVar15 != 0x2122) goto LAB_100bc2aa2;
                      param_1[0x12] = 3;
                    }
                    goto LAB_100bc28f0;
                  }
                  if (uVar15 != 0x2100) goto LAB_100bc2aa2;
                  param_1[10] = 2;
                  iVar8 = FUN_100c58d60(*(undefined8 *)(param_1 + 6),0xb,0,0);
                  iVar7 = -1;
                  if (0 < iVar8) {
                    param_1[10] = 1;
                    param_1[0x12] = *(uint *)(*(long *)(param_1 + 0x20) + 0x3c0);
                    goto LAB_100bc28f0;
                  }
                }
                else {
                  if (1 < uVar15 - 0x2130) {
                    if (1 < uVar15 - 0x2140) goto LAB_100bc2aa2;
                    if (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x20) & 0x424)
                         == 0) &&
                       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x19) & 1) == 0))
                    {
                      iVar7 = FUN_100bc3a10(param_1);
                      if (iVar7 < 1) goto LAB_100bc2ac8;
                      if (param_1[0x7c] == 0) {
                        param_1[0x12] = 0x2150;
                      }
                      else {
                        param_1[0x12] = 0x2200;
                      }
                      bVar5 = false;
                      param_1[0x18] = 0;
                    }
                    else {
                      param_1[0x12] = 0x2150;
                      bVar5 = true;
                      param_1[0x18] = 0;
                    }
                    goto LAB_100bc28f3;
                  }
                  iVar7 = FUN_100bc3830(param_1);
                  if (0 < iVar7) {
                    if (param_1[0x2a] == 0) {
                      param_1[0x12] = 0x2140;
                      param_1[0x18] = 0;
                    }
                    else if (param_1[0x85] == 0) {
                      param_1[0x12] = 0x21d0;
                      param_1[0x18] = 0;
                    }
                    else {
                      param_1[0x12] = 0x21f0;
                      param_1[0x18] = 0;
                    }
                    goto LAB_100bc28f0;
                  }
                }
              }
              else if (uVar15 - 0x2180 < 2) {
                iVar7 = FUN_100bc4e60(param_1);
                if (0 < iVar7) {
                  if (iVar7 == 2) {
                    param_1[0x12] = 0x2112;
                  }
                  else {
                    if ((*(int *)(*(long *)(param_1 + 0x20) + 0x418) != 0) &&
                       (iVar7 = FUN_100bc4f40(param_1), iVar7 < 1)) goto LAB_100bc2ac8;
                    param_1[0x18] = 0;
                    param_1[0x12] = 0x2190;
                  }
                  goto LAB_100bc28f0;
                }
              }
              else {
                if (uVar15 == 0x2170) {
                  puVar3 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
                  *puVar3 = 0xe;
                  puVar3[1] = 0;
                  puVar3[2] = 0;
                  puVar3[3] = 0;
                  param_1[0x12] = 0x2171;
                  param_1[0x18] = 4;
                  param_1[0x19] = 0;
                }
                else if (uVar15 != 0x2171) goto LAB_100bc2aa2;
                iVar7 = FUN_100bd30a0(param_1,0x16);
                if (0 < iVar7) {
                  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c0) = 0x2180;
                  param_1[0x12] = 0x2100;
                  param_1[0x18] = 0;
                  goto LAB_100bc28f0;
                }
              }
            }
            else if (uVar15 - 0x2190 < 2) {
              iVar7 = FUN_100bc54a0(param_1);
              if (0 < iVar7) {
                if (iVar7 != 2) {
                  param_1[0x12] = 0x21a0;
                  param_1[0x18] = 0;
                  if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
                    lVar13 = 0;
                    iVar7 = 0;
                    if (*(long *)(*(long *)(param_1 + 0x20) + 0x1b8) != 0) {
                      iVar8 = FUN_100bcfe80(param_1);
                      lVar13 = 0;
                      iVar7 = 0;
                      if (iVar8 == 0) goto LAB_100bc29aa;
                    }
                    do {
                      if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1c0) + lVar13 * 8) != 0)
                      {
                        pcVar4 = *(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x38);
                        uVar14 = FUN_100c6fca0();
                        uVar10 = FUN_100c6fc30(uVar14);
                        (*pcVar4)(param_1,uVar10,*(long *)(param_1 + 0x20) + 0x210 + (long)iVar7);
                        uVar14 = FUN_100c6fca0(*(undefined8 *)
                                                (*(long *)(*(long *)(param_1 + 0x20) + 0x1c0) +
                                                lVar13 * 8));
                        iVar8 = FUN_100c6fc50(uVar14);
                        if (iVar8 < 0) goto LAB_100bc29f9;
                        iVar7 = iVar7 + iVar8;
                      }
                      lVar13 = lVar13 + 1;
                      bVar5 = false;
                    } while (lVar13 < 6);
                  }
                  else {
                    bVar5 = false;
                    if (*(long *)(*(long *)(param_1 + 0x4c) + 0xb0) != 0) {
                      pbVar2 = *(byte **)(param_1 + 0x20);
                      if (*(long *)(pbVar2 + 0x1b8) == 0) {
                        FUN_100c62ee0(0x14,0x80,0x44,"s3_srvr.c",0x280);
                        goto LAB_100bc29aa;
                      }
                      *pbVar2 = *pbVar2 | 0x20;
                      bVar6 = false;
LAB_100bc2665:
                      bVar5 = bVar6;
                      iVar7 = FUN_100bcfe80(param_1);
                      if (iVar7 == 0) goto LAB_100bc29aa;
                    }
                  }
                  goto LAB_100bc28f3;
                }
LAB_100bc231a:
                uVar9 = 0x21c0;
                if (*(int *)(*(long *)(param_1 + 0x20) + 0x4a8) != 0) {
                  uVar9 = 0x2210;
                }
                param_1[0x12] = uVar9;
                param_1[0x18] = 0;
                goto LAB_100bc28f0;
              }
            }
            else {
              if (1 < uVar15 - 0x21a0) goto LAB_100bc2aa2;
              iVar7 = FUN_100bc6600(param_1);
              if (0 < iVar7) goto LAB_100bc231a;
            }
          }
          else {
            if (1 < uVar15 - 0x21c0) {
              if (1 < uVar15 - 0x21d0) goto LAB_100bc2aa2;
              *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xe0) =
                   *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3a8);
              iVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x10))(param_1);
              if (iVar7 != 0) {
                iVar7 = FUN_100bd3480(param_1,0x21d0,0x21d1);
                if (iVar7 < 1) goto LAB_100bc2ac8;
                param_1[0x12] = 0x21e0;
                param_1[0x18] = 0;
                iVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x20))(param_1,0x22);
                bVar5 = false;
                if (iVar7 != 0) goto LAB_100bc28f3;
              }
              goto LAB_100bc29f9;
            }
            pbVar2 = *(byte **)(param_1 + 0x20);
            if (*(int *)(pbVar2 + 0x1c8) == 0) {
              *pbVar2 = *pbVar2 | 0x80;
            }
            iVar7 = FUN_100bd32d0(param_1,0x21c0,0x21c1);
            if (0 < iVar7) {
              if (param_1[0x2a] == 0) {
                if (param_1[0x85] == 0) {
                  param_1[0x12] = 0x21d0;
                  param_1[0x18] = 0;
                }
                else {
                  param_1[0x12] = 0x21f0;
                  param_1[0x18] = 0;
                }
              }
              else {
                param_1[0x12] = 3;
                param_1[0x18] = 0;
              }
              goto LAB_100bc28f0;
            }
          }
        }
        else if (uVar15 - 0x21e0 < 2) {
          iVar7 = FUN_100bd3160(param_1,0x21e0,0x21e1,
                                *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x50),
                                *(undefined4 *)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x58));
          if (0 < iVar7) {
            param_1[0x12] = 0x2100;
            lVar13 = *(long *)(param_1 + 0x20);
            if (param_1[0x2a] == 0) {
              *(undefined4 *)(lVar13 + 0x3c0) = 3;
              param_1[0x18] = 0;
            }
            else if (*(int *)(lVar13 + 0x4a8) == 0) {
              *(undefined4 *)(lVar13 + 0x3c0) = 0x21c0;
              param_1[0x18] = 0;
            }
            else {
              *(undefined4 *)(lVar13 + 0x3c0) = 0x2210;
              param_1[0x18] = 0;
            }
            goto LAB_100bc28f0;
          }
        }
        else {
          if (1 < uVar15 - 0x21f0) goto LAB_100bc2aa2;
          iVar7 = FUN_100bc6ed0(param_1);
          if (0 < iVar7) {
            param_1[0x12] = 0x21d0;
            param_1[0x18] = 0;
            goto LAB_100bc28f0;
          }
        }
      }
      else if (uVar15 - 0x2200 < 2) {
        iVar7 = FUN_100bc7440(param_1);
        if (0 < iVar7) {
          param_1[0x12] = 0x2150;
          param_1[0x18] = 0;
          goto LAB_100bc28f0;
        }
      }
      else {
        if (1 < uVar15 - 0x2210) goto LAB_100bc2aa2;
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (*(int *)(pbVar2 + 0x1c8) == 0) {
          *pbVar2 = *pbVar2 | 0x80;
        }
        iVar7 = FUN_100bc6d70(param_1);
        if (0 < iVar7) {
          param_1[0x18] = 0;
          param_1[0x12] = 0x21c0;
          goto LAB_100bc28f0;
        }
      }
LAB_100bc2ac8:
      param_1[0xb] = param_1[0xb] - 1;
      if (pcVar16 == (code *)0x0) {
        return iVar7;
      }
LAB_100bc2ad1:
      (*pcVar16)(param_1,0x2002,iVar7);
      return iVar7;
    }
    if ((uVar15 != 0x6000) && (uVar15 != 0x4000)) {
      if (uVar15 != 0x3004) goto LAB_100bc2aa2;
      param_1[0xa9] = 1;
    }
LAB_100bc1e0a:
    param_1[0xe] = 1;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(param_1,0x10,1);
    }
    if ((*param_1 & 0xffffff00) != 0x300) {
      FUN_100c62ee0(0x14,0x80,0x44,"s3_srvr.c",0x10c);
LAB_100bc29aa:
      param_1[0x12] = 5;
      return -1;
    }
    param_1[1] = 0x2000;
    if (*(long *)(param_1 + 0x14) == 0) {
      lVar13 = FUN_100c57ec0();
      if (lVar13 != 0) {
        iVar7 = FUN_100c57f60(lVar13,0x4000);
        if (iVar7 != 0) {
          *(long *)(param_1 + 0x14) = lVar13;
          goto LAB_100bc1e75;
        }
        FUN_100c57f20(lVar13);
      }
LAB_100bc29f9:
      param_1[0x12] = 5;
      iVar7 = -1;
      goto LAB_100bc2ac8;
    }
LAB_100bc1e75:
    iVar7 = FUN_100bd4050(param_1);
    if (iVar7 == 0) goto LAB_100bc29f9;
    param_1[0x18] = 0;
    puVar1 = *(ulong **)(param_1 + 0x20);
    *puVar1 = *puVar1 & 0xffffffffffffff3f;
    *(undefined4 *)(puVar1 + 0x39) = 0;
    if (param_1[0x12] == 0x3004) {
      if ((*(int *)((long)puVar1 + 0x4a4) == 0) && ((*(byte *)((long)param_1 + 0x1aa) & 4) == 0)) {
        FUN_100c62ee0(0x14,0x80,0x152,"s3_srvr.c",0x145);
        FUN_100bd2dc0(param_1,2,0x28);
        goto LAB_100bc29f9;
      }
      *(int *)(*(long *)(param_1 + 0x5c) + 0x78) = *(int *)(*(long *)(param_1 + 0x5c) + 0x78) + 1;
      param_1[0x12] = 0x2120;
    }
    else {
      iVar7 = FUN_100be6bc0(param_1,1);
      if (iVar7 == 0) goto LAB_100bc29f9;
      FUN_100bcfc00(param_1);
      param_1[0x12] = 0x2110;
      *(int *)(*(long *)(param_1 + 0x5c) + 0x74) = *(int *)(*(long *)(param_1 + 0x5c) + 0x74) + 1;
    }
LAB_100bc28f0:
    bVar5 = false;
LAB_100bc28f3:
  } while (bVar5 || *(int *)(*(long *)(param_1 + 0x20) + 0x3c4) != 0);
  if ((param_1[0x5e] != 0) &&
     (iVar7 = FUN_100c58d60(*(undefined8 *)(param_1 + 6),0xb,0,0), iVar7 < 1)) goto LAB_100bc2ac8;
  if (pcVar16 == (code *)0x0) goto LAB_100bc1d6a;
  uVar9 = param_1[0x12];
  if (uVar9 != uVar15) {
    param_1[0x12] = uVar15;
    (*pcVar16)(param_1,0x2001,1);
    param_1[0x12] = uVar9;
  }
  goto LAB_100bc1d88;
}

