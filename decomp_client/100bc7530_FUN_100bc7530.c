
ulong FUN_100bc7530(uint *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  code *pcVar12;
  time_t local_40;
  int local_34;
  
  local_40 = _time((time_t *)0x0);
  FUN_100c62060(0,&local_40,8);
  FUN_100c63270();
  piVar7 = ___error();
  *piVar7 = 0;
  pcVar12 = *(code **)(param_1 + 0x54);
  if (pcVar12 == (code *)0x0) {
    pcVar12 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108);
  }
  param_1[0xb] = param_1[0xb] + 1;
  uVar8 = FUN_100be45f0(param_1);
  if (((uVar8 & 0x3000) == 0) || (uVar8 = FUN_100be45f0(param_1), (uVar8 & 0x4000) != 0)) {
    FUN_100be2c50(param_1);
  }
  if (param_1[0xa7] != 0) {
    param_1[0xa7] = 0;
    param_1[0xa8] = param_1[0xa8] + 1;
  }
LAB_100bc75d2:
  do {
    uVar6 = param_1[0x12];
LAB_100bc75f8:
    uVar11 = uVar6;
    if ((int)uVar11 < 0x3004) {
      if ((int)uVar11 < 0x11f0) {
        if ((int)uVar11 < 0x11d0) {
          if ((int)uVar11 < 0x1100) {
            if ((uVar11 == 0x1000) || (uVar11 == 0x1003)) goto LAB_100bc768c;
            if (uVar11 != 3) goto LAB_100bc7f87;
            FUN_100bcf9d0(param_1);
            if (*(long *)(param_1 + 0x14) != 0) {
              FUN_100c57f20();
              param_1[0x14] = 0;
              param_1[0x15] = 0;
            }
            if ((**(byte **)(param_1 + 0x20) & 4) == 0) {
              FUN_100be6ca0(param_1);
            }
            param_1[0x18] = 0;
            param_1[0xa9] = 0;
            param_1[0xf] = 0;
            uVar8 = 1;
            FUN_100be6330(param_1,1);
            lVar9 = *(long *)(param_1 + 0x5c);
            if (param_1[0x2a] != 0) {
              piVar7 = (int *)(lVar9 + 0x8c);
              *piVar7 = *piVar7 + 1;
            }
            *(code **)(param_1 + 0xc) = FUN_100bc7530;
            piVar7 = (int *)(lVar9 + 0x70);
            *piVar7 = *piVar7 + 1;
            if (pcVar12 != (code *)0x0) {
              uVar8 = 1;
              (*pcVar12)(param_1,0x20,1);
              param_1[0xb] = param_1[0xb] - 1;
              goto LAB_100bc802a;
            }
          }
          else if ((int)uVar11 < 0x11a0) {
            if ((int)uVar11 < 0x1170) {
              if (0x114f < (int)uVar11) {
                if (uVar11 - 0x1150 < 2) {
                  uVar6 = FUN_100bcad30(param_1);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    param_1[0x12] = 0x1160;
                    goto LAB_100bc78dd;
                  }
                  goto LAB_100bc8026;
                }
                if (1 < uVar11 - 0x1160) goto LAB_100bc7f87;
                uVar8 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                                  (param_1,0x1160,0x1161,0xe,0x1e,&local_34);
                if (local_34 == 0) {
                  if ((int)uVar8 < 1) goto LAB_100bc8026;
                }
                else if (0 < (long)uVar8) {
                  FUN_100bd2dc0(param_1,2,0x32);
                  FUN_100c62ee0(0x14,0x91,0x9f,"s3_clnt.c",0x91e);
                  goto LAB_100bc7e9e;
                }
                lVar9 = *(long *)(param_1 + 0x20);
                if ((*(byte *)(*(long *)(lVar9 + 0x3a8) + 0x19) & 4) != 0) {
                  uVar6 = FUN_100bf1e70(param_1);
                  uVar8 = (ulong)uVar6;
                  if ((int)uVar6 < 1) {
                    FUN_100c62ee0(0x14,0x84,0x169,"s3_clnt.c",0x192);
                    FUN_100bd2dc0(param_1,2,0x50);
                    goto LAB_100bc801e;
                  }
                  lVar9 = *(long *)(param_1 + 0x20);
                }
                uVar6 = 0x1180;
                if (*(int *)(lVar9 + 0x3c8) != 0) {
                  uVar6 = 0x1170;
                }
                param_1[0x12] = uVar6;
                goto LAB_100bc78dd;
              }
              if ((int)uVar11 < 0x1130) {
                if (uVar11 - 0x1110 < 2) {
                  param_1[0x11] = 0;
                  uVar6 = FUN_100bc80b0(param_1);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    param_1[0x12] = 0x1120;
                    param_1[0x18] = 0;
                    bVar4 = false;
                    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 6)) {
                      uVar10 = FUN_100c591b0();
                      *(undefined8 *)(param_1 + 6) = uVar10;
                    }
                    goto LAB_100bc78e7;
                  }
                }
                else if (uVar11 - 0x1120 < 2) {
                  uVar6 = FUN_100bc8420(param_1);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    uVar6 = 0x1130;
                    if (param_1[0x2a] != 0) {
                      param_1[0x12] = 0x11d0;
                      uVar6 = 0x11d0;
                      if (param_1[0x85] != 0) {
                        uVar6 = 0x11e0;
                      }
                    }
                    goto LAB_100bc78ad;
                  }
                }
                else {
                  if (uVar11 != 0x1100) goto LAB_100bc7f87;
                  param_1[10] = 2;
                  iVar5 = FUN_100c58d60(*(undefined8 *)(param_1 + 6),0xb,0,0);
                  uVar8 = 0xffffffff;
                  if (0 < iVar5) {
                    param_1[10] = 1;
                    param_1[0x12] = *(uint *)(*(long *)(param_1 + 0x20) + 0x3c0);
                    bVar4 = false;
                    goto LAB_100bc78e7;
                  }
                }
              }
              else {
                if (uVar11 - 0x1130 < 2) {
                  local_34 = 0;
                  if (((0x300 < (int)*param_1) && (*(long *)(param_1 + 0x98) != 0)) &&
                     (*(long *)(*(long *)(param_1 + 0x4c) + 0x140) != 0)) {
                    **(ulong **)(param_1 + 0x20) = **(ulong **)(param_1 + 0x20) | 0x80;
                    (**(code **)(*(long *)(param_1 + 2) + 0x60))
                              (param_1,0x1130,0x1131,0xffffffff,*(undefined8 *)(param_1 + 0x6e),
                               &local_34);
                    puVar1 = *(ulong **)(param_1 + 0x20);
                    *puVar1 = *puVar1 & 0xffffffffffffff7f;
                    if (local_34 != 0) {
                      *(undefined4 *)((long)puVar1 + 0x3c4) = 1;
                      if ((int)puVar1[0x74] == 0x14) {
                        param_1[0x2a] = 1;
                        param_1[0x12] = 0x11d0;
                        goto LAB_100bc78dd;
                      }
                      if ((int)puVar1[0x39] == 0) goto LAB_100bc7e07;
                      FUN_100c62ee0(0x14,0x153,0x85,"s3_clnt.c",0xdbf);
                      FUN_100bd2dc0(param_1,2,10);
                    }
                    uVar8 = 0xffffffff;
                    param_1[0xb] = param_1[0xb] - 1;
                    goto LAB_100bc802a;
                  }
LAB_100bc7e07:
                  if (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x20) & 0x404) ==
                       0) && ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x19) & 1)
                              == 0)) {
                    uVar6 = FUN_100bc8b00(param_1);
                    uVar8 = (ulong)uVar6;
                    if ((int)uVar6 < 1) goto LAB_100bc8026;
                    if (param_1[0x7c] == 0) {
                      param_1[0x12] = 0x1140;
                    }
                    else {
                      param_1[0x12] = 0x11f0;
                    }
                    bVar4 = false;
                    param_1[0x18] = 0;
                  }
                  else {
                    param_1[0x12] = 0x1140;
                    bVar4 = true;
                    param_1[0x18] = 0;
                  }
                  goto LAB_100bc78e7;
                }
                if (1 < uVar11 - 0x1140) goto LAB_100bc7f87;
                uVar6 = FUN_100bc9040(param_1);
                uVar8 = (ulong)uVar6;
                if (0 < (int)uVar6) {
                  param_1[0x12] = 0x1150;
                  param_1[0x18] = 0;
                  iVar5 = FUN_100bca860(param_1);
                  goto LAB_100bc7b4f;
                }
              }
            }
            else {
              uVar8 = (ulong)(uVar11 - 0x1170);
              if (0x21 < uVar11 - 0x1170) {
LAB_100bc7f87:
                FUN_100c62ee0(0x14,0x84,0xff,"s3_clnt.c",0x281);
                uVar8 = 0xffffffff;
                param_1[0xb] = param_1[0xb] - 1;
                goto LAB_100bc802a;
              }
              if ((0xfUL >> (uVar8 & 0x3f) & 1) == 0) {
                if ((0x30000UL >> (uVar8 & 0x3f) & 1) == 0) {
                  if ((0x300000000U >> (uVar8 & 0x3f) & 1) == 0) goto LAB_100bc7f87;
                  uVar6 = FUN_100bcc5c0(param_1);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    param_1[0x12] = 0x11a0;
                    goto LAB_100bc78dd;
                  }
                }
                else {
                  uVar6 = FUN_100bcb5c0(param_1);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    uVar6 = 0x11a0;
                    if ((int)(*(ulong **)(param_1 + 0x20))[0x79] == 1) {
                      uVar6 = 0x1190;
                    }
                    if ((**(ulong **)(param_1 + 0x20) & 0x10) != 0) {
                      uVar6 = 0x11a0;
                    }
                    param_1[0x12] = uVar6;
                    goto LAB_100bc78dd;
                  }
                }
              }
              else {
                uVar6 = FUN_100bcb340(param_1);
                uVar8 = (ulong)uVar6;
                if (0 < (int)uVar6) {
                  param_1[0x12] = 0x1180;
                  goto LAB_100bc78dd;
                }
              }
            }
          }
          else if (uVar11 - 0x11a0 < 2) {
            uVar6 = FUN_100bd3480(param_1,0x11a0,0x11a1);
            uVar8 = (ulong)uVar6;
            if (0 < (int)uVar6) {
              lVar9 = *(long *)(param_1 + 0x20);
              uVar6 = 0x11b0;
              if (*(int *)(lVar9 + 0x4a8) != 0) {
                uVar6 = 0x1200;
              }
              param_1[0x12] = uVar6;
              param_1[0x18] = 0;
              lVar3 = *(long *)(param_1 + 0x4c);
              *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar9 + 0x3a8);
              if (*(undefined4 **)(lVar9 + 0x410) == (undefined4 *)0x0) {
                *(undefined4 *)(lVar3 + 0xd8) = 0;
              }
              else {
                *(undefined4 *)(lVar3 + 0xd8) = **(undefined4 **)(lVar9 + 0x410);
              }
              iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x10))(param_1);
              if (iVar5 != 0) {
                iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x20))(param_1,0x12);
LAB_100bc7b4f:
                bVar4 = false;
                if (iVar5 != 0) goto LAB_100bc78e7;
              }
              goto LAB_100bc7e9e;
            }
          }
          else {
            if (1 < uVar11 - 0x11b0) goto LAB_100bc7f87;
            uVar6 = FUN_100bd3160(param_1,0x11b0,0x11b1,
                                  *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x40),
                                  *(undefined4 *)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x48));
            uVar8 = (ulong)uVar6;
            if (0 < (int)uVar6) {
              param_1[0x12] = 0x1100;
              puVar1 = *(ulong **)(param_1 + 0x20);
              uVar8 = *puVar1;
              *puVar1 = uVar8 & 0xfffffffffffffffb;
              if (param_1[0x2a] == 0) {
                if (param_1[0x85] == 0) {
                  *(undefined4 *)(puVar1 + 0x78) = 0x11d0;
                }
                else {
                  *(undefined4 *)(puVar1 + 0x78) = 0x11e0;
                }
              }
              else {
                *(undefined4 *)(puVar1 + 0x78) = 3;
                if ((uVar8 & 2) != 0) {
                  param_1[0x12] = 3;
                  *puVar1 = uVar8 | 4;
                  *(undefined4 *)(puVar1 + 1) = 0;
                }
              }
              goto LAB_100bc78dd;
            }
          }
        }
        else if (uVar11 - 0x11d0 < 2) {
          pbVar2 = *(byte **)(param_1 + 0x20);
          if (*(int *)(pbVar2 + 0x1c8) == 0) {
            *pbVar2 = *pbVar2 | 0x80;
          }
          uVar6 = FUN_100bd32d0(param_1,0x11d0,0x11d1);
          uVar8 = (ulong)uVar6;
          if (0 < (int)uVar6) {
            uVar6 = 3;
            if (param_1[0x2a] == 0) {
LAB_100bc78ad:
              param_1[0x12] = uVar6;
            }
            else {
              param_1[0x12] = 0x11a0;
            }
LAB_100bc78dd:
            param_1[0x18] = 0;
            bVar4 = false;
            goto LAB_100bc78e7;
          }
        }
        else {
          if (1 < uVar11 - 0x11e0) goto LAB_100bc7f87;
          uVar6 = FUN_100bccc30(param_1);
          uVar8 = (ulong)uVar6;
          if (0 < (int)uVar6) {
            param_1[0x12] = 0x11d0;
            goto LAB_100bc78dd;
          }
        }
      }
      else if (uVar11 - 0x11f0 < 2) {
        uVar6 = FUN_100bcceb0(param_1);
        uVar8 = (ulong)uVar6;
        if (0 < (int)uVar6) {
          param_1[0x12] = 0x1140;
          goto LAB_100bc78dd;
        }
      }
      else {
        if (1 < uVar11 - 0x1200) goto LAB_100bc7f87;
        uVar6 = FUN_100bccb70(param_1);
        uVar8 = (ulong)uVar6;
        if (0 < (int)uVar6) {
          param_1[0x12] = 0x11b0;
          bVar4 = false;
          goto LAB_100bc78e7;
        }
      }
      goto LAB_100bc8026;
    }
    if ((uVar11 != 0x5000) && (uVar11 != 0x4000)) {
      if (uVar11 != 0x3004) goto LAB_100bc7f87;
      param_1[0xa9] = 1;
      param_1[0x12] = 0x1000;
      *(int *)(*(long *)(param_1 + 0x5c) + 0x6c) = *(int *)(*(long *)(param_1 + 0x5c) + 0x6c) + 1;
    }
LAB_100bc768c:
    param_1[0xe] = 0;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(param_1,0x10,1);
    }
    if ((*param_1 & 0xff00) != 0x300) {
      FUN_100c62ee0(0x14,0x84,0x44,"s3_clnt.c",0xf0);
LAB_100bc7e9e:
      param_1[0x12] = 5;
      uVar8 = 0xffffffff;
      param_1[0xb] = param_1[0xb] - 1;
      goto LAB_100bc802a;
    }
    param_1[1] = 0x1000;
    if (*(long *)(param_1 + 0x14) == 0) {
      lVar9 = FUN_100c57ec0();
      if (lVar9 == 0) goto LAB_100bc7e9e;
      iVar5 = FUN_100c57f60(lVar9,0x4000);
      if (iVar5 == 0) {
        param_1[0x12] = 5;
        param_1[0xb] = param_1[0xb] - 1;
        FUN_100c57f20(lVar9);
        uVar8 = 0xffffffff;
        goto LAB_100bc802a;
      }
      *(long *)(param_1 + 0x14) = lVar9;
    }
    iVar5 = FUN_100bd4050(param_1);
    uVar8 = 0xffffffff;
    if (iVar5 == 0) {
LAB_100bc8026:
      param_1[0xb] = param_1[0xb] - 1;
LAB_100bc802a:
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(param_1,0x1002,uVar8 & 0xffffffff);
      }
      return uVar8 & 0xffffffff;
    }
    iVar5 = FUN_100be6bc0(param_1,0);
    if (iVar5 == 0) {
LAB_100bc801e:
      param_1[0x12] = 5;
      goto LAB_100bc8026;
    }
    FUN_100bcfc00(param_1);
    param_1[0x12] = 0x1110;
    *(int *)(*(long *)(param_1 + 0x5c) + 0x68) = *(int *)(*(long *)(param_1 + 0x5c) + 0x68) + 1;
    param_1[0x18] = 0;
    puVar1 = *(ulong **)(param_1 + 0x20);
    *puVar1 = *puVar1 & 0xffffffffffffff7f;
    *(undefined4 *)(puVar1 + 0x39) = 0;
    bVar4 = false;
LAB_100bc78e7:
  } while (bVar4 || *(int *)(*(long *)(param_1 + 0x20) + 0x3c4) != 0);
  if ((param_1[0x5e] != 0) &&
     (uVar8 = FUN_100c58d60(*(undefined8 *)(param_1 + 6),0xb,0,0), (int)uVar8 < 1))
  goto LAB_100bc8026;
  if (pcVar12 == (code *)0x0) goto LAB_100bc75d2;
  uVar6 = param_1[0x12];
  if (uVar6 != uVar11) {
    param_1[0x12] = uVar11;
    (*pcVar12)(param_1,0x1001,1);
    param_1[0x12] = uVar6;
  }
  goto LAB_100bc75f8;
}

