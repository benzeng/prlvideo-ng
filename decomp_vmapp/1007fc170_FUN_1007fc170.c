
ulong FUN_1007fc170(uint *param_1,uint param_2,void *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  code *pcVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  undefined1 *puVar24;
  code *local_118;
  uint local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar15;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xf0) == 0) {
    iVar7 = FUN_1007fe5e0(param_1);
    uVar21 = 0xffffffff;
    if (iVar7 == 0) goto LAB_1007fc242;
  }
  if (((param_2 < 0x18) && ((0xc00001U >> (param_2 & 0x1f) & 1) != 0)) &&
     ((param_2 == 0x17 || (param_5 == 0)))) {
    if (param_2 == 0x16) {
      lVar12 = *(long *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar12 + 0x19c);
      if (iVar7 != 0) {
        if ((int)param_4 < 1) {
          lVar13 = lVar12 + 0x198;
          uVar11 = 0;
        }
        else {
          iVar22 = param_4 + 1;
          uVar11 = 0;
          do {
            uVar21 = uVar11;
            if (iVar7 == 0) goto LAB_1007fc242;
            *(undefined1 *)((long)param_3 + uVar21) = *(undefined1 *)(lVar12 + 0x198 + uVar21);
            lVar19 = *(long *)(param_1 + 0x20);
            iVar7 = *(int *)(lVar19 + 0x19c) + -1;
            *(int *)(lVar19 + 0x19c) = iVar7;
            iVar22 = iVar22 + -1;
            uVar11 = uVar21 + 1;
          } while (1 < iVar22);
          if (iVar7 == 0) {
            uVar21 = uVar11 & 0xffffffff;
            goto LAB_1007fc242;
          }
          lVar13 = lVar12 + 0x199 + uVar21;
          lVar12 = lVar19;
        }
        lVar19 = 0;
        do {
          *(undefined1 *)(lVar12 + 0x198 + lVar19) = *(undefined1 *)(lVar13 + lVar19);
          lVar12 = *(long *)(param_1 + 0x20);
          lVar19 = lVar19 + 1;
        } while ((uint)lVar19 < *(uint *)(lVar12 + 0x19c));
        uVar21 = uVar11 & 0xffffffff;
        goto LAB_1007fc242;
      }
    }
    if ((param_1[0xb] == 0) && (uVar21 = FUN_10080ee80(param_1), (uVar21 & 0x3000) != 0)) {
      uVar11 = (**(code **)(param_1 + 0xc))(param_1);
      uVar21 = uVar11 & 0xffffffff;
      if ((int)uVar11 < 0) goto LAB_1007fc242;
      if ((int)uVar11 == 0) {
        uVar18 = 0xe5;
        uVar20 = 0x40e;
        goto LAB_1007fc237;
      }
    }
    uVar11 = (ulong)param_4;
    local_118 = (code *)0x0;
    local_cc = param_4;
LAB_1007fc3cb:
    param_1[10] = 1;
    lVar12 = *(long *)(param_1 + 0x20);
    puVar1 = (uint *)(lVar12 + 0x120);
    uVar21 = (ulong)*(uint *)(lVar12 + 0x124);
    uVar10 = (uint)uVar11;
    if ((*(uint *)(lVar12 + 0x124) == 0) || (lVar13 = lVar12, param_1[0x13] == 0xf1)) {
      lVar15 = *(long *)(param_1 + 0x4c);
      if (((*(ulong *)(param_1 + 0x6a) & 0x20) == 0) || (*(int *)(lVar12 + 0xec) != 0)) {
        lVar13 = (*(ulong *)(param_1 + 0x6a) & 0x20) * 0x200;
        uVar9 = 0;
LAB_1007fc478:
        if ((param_1[0x13] != 0xf1) || (uVar8 = param_1[0x1c], uVar8 < 5)) {
          uVar8 = FUN_1007fb520(param_1,5,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xf8),0);
          uVar21 = (ulong)uVar8;
          if ((int)uVar8 < 1) goto LAB_1007fd2f1;
          param_1[0x13] = 0xf1;
          pbVar5 = *(byte **)(param_1 + 0x1a);
          *(uint *)(lVar12 + 0x120) = (uint)*pbVar5;
          bVar2 = pbVar5[1];
          bVar3 = pbVar5[2];
          uVar21 = (ulong)(uint)CONCAT11(pbVar5[3],pbVar5[4]);
          *(uint *)(lVar12 + 0x124) = (uint)CONCAT11(pbVar5[3],pbVar5[4]);
          if ((param_1[0x70] != 0) || ((int)CONCAT11(bVar2,bVar3) == *param_1)) {
            if (bVar2 == 3) {
              if (uVar21 <= *(long *)(*(long *)(param_1 + 0x20) + 0xf8) - 5U) {
                uVar8 = param_1[0x1c];
                goto LAB_1007fc53d;
              }
              uVar18 = 0xc6;
              uVar20 = 0x17a;
LAB_1007fd057:
              FUN_100887ce0(0x14,0x8f,uVar18,"s3_pkt.c",uVar20);
              uVar18 = 0x16;
              goto LAB_1007fd062;
            }
            uVar18 = 0x10b;
            uVar20 = 0x174;
            goto LAB_1007fd2e6;
          }
          FUN_100887ce0(0x14,0x8f,0x10b,"s3_pkt.c",0x15c);
          uVar18 = 0x46;
          if (((bVar2 == (byte)(*param_1 >> 8)) && (*(long *)(param_1 + 0x3a) == 0)) &&
             (*(long *)(param_1 + 0x3c) == 0)) {
            uVar21 = 0xffffffff;
            if (*puVar1 != 0x15) {
              *param_1 = (uint)CONCAT11(bVar2,bVar3);
              goto LAB_1007fd062;
            }
            goto LAB_1007fd2f1;
          }
          goto LAB_1007fd062;
        }
LAB_1007fc53d:
        if (uVar8 - 5 < (uint)uVar21) {
          uVar8 = FUN_1007fb520(param_1,uVar21,uVar21,1);
          uVar21 = (ulong)uVar8;
          if ((int)uVar8 < 1) goto LAB_1007fd2f1;
          uVar21 = (ulong)*(uint *)(lVar12 + 0x124);
        }
        param_1[0x13] = 0xf0;
        lVar19 = *(long *)(param_1 + 0x1a);
        *(long *)(lVar12 + 0x138) = lVar19 + 5;
        if (lVar13 + 0x4540U < uVar21) {
          uVar18 = 0x96;
          uVar20 = 0x1a6;
          goto LAB_1007fd057;
        }
        *(long *)(lVar12 + 0x130) = lVar19 + 5;
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 200))(param_1);
        if (iVar7 == 0) {
          FUN_100887ce0(0x14,0x8f,0x81,"s3_pkt.c",0x1b6);
          uVar18 = 0x15;
          goto LAB_1007fd062;
        }
        if (((lVar15 != 0) && (*(long *)(param_1 + 0x34) != 0)) &&
           (lVar19 = FUN_100894720(*(undefined8 *)(param_1 + 0x36)), lVar19 != 0)) {
          uVar18 = FUN_100894720(*(undefined8 *)(param_1 + 0x36));
          uVar8 = FUN_1008946d0(uVar18);
          if (0x40 < uVar8) {
            FUN_10081d560("s3_pkt.c",0x1ca,"mac_size <= EVP_MAX_MD_SIZE");
          }
          uVar23 = (*(uint *)(lVar12 + 0x120) >> 8) + *(int *)(lVar12 + 0x124);
          if ((uVar8 <= uVar23) &&
             ((uVar21 = FUN_100894310(*(undefined8 *)(param_1 + 0x34)), uVar8 + 1 <= uVar23 ||
              ((uVar21 & 0xf0007) != 2)))) {
            uVar21 = FUN_100894310(*(undefined8 *)(param_1 + 0x34));
            if ((uVar21 & 0xf0007) == 2) {
              FUN_1007fede0(local_b8,puVar1,uVar8);
              *(int *)(lVar12 + 0x124) = *(int *)(lVar12 + 0x124) - uVar8;
              puVar24 = local_b8;
            }
            else {
              uVar23 = *(int *)(lVar12 + 0x124) - uVar8;
              *(uint *)(lVar12 + 0x124) = uVar23;
              puVar24 = (undefined1 *)((ulong)uVar23 + *(long *)(lVar12 + 0x130));
            }
            iVar22 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 8))(param_1,local_78,0);
            if (((puVar24 == (undefined1 *)0x0) || (iVar22 < 0)) ||
               (iVar22 = FUN_10081d820(local_78,puVar24,(ulong)uVar8), iVar22 != 0)) {
              iVar7 = -1;
            }
            if ((ulong)*(uint *)(lVar12 + 0x124) <= (ulong)uVar8 + lVar13 + 0x4400U)
            goto LAB_1007fc70b;
            goto LAB_1007fcf0b;
          }
          FUN_100887ce0(0x14,0x8f,0xa0,"s3_pkt.c",0x1dc);
          uVar18 = 0x32;
          goto LAB_1007fd062;
        }
LAB_1007fc70b:
        if (iVar7 < 0) {
LAB_1007fcf0b:
          uVar18 = 0x14;
          FUN_100887ce0(0x14,0x8f,0x119,"s3_pkt.c",0x206);
          goto LAB_1007fd062;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          if (lVar13 + 0x4400U < (ulong)*(uint *)(lVar12 + 0x124)) {
            uVar18 = 0x8c;
            uVar20 = 0x20e;
            goto LAB_1007fd057;
          }
          lVar19 = *(long *)(param_1 + 0x20);
          iVar7 = FUN_1008d7b00(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar19 + 0x140),0x4000,
                                *(undefined8 *)(lVar19 + 0x130),*(undefined4 *)(lVar19 + 0x124));
          if (iVar7 < 0) {
            FUN_100887ce0(0x14,0x8f,0x6b,"s3_pkt.c",0x213);
            uVar18 = 0x1e;
            goto LAB_1007fd062;
          }
          *(int *)(lVar19 + 0x124) = iVar7;
          *(undefined8 *)(lVar19 + 0x130) = *(undefined8 *)(lVar19 + 0x140);
        }
        uVar8 = *(uint *)(lVar12 + 0x124);
        if (lVar13 + 0x4000U < (ulong)uVar8) {
          uVar18 = 0x92;
          uVar20 = 0x21a;
          goto LAB_1007fd057;
        }
        *(undefined4 *)(lVar12 + 0x128) = 0;
        param_1[0x1c] = 0;
        if (uVar8 == 0) goto code_r0x0001007fc7a0;
        lVar13 = *(long *)(param_1 + 0x20);
        local_cc = uVar10;
        goto LAB_1007fc7db;
      }
      uVar18 = 0x44;
      uVar20 = 0x140;
LAB_1007fd2e6:
      FUN_100887ce0(0x14,0x8f,uVar18,"s3_pkt.c",uVar20);
      uVar21 = 0xffffffff;
      goto LAB_1007fd2f1;
    }
LAB_1007fc7db:
    if ((*(int *)(lVar13 + 0x1c8) != 0) && (*puVar1 != 0x16)) {
      uVar18 = 0x91;
      uVar20 = 0x42a;
      goto LAB_1007fd54b;
    }
    if ((param_1[0x11] & 2) != 0) {
      *(undefined4 *)(lVar12 + 0x124) = 0;
      param_1[10] = 1;
      uVar21 = 0;
LAB_1007fd2f1:
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1007fc242;
    }
    uVar9 = *puVar1;
    if (uVar9 == param_2) {
      uVar9 = FUN_10080ee80(param_1);
      if (((param_2 == 0x17) && ((uVar9 & 0x3000) != 0)) && (*(long *)(param_1 + 0x34) == 0)) {
        uVar18 = 100;
        uVar20 = 0x441;
        goto LAB_1007fd54b;
      }
      uVar21 = uVar11;
      if ((int)uVar10 < 1) goto LAB_1007fd2f1;
      if (*(uint *)(lVar12 + 0x124) < uVar10) {
        uVar21 = (ulong)*(uint *)(lVar12 + 0x124);
      }
      iVar7 = (int)uVar21;
      _memcpy(param_3,(void *)((ulong)*(uint *)(lVar12 + 0x128) + *(long *)(lVar12 + 0x130)),uVar21)
      ;
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (param_5 == 0) {
        iVar22 = *(int *)(lVar12 + 0x124);
        *(int *)(lVar12 + 0x124) = iVar22 - iVar7;
        *(int *)(lVar12 + 0x128) = *(int *)(lVar12 + 0x128) + iVar7;
        if (iVar22 == iVar7) {
          param_1[0x13] = 0xf0;
          *(undefined4 *)(lVar12 + 0x128) = 0;
          if (((param_1[0x6c] & 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 0x104) == 0)) {
            FUN_1007fea40(param_1);
          }
        }
      }
      goto LAB_1007fc242;
    }
    if (uVar9 == 0x15) {
      lVar19 = lVar13 + 400;
      puVar14 = (uint *)(lVar13 + 0x194);
      uVar10 = 2;
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1007fc881:
      uVar8 = *puVar14;
      uVar9 = *(uint *)(lVar12 + 0x124);
      uVar23 = uVar10 - uVar8;
      if (uVar9 < uVar10 - uVar8) {
        uVar23 = uVar9;
      }
      if (uVar23 != 0) {
        uVar23 = (uVar8 - 1) - uVar10;
        uVar8 = ~uVar9;
        if (~uVar9 < uVar23) {
          uVar8 = uVar23;
        }
        iVar7 = uVar8 + 1;
        do {
          uVar9 = *(uint *)(lVar12 + 0x128);
          *(uint *)(lVar12 + 0x128) = uVar9 + 1;
          uVar4 = *(undefined1 *)(*(long *)(lVar12 + 0x130) + (ulong)uVar9);
          uVar9 = *puVar14;
          *puVar14 = uVar9 + 1;
          *(undefined1 *)(lVar19 + (ulong)uVar9) = uVar4;
          *(int *)(lVar12 + 0x124) = *(int *)(lVar12 + 0x124) + -1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
        uVar8 = *puVar14;
        lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      if (uVar8 < uVar10) goto LAB_1007fc3cb;
    }
    else {
      lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (uVar9 == 0x18) {
        FUN_100804cc0(param_1);
        *(undefined4 *)(lVar12 + 0x124) = 0;
        param_1[10] = 3;
        uVar18 = FUN_10080e280(param_1);
        FUN_10087d610(uVar18,0xf);
        uVar18 = FUN_10080e280(param_1);
        goto LAB_1007fd225;
      }
      if (uVar9 == 0x16) {
        lVar19 = lVar13 + 0x198;
        puVar14 = (uint *)(lVar13 + 0x19c);
        uVar10 = 4;
        goto LAB_1007fc881;
      }
    }
    if (param_1[0xe] != 0) {
      iVar7 = FUN_10080ee80();
      puVar17 = *(ulong **)(param_1 + 0x20);
      if (((((iVar7 == 3) && (*(int *)((long)puVar17 + 0x4a4) == 0)) && (0x300 < (int)*param_1)) &&
          ((3 < *(uint *)((long)puVar17 + 0x19c) && ((byte)puVar17[0x33] == 1)))) &&
         ((*(long *)(param_1 + 0x4c) != 0 &&
          ((*(long *)(*(long *)(param_1 + 0x4c) + 0xe0) != 0 &&
           ((*(byte *)(*(long *)(param_1 + 0x5c) + 0x11a) & 4) == 0)))))) {
        *(undefined4 *)(lVar12 + 0x124) = 0;
        iVar22 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x60))(100);
        iVar7 = iVar22;
        if (*param_1 == 0x300) {
          iVar7 = 0x28;
        }
        if (iVar22 != 0x46) {
          iVar7 = iVar22;
        }
        if (-1 < iVar7) {
          lVar15 = *(long *)(param_1 + 0x20);
          *(undefined4 *)(lVar15 + 0x1d4) = 1;
          *(undefined1 *)(lVar15 + 0x1d8) = 1;
          *(char *)(*(long *)(param_1 + 0x20) + 0x1d9) = (char)iVar7;
          if (*(int *)(*(long *)(param_1 + 0x20) + 0x11c) == 0) {
            (**(code **)(*(long *)(param_1 + 2) + 0x78))();
          }
        }
        goto LAB_1007fc3cb;
      }
LAB_1007fcbf1:
      if (1 < *(uint *)((long)puVar17 + 0x194)) {
        bVar2 = (byte)puVar17[0x32];
        bVar3 = *(byte *)((long)puVar17 + 0x191);
        pbVar5 = (byte *)((long)puVar17 + 0x194);
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        if (*(code **)(param_1 + 0x26) != (code *)0x0) {
          (**(code **)(param_1 + 0x26))
                    (0,*param_1,0x15,puVar17 + 0x32,2,param_1,*(undefined8 *)(param_1 + 0x28));
        }
        uVar10 = (uint)bVar3;
        pcVar16 = *(code **)(param_1 + 0x54);
        if (*(code **)(param_1 + 0x54) == (code *)0x0) {
          pcVar16 = local_118;
          if (*(code **)(*(long *)(param_1 + 0x5c) + 0x108) != (code *)0x0) {
            pcVar16 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108);
          }
          local_118 = (code *)0x0;
          if (pcVar16 != (code *)0x0) goto LAB_1007fcc83;
        }
        else {
LAB_1007fcc83:
          local_118 = pcVar16;
          (*local_118)(param_1,0x4004,CONCAT11(bVar2,bVar3));
        }
        if (bVar2 == 2) {
          param_1[10] = 1;
          *(uint *)(*(long *)(param_1 + 0x20) + 0x1d0) = uVar10;
          FUN_100887ce0(0x14,0x94,bVar3 + 1000,"s3_pkt.c",0x514);
          uVar21 = 0;
          FUN_1008823b0(local_c8,0x10,"%d",bVar3);
          FUN_1008890a0(2,"SSL alert number ",local_c8);
          *(byte *)(param_1 + 0x11) = (byte)param_1[0x11] | 2;
          FUN_100814230(*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + 0x4c));
          lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_1007fc242;
        }
        if (bVar2 == 1) {
          *(uint *)(*(long *)(param_1 + 0x20) + 0x1cc) = uVar10;
          if (uVar10 == 100) {
            FUN_100887ce0(0x14,0x94,0x153,"s3_pkt.c",0x508);
            uVar18 = 0x28;
            goto LAB_1007fd555;
          }
          lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (bVar3 == 0) {
            *(byte *)(param_1 + 0x11) = (byte)param_1[0x11] | 2;
            uVar21 = 0;
            goto LAB_1007fc242;
          }
          goto LAB_1007fc3cb;
        }
        uVar18 = 0xf6;
        uVar20 = 0x51c;
LAB_1007fd488:
        FUN_100887ce0(0x14,0x94,uVar18,"s3_pkt.c",uVar20);
        uVar18 = 0x2f;
LAB_1007fd555:
        lVar15 = *(long *)(*(long *)(param_1 + 2) + 200);
LAB_1007fd070:
        iVar22 = (**(code **)(lVar15 + 0x60))(uVar18);
        iVar7 = 0x28;
        if (*param_1 != 0x300) {
          iVar7 = iVar22;
        }
        if (iVar22 != 0x46) {
          iVar7 = iVar22;
        }
        uVar21 = 0xffffffff;
        if (-1 < iVar7) {
          if (*(long *)(param_1 + 0x4c) != 0) {
            FUN_100814230(*(undefined8 *)(param_1 + 0x5c));
          }
          lVar15 = *(long *)(param_1 + 0x20);
          *(undefined4 *)(lVar15 + 0x1d4) = 1;
          *(undefined1 *)(lVar15 + 0x1d8) = 2;
          *(char *)(*(long *)(param_1 + 0x20) + 0x1d9) = (char)iVar7;
          if (*(int *)(*(long *)(param_1 + 0x20) + 0x11c) == 0) {
            (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
          }
        }
        goto LAB_1007fd2f1;
      }
      if ((param_1[0x11] & 1) != 0) {
        param_1[10] = 1;
        *(undefined4 *)(lVar12 + 0x124) = 0;
        uVar21 = 0;
        goto LAB_1007fc242;
      }
      uVar10 = *puVar1;
      if (uVar10 == 0x14) {
        if (((*(int *)(lVar12 + 0x124) != 1) || (*(int *)(lVar12 + 0x128) != 0)) ||
           (pcVar6 = *(char **)(lVar12 + 0x130), *pcVar6 != '\x01')) {
          uVar18 = 0x67;
          uVar20 = 0x532;
          goto LAB_1007fd488;
        }
        if (puVar17[0x75] != 0) {
          if ((*puVar17 & 0x80) == 0) {
            uVar18 = 0x85;
            uVar20 = 0x53f;
            goto LAB_1007fd54b;
          }
          *puVar17 = *puVar17 & 0xffffffffffffff7f;
          *(undefined4 *)(lVar12 + 0x124) = 0;
          if (*(code **)(param_1 + 0x26) != (code *)0x0) {
            (**(code **)(param_1 + 0x26))
                      (0,*param_1,0x14,pcVar6,1,param_1,*(undefined8 *)(param_1 + 0x28));
            puVar17 = *(ulong **)(param_1 + 0x20);
          }
          *(undefined4 *)(puVar17 + 0x39) = 1;
          iVar7 = FUN_1007fd700();
          uVar21 = 0xffffffff;
          uVar11 = (ulong)local_cc;
          lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (iVar7 == 0) goto LAB_1007fc242;
          goto LAB_1007fc3cb;
        }
        uVar18 = 0x85;
        uVar20 = 0x539;
      }
      else {
        if ((3 < *(uint *)((long)puVar17 + 0x19c)) && (param_1[0xb] == 0)) {
          if (((param_1[0x12] & 0xfff) == 3) && ((*puVar17 & 1) == 0)) {
            uVar10 = 0x2000;
            if (param_1[0xe] == 0) {
              uVar10 = 0x1000;
            }
            param_1[0x12] = uVar10;
            param_1[0xa9] = 1;
            param_1[0xf] = 1;
          }
          uVar10 = (**(code **)(param_1 + 0xc))();
          uVar21 = (ulong)uVar10;
          if ((int)uVar10 < 0) goto LAB_1007fc242;
          if (uVar10 != 0) {
            bVar2 = (byte)param_1[0x6c];
            goto joined_r0x0001007fcebe;
          }
          uVar18 = 0xe5;
          uVar20 = 0x568;
          goto LAB_1007fc237;
        }
        if (uVar10 - 0x15 < 2) {
          uVar18 = 0x44;
          uVar20 = 0x597;
        }
        else if (uVar10 == 0x17) {
          if ((((int)puVar17[0x3d] != 0) && ((int)puVar17[0x3c] != 0)) &&
             (((uVar10 = param_1[0x12], uVar10 - 0x1110 < 0x11 && ((uVar10 & 0x1000) != 0)) ||
              ((uVar10 - 0x2110 < 0x11 && ((uVar10 & 0x2000) != 0)))))) {
            *(undefined4 *)(puVar17 + 0x3d) = 2;
            uVar21 = 0xffffffff;
            goto LAB_1007fc242;
          }
          uVar18 = 0xf5;
          uVar20 = 0x5af;
        }
        else {
          if (*param_1 - 0x301 < 2) {
            *(undefined4 *)(lVar12 + 0x124) = 0;
            goto LAB_1007fc3cb;
          }
          uVar18 = 0xf5;
          uVar20 = 0x58c;
        }
      }
LAB_1007fd54b:
      FUN_100887ce0(0x14,0x94,uVar18,"s3_pkt.c",uVar20);
      uVar18 = 10;
      goto LAB_1007fd555;
    }
    puVar17 = *(ulong **)(param_1 + 0x20);
    if ((((*(uint *)((long)puVar17 + 0x19c) < 4) || ((byte)puVar17[0x33] != 0)) ||
        (*(long *)(param_1 + 0x4c) == 0)) || (*(long *)(*(long *)(param_1 + 0x4c) + 0xe0) == 0))
    goto LAB_1007fcbf1;
    pbVar5 = (byte *)((long)puVar17 + 0x19c);
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    if (((*(byte *)((long)puVar17 + 0x199) != 0) || (*(byte *)((long)puVar17 + 0x19a) != 0)) ||
       (*(byte *)((long)puVar17 + 0x19b) != 0)) {
      FUN_100887ce0(0x14,0x94,0x69,"s3_pkt.c",0x4a1);
      uVar18 = 0x32;
      goto LAB_1007fd555;
    }
    if (*(code **)(param_1 + 0x26) != (code *)0x0) {
      (**(code **)(param_1 + 0x26))
                (0,*param_1,0x16,puVar17 + 0x33,4,param_1,*(undefined8 *)(param_1 + 0x28));
    }
    iVar7 = FUN_10080ee80();
    if (((iVar7 != 3) || ((**(byte **)(param_1 + 0x20) & 1) != 0)) ||
       (*(int *)(*(byte **)(param_1 + 0x20) + 0x1dc) != 0)) goto LAB_1007fc3cb;
    FUN_1007f9740(param_1);
    iVar7 = FUN_1007f94f0();
    if (iVar7 == 0) goto LAB_1007fc3cb;
    uVar10 = (**(code **)(param_1 + 0xc))(param_1);
    uVar21 = (ulong)uVar10;
    if ((int)uVar10 < 0) goto LAB_1007fc242;
    if (uVar10 == 0) {
      FUN_100887ce0(0x14,0x94,0xe5,"s3_pkt.c",0x4b4);
      uVar21 = 0xffffffff;
      goto LAB_1007fc242;
    }
    bVar2 = (byte)param_1[0x6c];
    uVar11 = (ulong)local_cc;
joined_r0x0001007fcebe:
    if (((bVar2 & 4) != 0) || (*(int *)(*(long *)(param_1 + 0x20) + 0x104) != 0))
    goto LAB_1007fc3cb;
    param_1[10] = 3;
    uVar18 = FUN_10080e280(param_1);
    FUN_10087d610(uVar18,0xf);
LAB_1007fd225:
    FUN_10087d630(uVar18,9);
    uVar21 = 0xffffffff;
  }
  else {
    uVar18 = 0x44;
    uVar20 = 0x3eb;
LAB_1007fc237:
    FUN_100887ce0(0x14,0x94,uVar18,"s3_pkt.c",uVar20);
    uVar21 = 0xffffffff;
  }
LAB_1007fc242:
  if (lVar15 == local_38) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0001007fc7a0:
  uVar9 = uVar9 + 1;
  uVar21 = 0;
  if (uVar9 < 0x21) goto LAB_1007fc478;
  FUN_100887ce0(0x14,0x8f,0x12a,"s3_pkt.c",0x230);
  uVar18 = 10;
LAB_1007fd062:
  lVar15 = *(long *)(*(long *)(param_1 + 2) + 200);
  goto LAB_1007fd070;
}

