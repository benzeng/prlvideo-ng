
ulong FUN_100bc9040(uint *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *local_138;
  int *local_128;
  long local_120;
  long local_108;
  long local_100;
  uint local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [48];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar8;
  FUN_100c65850(local_e8);
  uVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x60))
                    (param_1,0x1140,0x1141,0xffffffff,*(undefined8 *)(param_1 + 0x6e),&local_f0);
  if (local_f0 == 0) goto LAB_100bca2ea;
  lVar9 = *(long *)(param_1 + 0x20);
  uVar13 = *(ulong *)(*(long *)(lVar9 + 0x3a8) + 0x18);
  if (*(int *)(lVar9 + 0x3a0) == 0xc) {
    pcVar3 = *(char **)(param_1 + 0x16);
    lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
    if (lVar8 == 0) {
      uVar11 = FUN_100be7b60();
      *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xa8) = uVar11;
    }
    else {
      if (*(long *)(lVar8 + 0xd8) != 0) {
        FUN_100c47630();
        lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
        *(undefined8 *)(lVar8 + 0xd8) = 0;
      }
      if (*(long *)(lVar8 + 0xe0) != 0) {
        FUN_100c51d00();
        lVar8 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
        *(undefined8 *)(lVar8 + 0xe0) = 0;
      }
      if (*(long *)(lVar8 + 0xe8) != 0) {
        FUN_100c3f180();
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe8) = 0;
      }
    }
    uVar4 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x20);
    local_ec = 0x32;
    if ((uVar13 & 0x100) != 0) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x56a;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if (uVar13 < 0x81) {
          lVar8 = uVar7 - 2;
          uVar7 = lVar8 - uVar13;
          if (lVar8 < (long)uVar13) {
            uVar11 = 0x13c;
            uVar14 = 0x57c;
          }
          else {
            lVar8 = FUN_100c582e0(pcVar3 + 2);
            *(long *)(*(long *)(param_1 + 0x4c) + 0x90) = lVar8;
            if (lVar8 == 0) {
              local_ec = 0x28;
              uVar11 = 0x41;
              uVar14 = 0x584;
            }
            else {
LAB_100bca21c:
              local_128 = (int *)0x0;
              if (uVar7 == 0) goto LAB_100bca7b5;
              uVar11 = 0x99;
              uVar14 = 0x797;
            }
          }
        }
        else {
          local_ec = 0x28;
          uVar11 = 0x92;
          uVar14 = 0x577;
        }
      }
LAB_100bca243:
      FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      goto LAB_100bca248;
    }
    if ((uVar13 & 0x400) != 0) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x590;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if ((long)(uVar7 - 2) < (long)uVar13) {
          uVar11 = 0x15e;
          uVar14 = 0x596;
        }
        else {
          lVar8 = FUN_100c26e20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),0);
          *(long *)(param_1 + 0xb4) = lVar8;
          if (lVar8 == 0) {
            uVar11 = 3;
            uVar14 = 0x59c;
LAB_100bc957e:
            FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
            local_128 = (int *)0x0;
            local_100 = 0;
            local_108 = 0;
            lVar8 = 0;
            goto LAB_100bc958d;
          }
          if ((long)(uVar7 - (uVar13 + 2)) < 2) {
            uVar11 = 0xa0;
            uVar14 = 0x5a2;
          }
          else {
            lVar8 = uVar13 + 4;
            uVar12 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
            if ((long)(uVar7 - lVar8) < (long)uVar12) {
              uVar11 = 0x15d;
              uVar14 = 0x5aa;
            }
            else {
              lVar9 = FUN_100c26e20(pcVar3 + lVar8,CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]),0
                                   );
              *(long *)(param_1 + 0xb6) = lVar9;
              if (lVar9 == 0) {
                uVar11 = 3;
                uVar14 = 0x5b0;
                goto LAB_100bc957e;
              }
              lVar8 = uVar12 + lVar8;
              if (lVar8 < (long)uVar7) {
                uVar13 = (ulong)(byte)pcVar3[lVar8];
                lVar8 = lVar8 + 1;
                if ((long)(uVar7 - lVar8) < (long)uVar13) {
                  uVar11 = 0x15f;
                  uVar14 = 0x5bf;
                }
                else {
                  lVar9 = FUN_100c26e20(pcVar3 + lVar8,uVar13,0);
                  *(long *)(param_1 + 0xb8) = lVar9;
                  if (lVar9 == 0) {
                    uVar11 = 3;
                    uVar14 = 0x5c5;
                    goto LAB_100bc957e;
                  }
                  lVar8 = uVar13 + lVar8;
                  if ((long)(uVar7 - lVar8) < 2) {
                    uVar11 = 0xa0;
                    uVar14 = 0x5cb;
                  }
                  else {
                    local_120 = lVar8 + 2;
                    uVar13 = (ulong)CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]);
                    if ((long)(uVar7 - local_120) < (long)uVar13) {
                      uVar11 = 0x15c;
                      uVar14 = 0x5d3;
                    }
                    else {
                      lVar8 = FUN_100c26e20(pcVar3 + local_120,uVar13,0);
                      *(long *)(param_1 + 0xba) = lVar8;
                      if (lVar8 == 0) {
                        uVar11 = 3;
                        uVar14 = 0x5d9;
                        goto LAB_100bc957e;
                      }
                      iVar5 = FUN_100bf1db0(param_1,&local_ec);
                      if (iVar5 != 0) {
                        local_120 = uVar13 + local_120;
                        local_138 = pcVar3 + local_120;
                        uVar7 = uVar7 - local_120;
                        if ((uVar4 & 1) == 0) {
                          if ((uVar4 & 2) == 0) goto LAB_100bca210;
                          uVar11 = *(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x48);
                        }
                        else {
                          uVar11 = *(undefined8 *)
                                    (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
                        }
                        local_128 = (int *)FUN_100c929a0(uVar11);
                        goto LAB_100bca1b5;
                      }
                      uVar11 = 0x173;
                      uVar14 = 0x5e0;
                    }
                  }
                }
              }
              else {
                uVar11 = 0xa0;
                uVar14 = 0x5b6;
              }
            }
          }
        }
      }
      goto LAB_100bca243;
    }
    if ((uVar13 & 1) != 0) {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) & 2) == 0) {
        local_ec = 10;
        uVar11 = 0xf4;
        uVar14 = 0x5fb;
        goto LAB_100bca243;
      }
      lVar9 = FUN_100c47360();
      if (lVar9 == 0) {
        uVar11 = 0x41;
        uVar14 = 0x5ff;
        goto LAB_100bc957e;
      }
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x605;
LAB_100bc99a9:
        FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
        goto LAB_100bca24d;
      }
      uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
      if ((long)(uVar7 - 2) < (long)uVar13) {
        uVar11 = 0x79;
        uVar14 = 0x60b;
        goto LAB_100bc99a9;
      }
      lVar8 = FUN_100c26e20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),*(undefined8 *)(lVar9 + 0x20));
      *(long *)(lVar9 + 0x20) = lVar8;
      if (lVar8 == 0) {
        uVar11 = 3;
        uVar14 = 0x611;
        goto LAB_100bc9920;
      }
      if ((long)(uVar7 - (uVar13 + 2)) < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x617;
        goto LAB_100bc99a9;
      }
      local_120 = uVar13 + 4;
      uVar13 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
      if ((long)(uVar7 - local_120) < (long)uVar13) {
        uVar11 = 0x78;
        uVar14 = 0x61f;
        goto LAB_100bc99a9;
      }
      lVar8 = FUN_100c26e20(pcVar3 + local_120,uVar13,*(undefined8 *)(lVar9 + 0x28));
      *(long *)(lVar9 + 0x28) = lVar8;
      if (lVar8 != 0) {
        if ((uVar4 & 1) == 0) {
          uVar11 = 0x44;
          uVar14 = 0x631;
          goto LAB_100bc9920;
        }
        local_128 = (int *)FUN_100c929a0(*(undefined8 *)
                                          (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18));
        iVar5 = FUN_100c6d130(local_128);
        if ((int)((~(*(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) << 6) & 0x200U) +
                 0x200) < iVar5) {
          local_120 = uVar13 + local_120;
          local_138 = pcVar3 + local_120;
          uVar7 = uVar7 - local_120;
          *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xd8) = lVar9;
          goto LAB_100bca1b5;
        }
        local_ec = 10;
        FUN_100c62ee0(0x14,0x8d,0xf4,"s3_clnt.c",0x637);
        local_100 = 0;
        local_108 = 0;
        lVar10 = 0;
        lVar8 = 0;
        goto LAB_100bca265;
      }
      uVar11 = 3;
      uVar14 = 0x625;
LAB_100bc9920:
      FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar8 = 0;
      FUN_100c6d8c0(0);
      lVar10 = 0;
      local_108 = 0;
      local_100 = 0;
      goto LAB_100bca296;
    }
    if ((uVar13 & 8) != 0) {
      local_100 = FUN_100c51af0();
      if (local_100 == 0) {
        uVar11 = 5;
        uVar14 = 0x644;
        goto LAB_100bc957e;
      }
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x64a;
      }
      else {
        uVar13 = (ulong)CONCAT11(*pcVar3,pcVar3[1]);
        if ((long)(uVar7 - 2) < (long)uVar13) {
          uVar11 = 0x6e;
          uVar14 = 0x650;
        }
        else {
          lVar8 = FUN_100c26e20(pcVar3 + 2,CONCAT11(*pcVar3,pcVar3[1]),0);
          *(long *)(local_100 + 8) = lVar8;
          if (lVar8 == 0) {
            uVar11 = 0x656;
LAB_100bc98eb:
            FUN_100c62ee0(0x14,0x8d,3,"s3_clnt.c",uVar11);
            local_128 = (int *)0x0;
            local_108 = 0;
            lVar8 = 0;
            goto LAB_100bc958d;
          }
          if (*(int *)(lVar8 + 8) == 0) {
            uVar11 = 0x18b;
            uVar14 = 0x65c;
          }
          else if ((long)(uVar7 - (uVar13 + 2)) < 2) {
            uVar11 = 0xa0;
            uVar14 = 0x662;
          }
          else {
            lVar8 = uVar13 + 4;
            uVar12 = (ulong)CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]);
            if ((long)(uVar7 - lVar8) < (long)uVar12) {
              uVar11 = 0x6c;
              uVar14 = 0x66a;
            }
            else {
              lVar9 = FUN_100c26e20(pcVar3 + lVar8,CONCAT11(pcVar3[uVar13 + 2],pcVar3[uVar13 + 3]),0
                                   );
              *(long *)(local_100 + 0x10) = lVar9;
              if (lVar9 == 0) {
                uVar11 = 0x670;
                goto LAB_100bc98eb;
              }
              if (*(int *)(lVar9 + 8) == 0) {
                uVar11 = 0x177;
                uVar14 = 0x676;
              }
              else {
                lVar8 = uVar12 + lVar8;
                if ((long)(uVar7 - lVar8) < 2) {
                  uVar11 = 0xa0;
                  uVar14 = 0x67b;
                }
                else {
                  local_120 = lVar8 + 2;
                  uVar13 = (ulong)CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]);
                  if ((long)uVar13 <= (long)(uVar7 - local_120)) {
                    lVar8 = FUN_100c26e20(pcVar3 + local_120,
                                          CONCAT11(pcVar3[lVar8],pcVar3[lVar8 + 1]),0);
                    *(long *)(local_100 + 0x20) = lVar8;
                    if (lVar8 == 0) {
                      uVar11 = 0x689;
                      goto LAB_100bc98eb;
                    }
                    if (*(int *)(lVar8 + 8) == 0) {
                      uVar11 = 0x189;
                      uVar14 = 0x690;
                      goto LAB_100bca0d4;
                    }
                    local_120 = uVar13 + local_120;
                    if ((uVar4 & 1) == 0) {
                      local_128 = (int *)0x0;
                      if ((uVar4 & 2) != 0) {
                        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x48)
                        ;
                        goto LAB_100bca170;
                      }
                    }
                    else {
                      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
LAB_100bca170:
                      local_128 = (int *)FUN_100c929a0(uVar11);
                    }
                    local_138 = pcVar3 + local_120;
                    uVar7 = uVar7 - local_120;
                    *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe0) = local_100;
                    goto LAB_100bca1b5;
                  }
                  uVar11 = 0x6d;
                  uVar14 = 0x683;
                }
              }
            }
          }
        }
      }
LAB_100bca0d4:
      FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar9 = 0;
      goto LAB_100bca256;
    }
    if ((uVar13 & 6) != 0) {
      local_ec = 0x2f;
      uVar11 = 0xeb;
      uVar14 = 0x6aa;
      goto LAB_100bca243;
    }
    if ((uVar13 & 0x80) == 0) {
      if (uVar13 != 0) {
        local_ec = 10;
        uVar11 = 0xf4;
        uVar14 = 0x71a;
        goto LAB_100bca243;
      }
LAB_100bca210:
      if ((uVar4 & 0x404) != 0) goto LAB_100bca21c;
      uVar11 = 0x44;
      uVar14 = 0x792;
      goto LAB_100bc957e;
    }
    local_108 = FUN_100c3f040();
    if (local_108 == 0) {
      uVar11 = 0x41;
      uVar14 = 0x6b5;
      goto LAB_100bc957e;
    }
    if ((long)uVar7 < 4) {
      uVar11 = 0xa0;
      uVar14 = 0x6c6;
LAB_100bc99fc:
      FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
      lVar9 = 0;
      local_100 = 0;
      goto LAB_100bca25f;
    }
    if ((*pcVar3 != '\x03') || (iVar5 = FUN_100bd7270(pcVar3[2]), iVar5 == 0)) {
      local_ec = 0x50;
      uVar11 = 0x13a;
      uVar14 = 0x6ce;
      goto LAB_100bc99fc;
    }
    lVar8 = FUN_100c3c2e0(iVar5);
    if (lVar8 == 0) {
      FUN_100c62ee0(0x14,0x8d,0x10,"s3_clnt.c",0x6d4);
      local_128 = (int *)0x0;
      local_100 = 0;
      lVar8 = 0;
LAB_100bc958d:
      FUN_100c6d8c0(local_128);
      lVar10 = 0;
      goto LAB_100bca29b;
    }
    iVar5 = FUN_100c3fae0(local_108,lVar8);
    if (iVar5 == 0) {
      FUN_100c62ee0(0x14,0x8d,0x10,"s3_clnt.c",0x6d8);
      local_128 = (int *)0x0;
      local_100 = 0;
      lVar8 = 0;
      goto LAB_100bc958d;
    }
    FUN_100c36170(lVar8);
    uVar11 = FUN_100c3fad0(local_108);
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) & 2) != 0) &&
       (iVar5 = FUN_100c36e50(uVar11), 0xa3 < iVar5)) {
      local_ec = 0x3c;
      uVar11 = 0x136;
      uVar14 = 0x6e3;
      goto LAB_100bc99fc;
    }
    lVar8 = FUN_100c368e0(uVar11);
    if ((lVar8 == 0) || (lVar10 = FUN_100c27a20(), lVar10 == 0)) {
      FUN_100c62ee0(0x14,0x8d,0x41,"s3_clnt.c",0x6ec);
      local_128 = (int *)0x0;
      local_100 = 0;
      goto LAB_100bc958d;
    }
    uVar13 = (ulong)(byte)pcVar3[3];
    if (((long)(uVar7 - 4) < (long)uVar13) ||
       (iVar5 = FUN_100c454a0(uVar11,lVar8,pcVar3 + 4,uVar13,lVar10), iVar5 == 0)) {
      FUN_100c62ee0(0x14,0x8d,0x132,"s3_clnt.c",0x6f6);
      local_128 = (int *)0x0;
      lVar9 = 0;
      local_100 = 0;
      goto LAB_100bca265;
    }
    local_120 = uVar13 + 4;
    if ((uVar4 & 1) == 0) {
      local_128 = (int *)0x0;
      if ((uVar4 & 0x40) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x90);
        goto LAB_100bca0f6;
      }
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0x18);
LAB_100bca0f6:
      local_128 = (int *)FUN_100c929a0(uVar11);
    }
    uVar7 = uVar7 - local_120;
    local_138 = pcVar3 + uVar13 + 4;
    FUN_100c3fa90(local_108,lVar8);
    *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe8) = local_108;
    FUN_100c27ab0(lVar10);
    FUN_100c36280(lVar8);
LAB_100bca1b5:
    if (local_128 == (int *)0x0) goto LAB_100bca210;
    if ((0x302 < (int)*param_1) && ((*param_1 & 0xffffff00) == 0x300)) {
      if ((long)uVar7 < 2) {
        uVar11 = 0xa0;
        uVar14 = 0x726;
      }
      else {
        uVar6 = FUN_100bda390(local_128);
        if (uVar6 == 0xffffffff) {
          FUN_100c62ee0(0x14,0x8d,0x44,"s3_clnt.c",0x72d);
          local_100 = 0;
          local_108 = 0;
          lVar8 = 0;
          goto LAB_100bc958d;
        }
        if (uVar6 != (byte)local_138[1]) {
          FUN_100c62ee0(0x14,0x8d,0x172,"s3_clnt.c",0x733);
          local_ec = 0x32;
          goto LAB_100bca5bf;
        }
        lVar8 = FUN_100bda3d0(*local_138);
        if (lVar8 != 0) {
          local_138 = local_138 + 2;
          uVar7 = uVar7 - 2;
          goto LAB_100bca332;
        }
        uVar11 = 0x170;
        uVar14 = 0x739;
      }
LAB_100bca5ba:
      FUN_100c62ee0(0x14,0x8d,uVar11,"s3_clnt.c",uVar14);
LAB_100bca5bf:
      lVar9 = 0;
      local_100 = 0;
      local_108 = 0;
      lVar10 = 0;
      lVar8 = 0;
      goto LAB_100bca265;
    }
    lVar8 = FUN_100c6ca00();
LAB_100bca332:
    if ((long)uVar7 < 2) {
      uVar11 = 0xa0;
      uVar14 = 0x745;
      goto LAB_100bca5ba;
    }
    cVar1 = *local_138;
    cVar2 = local_138[1];
    uVar13 = (ulong)CONCAT11(cVar1,cVar2);
    iVar5 = FUN_100c6d160(local_128);
    if (((uVar13 != uVar7 - 2) || (uVar13 == 0)) || ((long)iVar5 < (long)uVar13)) {
      uVar11 = 0x108;
      uVar14 = 0x751;
      goto LAB_100bca5ba;
    }
    if ((*local_128 == 6) && (((int)*param_1 < 0x303 || ((*param_1 & 0xffffff00) != 0x300)))) {
      FUN_100c6fcb0(local_e8,8);
      iVar5 = FUN_100c65920(local_e8,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xe8),0);
      if ((((0 < iVar5) &&
           (iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar5)) &&
          (iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar5)) &&
         ((iVar5 = FUN_100c65b10(local_e8,pcVar3,local_120), 0 < iVar5 &&
          (iVar5 = FUN_100c65bc0(local_e8,local_b8,&local_f4), uVar6 = local_f4, 0 < iVar5)))) {
        uVar7 = (ulong)local_f4;
        FUN_100c6fcb0(local_e8,8);
        iVar5 = FUN_100c65920(local_e8,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xf0),0);
        if ((((0 < iVar5) &&
             ((iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar5 &&
              (iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar5))))
            && (iVar5 = FUN_100c65b10(local_e8,pcVar3,local_120), 0 < iVar5)) &&
           (iVar5 = FUN_100c65bc0(local_e8,local_b8 + uVar7,&local_f4), 0 < iVar5)) {
          iVar5 = FUN_100c48040(0x72,local_b8,uVar6 + local_f4,local_138 + 2,CONCAT11(cVar1,cVar2),
                                *(undefined8 *)(local_128 + 8));
          if (iVar5 < 0) {
            local_ec = 0x33;
            uVar11 = 0x76;
            uVar14 = 0x772;
          }
          else {
            if (iVar5 != 0) goto LAB_100bca7b5;
            local_ec = 0x33;
            uVar11 = 0x7b;
            uVar14 = 0x778;
          }
          goto LAB_100bca5ba;
        }
      }
      FUN_100c62ee0(0x14,0x8d,0x44,"s3_clnt.c",0x768);
      local_ec = 0x50;
      goto LAB_100bca5bf;
    }
    iVar5 = FUN_100c65920(local_e8,lVar8,0);
    if ((iVar5 < 1) ||
       (((iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xc4,0x20), iVar5 < 1 ||
         (iVar5 = FUN_100c65b10(local_e8,*(long *)(param_1 + 0x20) + 0xa4,0x20), iVar5 < 1)) ||
        (iVar5 = FUN_100c65b10(local_e8,pcVar3,local_120), iVar5 < 1)))) {
      local_ec = 0x50;
      uVar11 = 6;
      uVar14 = 0x785;
      goto LAB_100bca5ba;
    }
    iVar5 = FUN_100c6cf30(local_e8,local_138 + 2,CONCAT11(cVar1,cVar2),local_128);
    if (iVar5 < 1) {
      local_ec = 0x33;
      uVar11 = 0x7b;
      uVar14 = 0x78b;
      goto LAB_100bca5ba;
    }
LAB_100bca7b5:
    FUN_100c6d8c0(local_128);
    FUN_100c65c50(local_e8);
    uVar7 = 1;
  }
  else {
    if ((uVar13 & 0x88) == 0) {
      if ((uVar13 & 0x100) != 0) {
        uVar11 = FUN_100be7b60();
        *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xa8) = uVar11;
        lVar9 = *(long *)(param_1 + 0x5c);
        if (*(long *)(lVar9 + 0x208) != 0) {
          FUN_100bf3910();
          lVar9 = *(long *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar9 + 0x208) = 0;
        lVar9 = *(long *)(param_1 + 0x20);
      }
      *(undefined4 *)(lVar9 + 0x3c4) = 1;
      uVar7 = 1;
      goto LAB_100bca2ea;
    }
    FUN_100c62ee0(0x14,0x8d,0xf4,"s3_clnt.c",0x532);
    local_ec = 10;
LAB_100bca248:
    lVar9 = 0;
LAB_100bca24d:
    local_100 = 0;
LAB_100bca256:
    local_108 = 0;
LAB_100bca25f:
    local_128 = (int *)0x0;
    lVar10 = 0;
    lVar8 = 0;
LAB_100bca265:
    FUN_100bd2dc0(param_1,2,local_ec);
    FUN_100c6d8c0(local_128);
    if (lVar9 != 0) {
LAB_100bca296:
      FUN_100c47630(lVar9);
    }
LAB_100bca29b:
    if (local_100 != 0) {
      FUN_100c51d00(local_100);
    }
    FUN_100c27ab0(lVar10);
    FUN_100c36280(lVar8);
    if (local_108 != 0) {
      FUN_100c3f180(local_108);
    }
    FUN_100c65c50(local_e8);
    param_1[0x12] = 5;
    uVar7 = 0xffffffff;
  }
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100bca2ea:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

