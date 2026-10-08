
ulong FUN_100bc54a0(uint *param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 local_320;
  int local_318;
  int local_314;
  undefined8 local_310;
  byte *local_308;
  int local_2fc;
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [144];
  byte local_248 [528];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar10;
  uVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x60))(param_1,0x2190,0x2191,0x10,0x800,&local_2fc);
  if (local_2fc == 0) goto LAB_100bc57da;
  pbVar1 = *(byte **)(param_1 + 0x16);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar13 = *(ulong *)(*(long *)(lVar9 + 0x3a8) + 0x18);
  local_308 = pbVar1;
  if ((uVar13 & 1) == 0) {
    if ((uVar13 & 0xe) == 0) {
      if ((uVar13 & 0xe0) == 0) {
        if ((uVar13 & 0x100) == 0) {
          if ((uVar13 & 0x400) == 0) {
            if ((uVar13 & 0x200) != 0) {
              local_310 = 0x20;
              uVar13 = *(ulong *)(*(long *)(lVar9 + 0x3a8) + 0x20);
              if ((uVar13 & 0x100) == 0) {
                uVar14 = 0;
                if ((uVar13 & 0x200) != 0) {
                  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x110);
                }
              }
              else {
                uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0xf8);
              }
              lVar9 = FUN_100c71540(uVar14,0);
              if (lVar9 != 0) {
                iVar4 = FUN_100c723c0(lVar9);
                if (iVar4 < 1) {
                  FUN_100c62ee0(0x14,0x8b,0x44,"s3_srvr.c",0xb49);
                  uVar7 = 0;
                  lVar11 = 0;
                }
                else {
                  lVar11 = FUN_100c929a0(*(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xb0));
                  if ((lVar11 != 0) && (iVar4 = FUN_100c725f0(lVar9,lVar11), iVar4 < 1)) {
                    FUN_100c63270();
                  }
                  iVar4 = FUN_100c8abb0(&local_308,&local_320,&local_314,&local_318,uVar7);
                  if (((iVar4 == 0x20) && (local_314 == 0x10)) && (local_318 == 0)) {
                    iVar4 = FUN_100c72440(lVar9,local_2f8,&local_310,local_308,local_320);
                    if (0 < iVar4) {
                      uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                                        (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_2f8,0x20);
                      *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar5;
                      _OPENSSL_cleanse(local_2f8,0x20);
                      iVar4 = FUN_100c71a40(lVar9,0xffffffff,0xffffffff,2,2,0);
                      uVar7 = (ulong)((0 < iVar4) + 1);
                      goto LAB_100bc64f6;
                    }
                    uVar14 = 0xb65;
                  }
                  else {
                    uVar14 = 0xb5d;
                  }
                  FUN_100c62ee0(0x14,0x8b,0x93,"s3_srvr.c",uVar14);
                  uVar7 = 0;
                }
LAB_100bc64f6:
                FUN_100c6d8c0(lVar11);
                FUN_100c71960(lVar9);
                lVar9 = 0;
                if ((int)uVar7 != 0) goto LAB_100bc57da;
                lVar10 = 0;
                lVar11 = 0;
                piVar12 = (int *)0x0;
                goto LAB_100bc579d;
              }
              FUN_100c62ee0(0x14,0x8b,0x41,"s3_srvr.c",0xb45);
              uVar14 = 0x50;
              goto LAB_100bc5781;
            }
            FUN_100c62ee0(0x14,0x8b,0xf9,"s3_srvr.c",0xb7e);
            uVar14 = 0x28;
          }
          else {
            uVar18 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
            local_308 = pbVar1 + 2;
            if ((long)(ulong)(uVar18 + 2) <= (long)uVar7) {
              lVar10 = FUN_100c26e20(local_308,(ulong)uVar18,0);
              *(long *)(param_1 + 0xbc) = lVar10;
              if (lVar10 == 0) {
                uVar14 = 3;
                uVar16 = 0xb15;
              }
              else {
                iVar4 = FUN_100c27100(lVar10,*(undefined8 *)(param_1 + 0xb4));
                if ((-1 < iVar4) || (*(int *)(*(long *)(param_1 + 0xbc) + 8) == 0)) {
                  FUN_100c62ee0(0x14,0x8b,0x173,"s3_srvr.c",0xb1c);
                  uVar14 = 0x2f;
                  goto LAB_100bc5781;
                }
                if (*(long *)(*(long *)(param_1 + 0x4c) + 0x158) != 0) {
                  FUN_100bf3910();
                }
                lVar11 = FUN_100c58250(*(undefined8 *)(param_1 + 0xb2));
                lVar9 = *(long *)(param_1 + 0x4c);
                *(long *)(lVar9 + 0x158) = lVar11;
                lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
                if (lVar11 == 0) {
                  uVar14 = 0x41;
                  uVar16 = 0xb23;
                }
                else {
                  iVar4 = FUN_100bf1a80(param_1,lVar9 + 0x14);
                  *(int *)(*(long *)(param_1 + 0x4c) + 0x10) = iVar4;
                  if (-1 < iVar4) {
                    local_308 = local_308 + uVar18;
                    uVar7 = 1;
                    goto LAB_100bc57da;
                  }
                  uVar14 = 0x44;
                  uVar16 = 0xb2a;
                }
              }
LAB_100bc5581:
              FUN_100c62ee0(0x14,0x8b,uVar14,"s3_srvr.c",uVar16);
              lVar10 = 0;
              lVar11 = 0;
              piVar12 = (int *)0x0;
              lVar9 = 0;
              goto LAB_100bc579d;
            }
            FUN_100c62ee0(0x14,0x8b,0x15b,"s3_srvr.c",0xb11);
            uVar14 = 0x32;
          }
        }
        else {
          uVar18 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
          uVar13 = (ulong)uVar18;
          local_308 = pbVar1 + 2;
          if (uVar7 == uVar18 + 2) {
            if (0x80 < uVar18) {
              uVar14 = 0x92;
              uVar16 = 0xac1;
              goto LAB_100bc5cb9;
            }
            if (*(long *)(param_1 + 0x5a) == 0) {
              uVar14 = 0xe1;
              uVar16 = 0xac6;
              goto LAB_100bc5cb9;
            }
            ___memcpy_chk(local_2d8,local_308,uVar13,0x81);
            ___bzero(local_2d8 + uVar13,(long)(int)(0x81 - uVar18));
            uVar18 = (**(code **)(param_1 + 0x5a))(param_1,local_2d8,local_248,0x204);
            _OPENSSL_cleanse(local_2d8,0x81);
            if (uVar18 < 0x101) {
              if (uVar18 == 0) {
                FUN_100c62ee0(0x14,0x8b,0xdf,"s3_srvr.c",0xadc);
                uVar14 = 0x73;
                goto LAB_100bc6493;
              }
              uVar7 = (ulong)uVar18;
              _memmove(local_248 + uVar7 + 4,local_248,uVar7);
              bVar15 = (byte)(uVar18 >> 8);
              local_248[0] = bVar15;
              local_248[1] = (byte)uVar18;
              ___memset_chk(local_248 + 2,0,uVar7,0x202);
              local_248[uVar7 + 2] = bVar15;
              local_248[uVar7 + 3] = (byte)uVar18;
              if (*(long *)(*(long *)(param_1 + 0x4c) + 0x98) != 0) {
                FUN_100bf3910();
              }
              lVar11 = FUN_100c582e0(local_308,uVar13);
              lVar9 = *(long *)(param_1 + 0x4c);
              *(long *)(lVar9 + 0x98) = lVar11;
              lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
              if (lVar11 == 0) {
                uVar14 = 0x41;
                uVar16 = 0xaee;
                goto LAB_100bc5cb9;
              }
              if (*(long *)(lVar9 + 0x90) != 0) {
                FUN_100bf3910();
              }
              lVar11 = FUN_100c58250(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x208));
              lVar9 = *(long *)(param_1 + 0x4c);
              *(long *)(lVar9 + 0x90) = lVar11;
              if ((*(long *)(*(long *)(param_1 + 0x5c) + 0x208) != 0) && (lVar11 == 0)) {
                uVar14 = 0x41;
                uVar16 = 0xaf7;
                goto LAB_100bc5cb9;
              }
              uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                                (param_1,lVar9 + 0x14,local_248,uVar18 * 2 + 4);
              *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar5;
              uVar14 = 0x28;
              bVar2 = true;
            }
            else {
              FUN_100c62ee0(0x14,0x8b,0x44,"s3_srvr.c",0xad5);
              uVar14 = 0x28;
LAB_100bc6493:
              bVar2 = false;
              lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
            }
          }
          else {
            uVar14 = 0x9f;
            uVar16 = 0xabc;
LAB_100bc5cb9:
            FUN_100c62ee0(0x14,0x8b,uVar14,"s3_srvr.c",uVar16);
            uVar14 = 0x28;
            bVar2 = false;
          }
          _OPENSSL_cleanse(local_248,0x204);
          uVar7 = 1;
          if (bVar2) goto LAB_100bc57da;
        }
        lVar9 = 0;
        lVar10 = 0;
        piVar12 = (int *)0x0;
        goto LAB_100bc578a;
      }
      lVar9 = FUN_100c3f040();
      if (lVar9 == 0) {
        FUN_100c62ee0(0x14,0x8b,0x41,"s3_srvr.c",0xa35);
LAB_100bc5b6e:
        lVar10 = 0;
        lVar11 = 0;
        piVar12 = (int *)0x0;
        lVar9 = 0;
      }
      else {
        if ((uVar13 & 0x60) == 0) {
          puVar8 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x3b8);
        }
        else {
          puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 0xe0) + 0x20);
        }
        uVar14 = *puVar8;
        uVar16 = FUN_100c3fad0(uVar14);
        uVar14 = FUN_100c3fb20(uVar14);
        iVar4 = FUN_100c3fae0(lVar9,uVar16);
        if ((iVar4 == 0) || (iVar4 = FUN_100c3fb30(lVar9,uVar14), iVar4 == 0)) {
          uVar14 = 0x10;
          uVar16 = 0xa4a;
LAB_100bc5d16:
          FUN_100c62ee0(0x14,0x8b,uVar14,"s3_srvr.c",uVar16);
          lVar10 = 0;
          lVar11 = 0;
          piVar12 = (int *)0x0;
        }
        else {
          lVar10 = FUN_100c368e0(uVar16);
          if (lVar10 == 0) {
            uVar14 = 0x41;
            uVar16 = 0xa50;
            goto LAB_100bc5d16;
          }
          if (uVar7 == 0) {
            if ((uVar13 & 0x80) == 0) {
              piVar12 = (int *)FUN_100c929a0(*(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xb0));
              if ((piVar12 != (int *)0x0) && (*piVar12 == 0x198)) {
                uVar14 = FUN_100c3fb70(*(undefined8 *)(piVar12 + 8));
                iVar4 = FUN_100c369b0(lVar10,uVar14);
                uVar7 = 2;
                lVar11 = 0;
                if (iVar4 == 0) {
                  FUN_100c62ee0(0x14,0x8b,0x10,"s3_srvr.c",0xa70);
                  lVar11 = 0;
                }
                else {
LAB_100bc5f4b:
                  iVar4 = FUN_100c36e50(uVar16);
                  if (iVar4 < 1) {
                    uVar14 = 0xa94;
                  }
                  else {
                    iVar4 = FUN_100c53600(local_308,
                                          (long)((int)(iVar4 + 7 +
                                                      ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3),
                                          lVar10,lVar9,0);
                    if (0 < iVar4) {
                      FUN_100c6d8c0(piVar12);
                      FUN_100c36280(lVar10);
                      FUN_100c3f180(lVar9);
                      FUN_100c27ab0(lVar11);
                      FUN_100c3f180(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3b8));
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3b8) = 0;
                      uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                                        (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_308,iVar4);
                      *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar5;
                      _OPENSSL_cleanse(local_308,(long)iVar4);
                      goto LAB_100bc57cf;
                    }
                    uVar14 = 0xa9a;
                  }
                  FUN_100c62ee0(0x14,0x8b,0x2b,"s3_srvr.c",uVar14);
                }
                goto LAB_100bc579d;
              }
              FUN_100c62ee0(0x14,0x8b,0x139,"s3_srvr.c",0xa69);
              uVar14 = 0x28;
            }
            else {
              FUN_100c62ee0(0x14,0x8b,0x137,"s3_srvr.c",0xa5a);
              uVar14 = 0x28;
              piVar12 = (int *)0x0;
            }
            goto LAB_100bc578a;
          }
          lVar11 = FUN_100c27a20();
          if (lVar11 == 0) {
            FUN_100c62ee0(0x14,0x8b,0x41,"s3_srvr.c",0xa7b);
            lVar11 = 0;
          }
          else {
            bVar15 = *local_308;
            local_308 = local_308 + 1;
            if (uVar7 == (ulong)bVar15 + 1) {
              iVar4 = FUN_100c454a0(uVar16,lVar10,local_308,(ulong)bVar15,lVar11);
              if (iVar4 != 0) {
                local_308 = *(byte **)(*(long *)(param_1 + 0x14) + 8);
                uVar7 = 1;
                piVar12 = (int *)0x0;
                goto LAB_100bc5f4b;
              }
              FUN_100c62ee0(0x14,0x8b,0x10,"s3_srvr.c",0xa87);
              piVar12 = (int *)0x0;
              goto LAB_100bc579d;
            }
            FUN_100c62ee0(0x14,0x8b,0x10,"s3_srvr.c",0xa83);
          }
          piVar12 = (int *)0x0;
        }
      }
      goto LAB_100bc579d;
    }
    uVar13 = (ulong)(uint)CONCAT11(*pbVar1,pbVar1[1]);
    local_308 = pbVar1 + 2;
    if (uVar7 != CONCAT11(*pbVar1,pbVar1[1]) + 2) {
      if ((param_1[0x6a] & 0x80) == 0) {
        uVar14 = 0x94;
        uVar16 = 0x93b;
        goto LAB_100bc5581;
      }
      uVar13 = uVar7 & 0xffffffff;
      local_308 = pbVar1;
    }
    if (uVar7 == 0) {
      uVar14 = 0xec;
      uVar16 = 0x946;
      goto LAB_100bc5776;
    }
    lVar10 = *(long *)(lVar9 + 0x3b0);
    if (lVar10 == 0) {
      FUN_100c62ee0(0x14,0x8b,0xab,"s3_srvr.c",0x94c);
      uVar14 = 0x28;
      piVar12 = (int *)0x0;
      lVar9 = 0;
      lVar10 = 0;
      goto LAB_100bc578a;
    }
    lVar9 = FUN_100c26e20(local_308,uVar13,0);
    if (lVar9 == 0) {
      FUN_100c62ee0(0x14,0x8b,0x82,"s3_srvr.c",0x954);
LAB_100bc5a8c:
      lVar11 = 0;
      piVar12 = (int *)0x0;
      lVar9 = 0;
      lVar10 = 0;
      goto LAB_100bc579d;
    }
    iVar4 = FUN_100c51600(local_308,lVar9,lVar10);
    if (iVar4 < 1) {
      FUN_100c62ee0(0x14,0x8b,5,"s3_srvr.c",0x95b);
      FUN_100c26640(lVar9);
      goto LAB_100bc5a8c;
    }
    FUN_100c51d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3b0));
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x3b0) = 0;
    FUN_100c26640(lVar9);
    uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                      (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_308,iVar4);
    *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar5;
    _OPENSSL_cleanse(local_308,(long)iVar4);
    uVar7 = 1;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar9 + 1000) == 0) {
      piVar12 = *(int **)(lVar11 + 0x68);
      if (((piVar12 != (int *)0x0) && (*piVar12 == 6)) &&
         (lVar9 = *(long *)(piVar12 + 8), lVar9 != 0)) goto LAB_100bc5631;
      uVar14 = 0xa8;
      uVar16 = 0x8bf;
LAB_100bc5776:
      FUN_100c62ee0(0x14,0x8b,uVar14,"s3_srvr.c",uVar16);
      uVar14 = 0x28;
    }
    else {
      if ((lVar11 == 0) || (lVar9 = *(long *)(lVar11 + 0x30), lVar9 == 0)) {
        uVar14 = 0xad;
        uVar16 = 0x8b5;
        goto LAB_100bc5776;
      }
LAB_100bc5631:
      uVar13 = uVar7;
      pbVar3 = pbVar1;
      if ((int)*param_1 < 0x301) {
LAB_100bc5aa7:
        local_308 = pbVar3;
        if (0x2f < (long)uVar13) {
          iVar4 = FUN_100c62190(local_248,0x30);
          if (0 < iVar4) {
            uVar6 = FUN_100c4c190(uVar13 & 0xffffffff,local_308,local_308,lVar9,1);
            FUN_100c63270();
            bVar15 = *local_308;
            uVar18 = param_1[0x71];
            bVar17 = (byte)((uVar18 & 0xff ^ (uint)local_308[1]) - 1 >> 0x18) &
                     (byte)(((int)uVar18 >> 8 ^ (uint)bVar15) - 1 >> 0x18) &
                     ~(byte)((int)uVar18 >> 0x1f);
            if ((*(byte *)((long)param_1 + 0x1aa) & 0x80) != 0) {
              uVar18 = *param_1;
              bVar17 = bVar17 | (byte)((uVar18 & 0xff ^ (uint)local_308[1]) - 1 >> 0x18) &
                                (byte)(((int)uVar18 >> 8 ^ (uint)bVar15) - 1 >> 0x18) &
                                ~(byte)((int)uVar18 >> 0x1f);
            }
            bVar17 = (char)(bVar17 & (byte)((uVar6 ^ 0x30) - 1 >> 0x18) & ~(byte)(uVar6 >> 0x18)) >>
                     7;
            *local_308 = local_248[0] & ~bVar17 | bVar15 & bVar17;
            lVar9 = 1;
            do {
              local_308[lVar9] = local_248[lVar9] & ~bVar17 | local_308[lVar9] & bVar17;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x30);
            uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                              (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_308,0x30);
            *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar5;
            _OPENSSL_cleanse(local_308,0x30);
            uVar7 = 1;
            goto LAB_100bc57da;
          }
          goto LAB_100bc5b6e;
        }
        FUN_100c62ee0(0x14,0x8b,0xea,"s3_srvr.c",0x8de);
        uVar14 = 0x33;
      }
      else {
        uVar13 = (ulong)(uint)CONCAT11(*pbVar1,pbVar1[1]);
        local_308 = pbVar1 + 2;
        pbVar3 = local_308;
        if ((uVar7 == CONCAT11(*pbVar1,pbVar1[1]) + 2) ||
           (uVar13 = uVar7, pbVar3 = pbVar1, (*(byte *)((long)param_1 + 0x1a9) & 1) != 0))
        goto LAB_100bc5aa7;
        FUN_100c62ee0(0x14,0x8b,0xea,"s3_srvr.c",0x8cc);
        uVar14 = 0x32;
      }
    }
LAB_100bc5781:
    lVar10 = 0;
    piVar12 = (int *)0x0;
    lVar9 = 0;
LAB_100bc578a:
    FUN_100bd2dc0(param_1,2,uVar14);
    lVar11 = 0;
LAB_100bc579d:
    FUN_100c6d8c0(piVar12);
    FUN_100c36280(lVar10);
    if (lVar9 != 0) {
      FUN_100c3f180(lVar9);
    }
    FUN_100c27ab0(lVar11);
    param_1[0x12] = 5;
    uVar7 = 0xffffffff;
  }
LAB_100bc57cf:
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100bc57da:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

