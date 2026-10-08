
undefined8 FUN_100bcb5c0(int *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  size_t sVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 uVar19;
  undefined1 local_324 [4];
  ulong local_320;
  undefined1 local_318 [528];
  char local_108 [128];
  ushort local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar18;
  if (param_1[0x12] != 0x1180) {
LAB_100bcb872:
    uVar8 = FUN_100bd30a0(param_1,0x16);
    goto LAB_100bcc234;
  }
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
  puVar15 = puVar1 + 4;
  uVar16 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x18);
  if ((uVar16 & 1) == 0) {
    if ((uVar16 & 0xe) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) != 0) {
        lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xe0);
        if (lVar18 == 0) {
          FUN_100bd2dc0(param_1,2,0x28);
          uVar8 = 0xee;
          uVar17 = 0xa1f;
        }
        else {
          lVar7 = FUN_100c51320(lVar18);
          if (lVar7 != 0) {
            iVar3 = FUN_100c515f0(lVar7);
            if (iVar3 == 0) {
              uVar8 = 0xa29;
            }
            else {
              iVar3 = FUN_100c51600(puVar15,*(undefined8 *)(lVar18 + 0x20),lVar7);
              if (0 < iVar3) {
                uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                                  (param_1,*(long *)(param_1 + 0x4c) + 0x14,puVar15,iVar3);
                *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar4;
                ___bzero(puVar15,(long)iVar3);
                iVar3 = FUN_100c26610(*(undefined8 *)(lVar7 + 0x20));
                iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
                puVar1[4] = (char)((uint)iVar3 >> 8);
                puVar1[5] = (char)iVar3;
                FUN_100c26ff0(*(undefined8 *)(lVar7 + 0x20),puVar1 + 6);
                iVar3 = iVar3 + 2;
                FUN_100c51d00(lVar7);
                lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
                goto LAB_100bcb84a;
              }
              uVar8 = 0xa36;
            }
            FUN_100c62ee0(0x14,0x98,5,"s3_clnt.c",uVar8);
            FUN_100c51d00(lVar7);
            goto LAB_100bcbc28;
          }
          uVar8 = 5;
          uVar17 = 0xa25;
        }
        goto LAB_100bcbc23;
      }
      FUN_100bd2dc0(param_1,2,10);
      uVar8 = 0xf4;
      uVar17 = 0xa15;
      goto LAB_100bcc210;
    }
    if ((uVar16 & 0xe0) == 0) {
      if ((uVar16 & 0x200) != 0) {
        if ((*(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xc0) == 0) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x4c) + 0xa8) + 0xa8) == 0)) {
          uVar8 = 0x14a;
          uVar17 = 0xb17;
        }
        else {
          uVar8 = FUN_100c929a0();
          lVar7 = FUN_100c71540(uVar8,0);
          if (lVar7 == 0) {
            uVar8 = 0x41;
            uVar17 = 0xb1f;
          }
          else {
            iVar3 = FUN_100c72210(lVar7);
            if ((iVar3 < 1) || (iVar3 = FUN_100c62100(local_58,0x20), iVar3 < 1)) {
              FUN_100c71960(lVar7);
              uVar8 = 0x44;
              uVar17 = 0xb31;
            }
            else {
              if ((*(int *)(*(long *)(param_1 + 0x20) + 0x3c8) != 0) &&
                 ((*(long *)(**(long **)(param_1 + 0x40) + 8) != 0 &&
                  (iVar3 = FUN_100c725f0(lVar7), iVar3 < 1)))) {
                FUN_100c63270();
              }
              uVar17 = FUN_100c65890();
              uVar13 = FUN_100bf70a0(0x329);
              uVar13 = FUN_100c6bd60(uVar13);
              iVar3 = FUN_100c658e0(uVar17,uVar13);
              if ((((iVar3 < 1) ||
                   (iVar3 = FUN_100c65b10(uVar17,*(long *)(param_1 + 0x20) + 0xc4,0x20), iVar3 < 1))
                  || (iVar3 = FUN_100c65b10(uVar17,*(long *)(param_1 + 0x20) + 0xa4,0x20), iVar3 < 1
                     )) || (iVar3 = FUN_100c65bc0(uVar17,local_78,local_324), iVar3 < 1)) {
                FUN_100c66030(uVar17);
                uVar8 = 0x44;
                uVar17 = 0xb4f;
              }
              else {
                FUN_100c66030(uVar17);
                iVar3 = FUN_100c71a40(lVar7,0xffffffff,0x100,8,8,local_78);
                if (iVar3 < 0) {
                  uVar8 = 0x112;
                  uVar17 = 0xb57;
                }
                else {
                  puVar1[4] = 0x30;
                  local_320 = 0xff;
                  iVar3 = FUN_100c72290(lVar7,local_318,&local_320,local_58,0x20);
                  if (0 < iVar3) {
                    if (local_320 < 0x80) {
                      puVar15 = puVar1 + 6;
                      puVar1[5] = (undefined1)local_320;
                      iVar3 = (int)local_320 + 2;
                    }
                    else {
                      puVar1[5] = 0x81;
                      puVar15 = puVar1 + 7;
                      puVar1[6] = (undefined1)local_320;
                      iVar3 = (int)local_320 + 3;
                    }
                    _memcpy(puVar15,local_318,local_320);
                    iVar5 = FUN_100c71a40(lVar7,0xffffffff,0xffffffff,2,2,0);
                    if (0 < iVar5) {
                      **(ulong **)(param_1 + 0x20) = **(ulong **)(param_1 + 0x20) | 0x10;
                    }
                    FUN_100c71960(lVar7);
                    uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                                      (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_58,0x20);
                    *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar4;
                    FUN_100c6d8c0(uVar8);
                    goto LAB_100bcb84a;
                  }
                  uVar8 = 0x112;
                  uVar17 = 0xb63;
                }
              }
            }
          }
        }
        goto LAB_100bcc210;
      }
      if ((uVar16 & 0x400) != 0) {
        if (*(long *)(param_1 + 0xbc) == 0) {
          uVar8 = 0x44;
          uVar17 = 0xb89;
        }
        else {
          iVar3 = FUN_100c26610();
          iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
          puVar1[4] = (char)((uint)iVar3 >> 8);
          puVar1[5] = (char)iVar3;
          FUN_100c26ff0(*(undefined8 *)(param_1 + 0xbc),puVar1 + 6);
          if (*(long *)(*(long *)(param_1 + 0x4c) + 0x158) != 0) {
            FUN_100bf3910();
          }
          lVar10 = FUN_100c58250(*(undefined8 *)(param_1 + 0xb2));
          lVar7 = *(long *)(param_1 + 0x4c);
          *(long *)(lVar7 + 0x158) = lVar10;
          if (lVar10 == 0) {
            uVar8 = 0x41;
            uVar17 = 0xb91;
          }
          else {
            iVar5 = FUN_100bf1bd0(param_1,lVar7 + 0x14);
            *(int *)(*(long *)(param_1 + 0x4c) + 0x10) = iVar5;
            if (-1 < iVar5) {
              iVar3 = iVar3 + 2;
              goto LAB_100bcb84a;
            }
            uVar8 = 0x44;
            uVar17 = 0xb9a;
          }
        }
LAB_100bcc210:
        FUN_100c62ee0(0x14,0x98,uVar8,"s3_clnt.c",uVar17);
        piVar9 = (int *)0x0;
        goto LAB_100bcc218;
      }
      if ((uVar16 & 0x100) == 0) {
        FUN_100bd2dc0(param_1,2,0x28);
        uVar8 = 0x44;
        uVar17 = 0xbfb;
        goto LAB_100bcc210;
      }
      if (*(code **)(param_1 + 0x58) == (code *)0x0) {
        FUN_100c62ee0(0x14,0x98,0xe0,"s3_clnt.c",0xbb0);
        piVar9 = (int *)0x0;
        goto LAB_100bcc218;
      }
      local_108[0x70] = '\0';
      local_108[0x71] = '\0';
      local_108[0x72] = '\0';
      local_108[0x73] = '\0';
      local_108[0x74] = '\0';
      local_108[0x75] = '\0';
      local_108[0x76] = '\0';
      local_108[0x77] = '\0';
      local_108[0x78] = '\0';
      local_108[0x79] = '\0';
      local_108[0x7a] = '\0';
      local_108[0x7b] = '\0';
      local_108[0x7c] = '\0';
      local_108[0x7d] = '\0';
      local_108[0x7e] = '\0';
      local_108[0x7f] = '\0';
      local_108[0x60] = '\0';
      local_108[0x61] = '\0';
      local_108[0x62] = '\0';
      local_108[99] = '\0';
      local_108[100] = '\0';
      local_108[0x65] = '\0';
      local_108[0x66] = '\0';
      local_108[0x67] = '\0';
      local_108[0x68] = '\0';
      local_108[0x69] = '\0';
      local_108[0x6a] = '\0';
      local_108[0x6b] = '\0';
      local_108[0x6c] = '\0';
      local_108[0x6d] = '\0';
      local_108[0x6e] = '\0';
      local_108[0x6f] = '\0';
      local_108[0x50] = '\0';
      local_108[0x51] = '\0';
      local_108[0x52] = '\0';
      local_108[0x53] = '\0';
      local_108[0x54] = '\0';
      local_108[0x55] = '\0';
      local_108[0x56] = '\0';
      local_108[0x57] = '\0';
      local_108[0x58] = '\0';
      local_108[0x59] = '\0';
      local_108[0x5a] = '\0';
      local_108[0x5b] = '\0';
      local_108[0x5c] = '\0';
      local_108[0x5d] = '\0';
      local_108[0x5e] = '\0';
      local_108[0x5f] = '\0';
      local_108[0x40] = '\0';
      local_108[0x41] = '\0';
      local_108[0x42] = '\0';
      local_108[0x43] = '\0';
      local_108[0x44] = '\0';
      local_108[0x45] = '\0';
      local_108[0x46] = '\0';
      local_108[0x47] = '\0';
      local_108[0x48] = '\0';
      local_108[0x49] = '\0';
      local_108[0x4a] = '\0';
      local_108[0x4b] = '\0';
      local_108[0x4c] = '\0';
      local_108[0x4d] = '\0';
      local_108[0x4e] = '\0';
      local_108[0x4f] = '\0';
      local_108[0x30] = '\0';
      local_108[0x31] = '\0';
      local_108[0x32] = '\0';
      local_108[0x33] = '\0';
      local_108[0x34] = '\0';
      local_108[0x35] = '\0';
      local_108[0x36] = '\0';
      local_108[0x37] = '\0';
      local_108[0x38] = '\0';
      local_108[0x39] = '\0';
      local_108[0x3a] = '\0';
      local_108[0x3b] = '\0';
      local_108[0x3c] = '\0';
      local_108[0x3d] = '\0';
      local_108[0x3e] = '\0';
      local_108[0x3f] = '\0';
      local_108[0x20] = '\0';
      local_108[0x21] = '\0';
      local_108[0x22] = '\0';
      local_108[0x23] = '\0';
      local_108[0x24] = '\0';
      local_108[0x25] = '\0';
      local_108[0x26] = '\0';
      local_108[0x27] = '\0';
      local_108[0x28] = '\0';
      local_108[0x29] = '\0';
      local_108[0x2a] = '\0';
      local_108[0x2b] = '\0';
      local_108[0x2c] = '\0';
      local_108[0x2d] = '\0';
      local_108[0x2e] = '\0';
      local_108[0x2f] = '\0';
      local_108[0x10] = '\0';
      local_108[0x11] = '\0';
      local_108[0x12] = '\0';
      local_108[0x13] = '\0';
      local_108[0x14] = '\0';
      local_108[0x15] = '\0';
      local_108[0x16] = '\0';
      local_108[0x17] = '\0';
      local_108[0x18] = '\0';
      local_108[0x19] = '\0';
      local_108[0x1a] = '\0';
      local_108[0x1b] = '\0';
      local_108[0x1c] = '\0';
      local_108[0x1d] = '\0';
      local_108[0x1e] = '\0';
      local_108[0x1f] = '\0';
      local_108[0] = '\0';
      local_108[1] = '\0';
      local_108[2] = '\0';
      local_108[3] = '\0';
      local_108[4] = '\0';
      local_108[5] = '\0';
      local_108[6] = '\0';
      local_108[7] = '\0';
      local_108[8] = '\0';
      local_108[9] = '\0';
      local_108[10] = '\0';
      local_108[0xb] = '\0';
      local_108[0xc] = '\0';
      local_108[0xd] = '\0';
      local_108[0xe] = '\0';
      local_108[0xf] = '\0';
      local_88 = 0;
      uVar6 = (**(code **)(param_1 + 0x58))
                        (param_1,*(undefined8 *)(*(long *)(param_1 + 0x4c) + 0x90),local_108,0x81,
                         local_318,0x204);
      if (uVar6 < 0x101) {
        if (uVar6 == 0) {
          uVar8 = 0xdf;
          uVar17 = 0xbbf;
          goto LAB_100bcc55c;
        }
        local_88 = local_88 & 0xff;
        sVar14 = _strlen(local_108);
        if (0x80 < sVar14) {
          uVar8 = 0x44;
          uVar17 = 0xbc6;
          goto LAB_100bcc55c;
        }
        uVar16 = (ulong)uVar6;
        _memmove(local_318 + uVar16 + 4,local_318,uVar16);
        uVar19 = (undefined1)(uVar6 >> 8);
        local_318[0] = uVar19;
        local_318[1] = (char)uVar6;
        ___memset_chk(local_318 + 2,0,uVar16,0x202);
        local_318[uVar16 + 2] = uVar19;
        local_318[uVar16 + 3] = (char)uVar6;
        if (*(long *)(*(long *)(param_1 + 0x4c) + 0x90) != 0) {
          FUN_100bf3910();
        }
        lVar10 = FUN_100c58250(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x208));
        lVar7 = *(long *)(param_1 + 0x4c);
        *(long *)(lVar7 + 0x90) = lVar10;
        if ((*(long *)(*(long *)(param_1 + 0x5c) + 0x208) != 0) && (lVar10 == 0)) {
          uVar8 = 0x41;
          uVar17 = 0xbd9;
          goto LAB_100bcc55c;
        }
        if (*(long *)(lVar7 + 0x98) != 0) {
          FUN_100bf3910();
        }
        lVar10 = FUN_100c58250(local_108);
        lVar7 = *(long *)(param_1 + 0x4c);
        *(long *)(lVar7 + 0x98) = lVar10;
        if (lVar10 == 0) {
          uVar8 = 0x41;
          uVar17 = 0xbe2;
          goto LAB_100bcc55c;
        }
        uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                          (param_1,lVar7 + 0x14,local_318,uVar6 * 2 + 4);
        *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar4;
        puVar1[4] = (char)(sVar14 >> 8);
        puVar1[5] = (char)sVar14;
        _memcpy(puVar1 + 6,local_108,sVar14);
        iVar3 = (int)sVar14 + 2;
        bVar2 = false;
      }
      else {
        uVar8 = 0x44;
        uVar17 = 0xbbb;
LAB_100bcc55c:
        FUN_100c62ee0(0x14,0x98,uVar8,"s3_clnt.c",uVar17);
        bVar2 = true;
        iVar3 = 0;
      }
      _OPENSSL_cleanse(local_108,0x82);
      _OPENSSL_cleanse(local_318,0x204);
      if (bVar2) {
        FUN_100bd2dc0(param_1,2,0x28);
        piVar9 = (int *)0x0;
        goto LAB_100bcc218;
      }
LAB_100bcb84a:
      *puVar1 = 0x10;
      puVar1[1] = (char)((uint)iVar3 >> 0x10);
      puVar1[2] = (char)((uint)iVar3 >> 8);
      puVar1[3] = (char)iVar3;
      param_1[0x12] = 0x1181;
      param_1[0x18] = iVar3 + 4;
      param_1[0x19] = 0;
      goto LAB_100bcb872;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
    if (lVar7 == 0) {
      FUN_100bd2dc0(param_1,2,10);
      uVar8 = 0xf4;
      uVar17 = 0xa58;
      goto LAB_100bcc210;
    }
    lVar10 = *(long *)(lVar7 + 0xe8);
    piVar9 = (int *)0x0;
    if ((lVar10 == 0) &&
       (((piVar9 = (int *)FUN_100c929a0(*(undefined8 *)(lVar7 + 0x90)), piVar9 == (int *)0x0 ||
         (*piVar9 != 0x198)) || (lVar10 = *(long *)(piVar9 + 8), lVar10 == 0)))) {
      FUN_100c62ee0(0x14,0x98,0x44,"s3_clnt.c",0xa83);
      goto LAB_100bcc218;
    }
    lVar7 = FUN_100c3fad0(lVar10);
    lVar10 = FUN_100c3fb70(lVar10);
    if ((lVar7 == 0) || (lVar10 == 0)) {
      FUN_100c62ee0(0x14,0x98,0x44,"s3_clnt.c",0xa8f);
      goto LAB_100bcc218;
    }
    lVar11 = FUN_100c3f040();
    if (lVar11 == 0) {
      FUN_100c62ee0(0x14,0x98,0x41,"s3_clnt.c",0xa95);
      goto LAB_100bcc218;
    }
    iVar3 = FUN_100c3fae0(lVar11,lVar7);
    if (iVar3 == 0) {
      uVar8 = 0x10;
      uVar17 = 0xa9a;
LAB_100bcc28a:
      FUN_100c62ee0(0x14,0x98,uVar8,"s3_clnt.c",uVar17);
      FUN_100c27ab0(0);
    }
    else {
      iVar3 = FUN_100c3f4a0(lVar11);
      if (iVar3 == 0) {
        uVar8 = 0x2b;
        uVar17 = 0xab2;
        goto LAB_100bcc28a;
      }
      iVar3 = FUN_100c36e50(lVar7);
      if (iVar3 < 1) {
        uVar8 = 0x2b;
        uVar17 = 0xabe;
        goto LAB_100bcc28a;
      }
      iVar3 = FUN_100c53600(puVar15,(long)((int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >>
                                          3),lVar10,lVar11,0);
      if (iVar3 < 1) {
        uVar8 = 0x2b;
        uVar17 = 0xac4;
        goto LAB_100bcc28a;
      }
      uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                        (param_1,*(long *)(param_1 + 0x4c) + 0x14,puVar15,iVar3);
      *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar4;
      ___bzero(puVar15,(long)iVar3);
      uVar8 = FUN_100c3fb70(lVar11);
      iVar3 = FUN_100c45420(lVar7,uVar8,4,0,0,0);
      pvVar12 = (void *)FUN_100bf3540(iVar3,"s3_clnt.c",0xae0);
      lVar10 = FUN_100c27a20();
      if ((pvVar12 != (void *)0x0) && (lVar10 != 0)) {
        uVar8 = FUN_100c3fb70(lVar11);
        iVar3 = FUN_100c45420(lVar7,uVar8,4,pvVar12,(long)iVar3,lVar10);
        puVar1[4] = (char)iVar3;
        _memcpy(puVar1 + 5,pvVar12,(long)iVar3);
        iVar3 = iVar3 + 1;
        FUN_100c27ab0(lVar10);
        FUN_100bf3910(pvVar12);
        FUN_100c3f180(lVar11);
        FUN_100c6d8c0(piVar9);
        goto LAB_100bcb84a;
      }
      FUN_100c62ee0(0x14,0x98,0x41,"s3_clnt.c",0xae4);
      FUN_100c27ab0(lVar10);
      if (pvVar12 != (void *)0x0) {
        FUN_100bf3910(pvVar12);
      }
    }
    FUN_100c3f180(lVar11);
  }
  else {
    lVar18 = *(long *)(*(long *)(param_1 + 0x4c) + 0xa8);
    if (lVar18 == 0) {
      uVar8 = 0x44;
      uVar17 = 0x94e;
LAB_100bcbc23:
      FUN_100c62ee0(0x14,0x98,uVar8,"s3_clnt.c",uVar17);
    }
    else {
      lVar7 = *(long *)(lVar18 + 0xd8);
      if (lVar7 == 0) {
        piVar9 = (int *)FUN_100c929a0(*(undefined8 *)(lVar18 + 0x18));
        if (((piVar9 != (int *)0x0) && (*piVar9 == 6)) &&
           (lVar7 = *(long *)(piVar9 + 8), lVar7 != 0)) {
          FUN_100c6d8c0(piVar9);
          goto LAB_100bcb770;
        }
        FUN_100c62ee0(0x14,0x98,0x44,"s3_clnt.c",0x95c);
        FUN_100c6d8c0(piVar9);
      }
      else {
LAB_100bcb770:
        local_318[0] = (undefined1)((uint)param_1[0x71] >> 8);
        local_318[1] = (undefined1)param_1[0x71];
        iVar3 = FUN_100c62100(local_318 + 2,0x2e);
        if (0 < iVar3) {
          *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = 0x30;
          if (0x300 < *param_1) {
            puVar15 = puVar1 + 6;
          }
          iVar3 = FUN_100c4c170(0x30,local_318,puVar15,lVar7,1);
          if (0 < iVar3) {
            if (0x300 < *param_1) {
              puVar1[4] = (char)((uint)iVar3 >> 8);
              puVar1[5] = (char)iVar3;
              iVar3 = iVar3 + 2;
            }
            uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x18))
                              (param_1,*(long *)(param_1 + 0x4c) + 0x14,local_318,0x30);
            *(undefined4 *)(*(long *)(param_1 + 0x4c) + 0x10) = uVar4;
            _OPENSSL_cleanse(local_318,0x30);
            lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
            goto LAB_100bcb84a;
          }
          uVar8 = 0x77;
          uVar17 = 0x979;
          goto LAB_100bcbc23;
        }
      }
    }
LAB_100bcbc28:
    piVar9 = (int *)0x0;
    lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100bcc218:
    FUN_100c27ab0(0);
  }
  FUN_100c6d8c0(piVar9);
  param_1[0x12] = 5;
  uVar8 = 0xffffffff;
LAB_100bcc234:
  if (lVar18 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

