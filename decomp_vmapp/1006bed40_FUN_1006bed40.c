
void FUN_1006bed40(long *param_1,char *param_2)

{
  ushort *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ushort uVar21;
  long lVar22;
  char *pcVar23;
  byte bVar24;
  byte bVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  uint local_6c4;
  undefined1 *local_6a0;
  long *local_690;
  byte *local_660;
  uint local_64c;
  byte local_640;
  char local_63f;
  short local_63e;
  char local_63c;
  char local_63b;
  short local_63a;
  undefined2 local_62a;
  undefined1 local_628 [4];
  undefined1 auStack_624 [4];
  byte abStack_620 [2];
  short local_61e;
  undefined4 uStack_61c;
  uint uStack_618;
  int local_612;
  short local_60e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar13 = *(long **)(param_2 + 0x38);
  bVar24 = *(byte *)(plVar13 + 1);
  bVar5 = bVar24 >> 4 & 1;
  uVar7 = *(ushort *)(param_2 + 8);
  uVar37 = (uint)uVar7;
  local_6c4 = (uint)uVar7;
  local_690 = plVar13;
  if ((bVar24 >> 4 & 1) == 0) {
    uVar30 = (uint)uVar7;
    if (0x5ea < uVar7) {
      uVar32 = (ulong)uVar30;
      iVar8 = FUN_1008e38f0(&DAT_10116d748);
      if (iVar8 != 0) {
        pcVar23 = "Error: frame_size %u > ETH_FRAME_LEN %u";
        uVar31 = 0x5ea;
LAB_1006bf328:
        FUN_1008e3970("","prl_net",0,pcVar23,uVar32,uVar31);
      }
LAB_1006bf32d:
      lVar22 = param_1[8];
      goto LAB_1006c08a5;
    }
    local_660 = *(byte **)(param_2 + 0xb0);
    bVar24 = *(byte *)(plVar13 + 1) >> 2;
    bVar15 = *(byte *)(plVar13 + 1) >> 3;
    bVar25 = bVar24 & 1;
    bVar24 = bVar24 & 1;
    uVar36 = 0;
    bVar39 = (bool)(bVar15 & 1);
    if (((bVar15 & 1) == 0) && (bVar25 == 0)) {
      puVar26 = (undefined1 *)0x0;
      local_6a0 = (undefined1 *)0x0;
      uVar31 = 0;
      local_64c = 0;
      bVar15 = 0;
      uVar16 = 0;
      uVar32 = 0;
      bVar39 = false;
      bVar20 = false;
    }
    else {
      if (bVar25 == 0) {
        bVar15 = 0;
      }
      else {
        bVar15 = local_660[1] + 2;
      }
      bVar25 = bVar15;
      if (((bVar39 != false) && (local_660[5] != 0)) &&
         (bVar25 = local_660[5] + 2, bVar25 <= bVar15)) {
        bVar25 = bVar15;
      }
      uVar32 = (ulong)bVar25;
      uVar31 = (uint)uVar7;
      uVar30 = uVar37 - bVar25;
      if (uVar37 < bVar25) {
        iVar8 = FUN_1008e38f0(&DAT_10116d750);
        if (iVar8 != 0) {
          pcVar23 = "Error: hl > frame_size %u > %u";
          goto LAB_1006bf328;
        }
        goto LAB_1006bf32d;
      }
      uVar36 = 0;
      if (bVar25 == 0) {
        uVar32 = 0;
        uVar30 = uVar31;
      }
      else {
        puVar26 = local_628;
        uVar9 = uVar32;
        plVar12 = plVar13;
        while( true ) {
          uVar36 = 0;
          do {
            uVar19 = uVar9;
            local_690 = plVar12;
            if (uVar19 == 0) goto LAB_1006bf220;
            uVar33 = (ulong)((uint)*(ushort *)((long)plVar12 + 10) - (int)uVar36);
            uVar29 = uVar19;
            if (uVar33 < uVar19) {
              uVar29 = uVar33;
            }
            uVar9 = uVar29;
            if (*param_2 != '\x01') {
              uVar9 = uVar29 & 0xffffffff;
            }
            _memcpy(puVar26,(void *)(*plVar12 + uVar36),uVar9);
            puVar26 = puVar26 + uVar29;
            uVar9 = uVar19 - uVar29;
            uVar37 = (int)uVar29 + (int)uVar36;
            uVar36 = (ulong)uVar37;
          } while (*(ushort *)((long)plVar12 + 10) != uVar37);
          if ((uVar33 < uVar19) &&
             (uVar36 = 0, local_690 = plVar13, (*(byte *)(plVar12 + 1) & 2) != 0)) break;
          plVar12 = plVar12 + 2;
        }
      }
LAB_1006bf220:
      local_6a0 = (undefined1 *)0x0;
      uVar16 = 0;
      uVar31 = 0;
      bVar15 = 0;
      uVar37 = (uint)uVar7;
      local_64c = 0;
      puVar26 = (undefined1 *)0x0;
      bVar20 = false;
    }
  }
  else {
    local_660 = *(byte **)(param_2 + 0xa8);
    if ((bVar24 & 8) != 0) {
      pbVar14 = *(byte **)(param_2 + 0x20);
      if (pbVar14 != (byte *)0x0) {
        lVar22 = *(long *)(param_2 + 0x18);
        goto LAB_1006bee7d;
      }
      param_2[4] = '\0';
      param_2[5] = '\0';
      param_2[1] = '\x0e';
      param_2[2] = '\0';
      lVar22 = *(long *)(param_2 + 0x18);
      sVar2 = *(short *)(lVar22 + 0xc);
      if (sVar2 == -0x227a) {
        uVar37 = 0;
        plVar11 = plVar13;
        plVar12 = plVar13;
        uVar31 = (uint)*(ushort *)((long)plVar13 + 10);
        if (*(ushort *)((long)plVar13 + 10) < 0xf) {
          while (uVar37 = uVar31, (bVar24 & 2) == 0) {
            plVar11 = plVar12 + 2;
            uVar31 = *(ushort *)((long)plVar12 + 0x1a) + uVar37;
            if (0xe < uVar31) goto LAB_1006c0166;
            bVar24 = *(byte *)(plVar12 + 3);
            plVar12 = plVar11;
          }
          param_2[0x20] = '\0';
          param_2[0x21] = '\0';
          param_2[0x22] = '\0';
          param_2[0x23] = '\0';
          param_2[0x24] = '\0';
          param_2[0x25] = '\0';
          param_2[0x26] = '\0';
          param_2[0x27] = '\0';
        }
        else {
LAB_1006c0166:
          lVar4 = *plVar11;
          if (*param_2 == '\x01') {
            pbVar14 = (byte *)(lVar4 + (ulong)(0xe - uVar37));
            *(byte **)(param_2 + 0x20) = pbVar14;
            if (pbVar14 == (byte *)0x0) goto LAB_1006c08a1;
          }
          else {
            pbVar14 = (byte *)(param_2 + 0x68);
            uVar32 = (ulong)(0xe - uVar37);
            *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar4 + 0x20 + uVar32);
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar4 + 0x18 + uVar32);
            *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar4 + 0x10 + uVar32);
            uVar3 = *(undefined8 *)(lVar4 + uVar32);
            *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar4 + 8 + uVar32);
            *(undefined8 *)pbVar14 = uVar3;
            *(byte **)(param_2 + 0x20) = pbVar14;
          }
          param_2[4] = '6';
          param_2[5] = '\0';
          bVar24 = pbVar14[6];
          if (bVar24 < 0x3d) {
            uVar37 = 0x36;
            do {
              if ((0x1008080000000001U >> ((ulong)bVar24 & 0x3f) & 1) == 0) break;
              uVar37 = uVar37 & 0xffff;
              plVar12 = plVar13;
              uVar31 = 0;
              for (uVar30 = (uint)*(ushort *)((long)plVar13 + 10); uVar30 <= uVar37;
                  uVar30 = *puVar1 + uVar30) {
                if ((*(byte *)(plVar12 + 1) & 2) != 0) goto LAB_1006c08a1;
                puVar1 = (ushort *)((long)plVar12 + 0x1a);
                plVar12 = plVar12 + 2;
                uVar31 = uVar30;
              }
              if (*param_2 == '\x01') {
                pbVar10 = (byte *)(*plVar12 + (ulong)(uVar37 - uVar31));
                if (pbVar10 == (byte *)0x0) goto LAB_1006c08a1;
              }
              else {
                local_62a = *(undefined2 *)(*plVar12 + (ulong)(uVar37 - uVar31));
                pbVar10 = (byte *)&local_62a;
              }
              uVar37 = uVar37 + 8 + ((uint)pbVar10[1] << (bVar24 != 0x33 | 2U));
              *(short *)(param_2 + 4) = (short)uVar37;
              bVar24 = *pbVar10;
            } while (bVar24 < 0x3d);
          }
          param_2[2] = bVar24;
LAB_1006bee7d:
          *local_660 = 0xe;
          sVar2 = *(short *)(lVar22 + 0xc);
          if (sVar2 == 8) {
            local_660[1] = 0x18;
            *(ushort *)(local_660 + 2) = (*pbVar14 & 0xf) * 4 + 0xd;
          }
          local_660[10] = 0;
          if (pbVar14 != (byte *)0x0) {
            bVar24 = param_2[2];
LAB_1006beeb7:
            if (bVar24 == 0x11) {
              uVar31 = (uint)*(ushort *)(param_2 + 4);
              uVar30 = 0;
              plVar12 = plVar13;
              plVar11 = plVar13;
              uVar37 = (uint)*(ushort *)((long)plVar13 + 10);
              if (*(ushort *)((long)plVar13 + 10) <= *(ushort *)(param_2 + 4)) {
                do {
                  uVar30 = uVar37;
                  if ((*(byte *)(plVar11 + 1) & 2) != 0) {
                    param_2[0x28] = '\0';
                    param_2[0x29] = '\0';
                    param_2[0x2a] = '\0';
                    param_2[0x2b] = '\0';
                    param_2[0x2c] = '\0';
                    param_2[0x2d] = '\0';
                    param_2[0x2e] = '\0';
                    param_2[0x2f] = '\0';
                    goto LAB_1006c0873;
                  }
                  plVar12 = plVar11 + 2;
                  uVar37 = *(ushort *)((long)plVar11 + 0x1a) + uVar30;
                  plVar11 = plVar12;
                } while (uVar37 <= uVar31);
              }
              if (*param_2 == '\x01') {
                lVar22 = *plVar12 + (ulong)(uVar31 - uVar30);
                *(long *)(param_2 + 0x28) = lVar22;
                if (lVar22 == 0) goto LAB_1006c0873;
              }
              else {
                *(undefined8 *)(param_2 + 0x90) =
                     *(undefined8 *)(*plVar12 + (ulong)(uVar31 - uVar30));
                *(char **)(param_2 + 0x28) = param_2 + 0x90;
              }
              uVar31 = uVar31 + 8;
            }
            else {
              if (bVar24 != 6) goto LAB_1006c0873;
              uVar16 = *(ushort *)(param_2 + 4);
              uVar31 = 0;
              plVar12 = plVar13;
              plVar11 = plVar13;
              uVar37 = (uint)*(ushort *)((long)plVar13 + 10);
              if (*(ushort *)((long)plVar13 + 10) <= uVar16) {
                do {
                  uVar31 = uVar37;
                  if ((*(byte *)(plVar11 + 1) & 2) != 0) {
                    param_2[0x28] = '\0';
                    param_2[0x29] = '\0';
                    param_2[0x2a] = '\0';
                    param_2[0x2b] = '\0';
                    param_2[0x2c] = '\0';
                    param_2[0x2d] = '\0';
                    param_2[0x2e] = '\0';
                    param_2[0x2f] = '\0';
                    goto LAB_1006c0873;
                  }
                  plVar12 = plVar11 + 2;
                  uVar37 = *(ushort *)((long)plVar11 + 0x1a) + uVar31;
                  plVar11 = plVar12;
                } while (uVar37 <= uVar16);
              }
              uVar32 = (ulong)(uVar16 - uVar31);
              lVar22 = *plVar12;
              if (*param_2 == '\x01') {
                pcVar23 = (char *)(lVar22 + uVar32);
                *(char **)(param_2 + 0x28) = pcVar23;
                if (pcVar23 == (char *)0x0) goto LAB_1006c0873;
              }
              else {
                pcVar23 = param_2 + 0x90;
                *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(lVar22 + 0x10 + uVar32);
                uVar3 = *(undefined8 *)(lVar22 + uVar32);
                *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar22 + 8 + uVar32);
                *(undefined8 *)pcVar23 = uVar3;
                *(char **)(param_2 + 0x28) = pcVar23;
              }
              uVar31 = ((byte)pcVar23[0xc] >> 2 & 0x3c) + (uint)uVar16;
            }
            *(short *)(param_2 + 6) = (short)uVar31;
            local_660[10] = (byte)uVar31;
            uVar30 = (uint)uVar7 - (uVar31 & 0xff);
            uVar37 = uVar30 >> 0x10;
            local_660[0xb] = (byte)(uVar30 >> 0x10);
            *(short *)(local_660 + 0xc) = (short)uVar30;
            goto LAB_1006bf39a;
          }
          param_2[4] = '\0';
          param_2[5] = '\0';
          param_2[1] = '\x0e';
          param_2[2] = '\0';
          if (sVar2 == -0x227a) {
            uVar31 = 0;
            plVar12 = plVar13;
            plVar11 = plVar13;
            uVar37 = (uint)*(ushort *)((long)plVar13 + 10);
            if (*(ushort *)((long)plVar13 + 10) < 0xf) {
              do {
                uVar31 = uVar37;
                if ((*(byte *)(plVar11 + 1) & 2) != 0) {
                  param_2[0x20] = '\0';
                  param_2[0x21] = '\0';
                  param_2[0x22] = '\0';
                  param_2[0x23] = '\0';
                  param_2[0x24] = '\0';
                  param_2[0x25] = '\0';
                  param_2[0x26] = '\0';
                  param_2[0x27] = '\0';
                  goto LAB_1006c0873;
                }
                plVar12 = plVar11 + 2;
                uVar37 = *(ushort *)((long)plVar11 + 0x1a) + uVar31;
                plVar11 = plVar12;
              } while (uVar37 < 0xf);
            }
            lVar22 = *plVar12;
            if (*param_2 == '\x01') {
              pcVar23 = (char *)(lVar22 + (ulong)(0xe - uVar31));
              *(char **)(param_2 + 0x20) = pcVar23;
              if (pcVar23 == (char *)0x0) goto LAB_1006c0873;
            }
            else {
              pcVar23 = param_2 + 0x68;
              uVar32 = (ulong)(0xe - uVar31);
              *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar22 + 0x20 + uVar32);
              *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar22 + 0x18 + uVar32);
              *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar22 + 0x10 + uVar32);
              uVar3 = *(undefined8 *)(lVar22 + uVar32);
              *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar22 + 8 + uVar32);
              *(undefined8 *)pcVar23 = uVar3;
              *(char **)(param_2 + 0x20) = pcVar23;
            }
            param_2[4] = '6';
            param_2[5] = '\0';
            bVar24 = pcVar23[6];
            if (bVar24 < 0x3d) {
              uVar37 = 0x36;
              do {
                if ((0x1008080000000001U >> ((ulong)bVar24 & 0x3f) & 1) == 0) break;
                uVar37 = uVar37 & 0xffff;
                plVar12 = plVar13;
                uVar31 = 0;
                for (uVar30 = (uint)*(ushort *)((long)plVar13 + 10); uVar30 <= uVar37;
                    uVar30 = *puVar1 + uVar30) {
                  if ((*(byte *)(plVar12 + 1) & 2) != 0) goto LAB_1006c0873;
                  puVar1 = (ushort *)((long)plVar12 + 0x1a);
                  plVar12 = plVar12 + 2;
                  uVar31 = uVar30;
                }
                if (*param_2 == '\x01') {
                  pbVar14 = (byte *)(*plVar12 + (ulong)(uVar37 - uVar31));
                  if (pbVar14 == (byte *)0x0) goto LAB_1006c0873;
                }
                else {
                  local_62a = *(undefined2 *)(*plVar12 + (ulong)(uVar37 - uVar31));
                  pbVar14 = (byte *)&local_62a;
                }
                uVar37 = uVar37 + 8 + ((uint)pbVar14[1] << (bVar24 != 0x33 | 2U));
                *(short *)(param_2 + 4) = (short)uVar37;
                bVar24 = *pbVar14;
              } while (bVar24 < 0x3d);
            }
LAB_1006c0859:
            param_2[2] = bVar24;
            goto LAB_1006beeb7;
          }
          if (sVar2 == 0x608) {
            uVar31 = 0;
            plVar12 = plVar13;
            plVar11 = plVar13;
            uVar37 = (uint)*(ushort *)((long)plVar13 + 10);
            if (*(ushort *)((long)plVar13 + 10) < 0xf) {
              do {
                uVar31 = uVar37;
                if ((*(byte *)(plVar11 + 1) & 2) != 0) {
                  param_2[0x20] = '\0';
                  param_2[0x21] = '\0';
                  param_2[0x22] = '\0';
                  param_2[0x23] = '\0';
                  param_2[0x24] = '\0';
                  param_2[0x25] = '\0';
                  param_2[0x26] = '\0';
                  param_2[0x27] = '\0';
                  goto LAB_1006c0873;
                }
                plVar12 = plVar11 + 2;
                uVar37 = *(ushort *)((long)plVar11 + 0x1a) + uVar31;
                plVar11 = plVar12;
              } while (uVar37 < 0xf);
            }
            if (*param_2 == '\x01') {
              lVar22 = *plVar12 + (ulong)(0xe - uVar31);
              *(long *)(param_2 + 0x20) = lVar22;
              if (lVar22 == 0) goto LAB_1006c0873;
            }
            else {
              *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*plVar12 + (ulong)(0xe - uVar31));
              *(char **)(param_2 + 0x20) = param_2 + 0x68;
            }
            bVar24 = 0;
            goto LAB_1006beeb7;
          }
          if (sVar2 == 8) {
            uVar31 = 0;
            plVar12 = plVar13;
            plVar11 = plVar13;
            uVar37 = (uint)*(ushort *)((long)plVar13 + 10);
            if (*(ushort *)((long)plVar13 + 10) < 0xf) {
              do {
                uVar31 = uVar37;
                if ((*(byte *)(plVar11 + 1) & 2) != 0) {
                  param_2[0x20] = '\0';
                  param_2[0x21] = '\0';
                  param_2[0x22] = '\0';
                  param_2[0x23] = '\0';
                  param_2[0x24] = '\0';
                  param_2[0x25] = '\0';
                  param_2[0x26] = '\0';
                  param_2[0x27] = '\0';
                  goto LAB_1006c0873;
                }
                plVar12 = plVar11 + 2;
                uVar37 = *(ushort *)((long)plVar11 + 0x1a) + uVar31;
                plVar11 = plVar12;
              } while (uVar37 < 0xf);
            }
            lVar22 = *plVar12;
            if (*param_2 == '\x01') {
              pbVar14 = (byte *)(lVar22 + (ulong)(0xe - uVar31));
              *(byte **)(param_2 + 0x20) = pbVar14;
              if (pbVar14 == (byte *)0x0) goto LAB_1006c0873;
            }
            else {
              pbVar14 = (byte *)(param_2 + 0x68);
              uVar32 = (ulong)(0xe - uVar31);
              *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar22 + 0x10 + uVar32);
              uVar3 = *(undefined8 *)(lVar22 + uVar32);
              *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar22 + 8 + uVar32);
              *(undefined8 *)pbVar14 = uVar3;
              *(byte **)(param_2 + 0x20) = pbVar14;
            }
            *(ushort *)(param_2 + 4) = (*pbVar14 & 0xf) * 4 + 0xe;
            bVar24 = pbVar14[9];
            goto LAB_1006c0859;
          }
LAB_1006c0873:
          iVar8 = FUN_1008e38f0(&DAT_10116d758);
          if (iVar8 != 0) {
            FUN_1008e3970("","prl_net",0,"virtio: failed to parse TSE-packet");
          }
        }
      }
      else if (sVar2 == 0x608) {
        uVar37 = 0;
        plVar11 = plVar13;
        plVar12 = plVar13;
        uVar31 = (uint)*(ushort *)((long)plVar13 + 10);
        if (0xe < *(ushort *)((long)plVar13 + 10)) {
LAB_1006c0128:
          if (*param_2 == '\x01') {
            pbVar14 = (byte *)(*plVar11 + (ulong)(0xe - uVar37));
            *(byte **)(param_2 + 0x20) = pbVar14;
            if (pbVar14 == (byte *)0x0) goto LAB_1006c08a1;
          }
          else {
            pbVar14 = (byte *)(param_2 + 0x68);
            *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*plVar11 + (ulong)(0xe - uVar37));
            *(byte **)(param_2 + 0x20) = pbVar14;
          }
          goto LAB_1006bee7d;
        }
        while (uVar37 = uVar31, (bVar24 & 2) == 0) {
          plVar11 = plVar12 + 2;
          uVar31 = *(ushort *)((long)plVar12 + 0x1a) + uVar37;
          if (0xe < uVar31) goto LAB_1006c0128;
          bVar24 = *(byte *)(plVar12 + 3);
          plVar12 = plVar11;
        }
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
      else if (sVar2 == 8) {
        uVar37 = 0;
        plVar11 = plVar13;
        plVar12 = plVar13;
        uVar31 = (uint)*(ushort *)((long)plVar13 + 10);
        if (0xe < *(ushort *)((long)plVar13 + 10)) {
LAB_1006c05ab:
          lVar4 = *plVar11;
          if (*param_2 == '\x01') {
            pbVar14 = (byte *)(lVar4 + (ulong)(0xe - uVar37));
            *(byte **)(param_2 + 0x20) = pbVar14;
            if (pbVar14 == (byte *)0x0) goto LAB_1006c08a1;
          }
          else {
            pbVar14 = (byte *)(param_2 + 0x68);
            uVar32 = (ulong)(0xe - uVar37);
            *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar4 + 0x10 + uVar32);
            uVar3 = *(undefined8 *)(lVar4 + uVar32);
            *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar4 + 8 + uVar32);
            *(undefined8 *)pbVar14 = uVar3;
            *(byte **)(param_2 + 0x20) = pbVar14;
          }
          *(ushort *)(param_2 + 4) = (*pbVar14 & 0xf) * 4 + 0xe;
          param_2[2] = pbVar14[9];
          goto LAB_1006bee7d;
        }
        while (uVar37 = uVar31, (bVar24 & 2) == 0) {
          plVar11 = plVar12 + 2;
          uVar31 = *(ushort *)((long)plVar12 + 0x1a) + uVar37;
          if (0xe < uVar31) goto LAB_1006c05ab;
          bVar24 = *(byte *)(plVar12 + 3);
          plVar12 = plVar11;
        }
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
LAB_1006c08a1:
      lVar22 = param_1[8];
LAB_1006c08a5:
      *(long *)(lVar22 + 0xf4) = *(long *)(lVar22 + 0xf4) + 1;
LAB_1006c08ac:
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
    uVar31 = (uint)local_660[10];
    uVar37 = (uint)local_660[0xb];
    uVar30 = (uint)*(ushort *)(local_660 + 0xc);
LAB_1006bf39a:
    uVar17 = (int)param_1[7] + 0xe;
    uVar31 = uVar31 & 0xff;
    uVar32 = (ulong)uVar31;
    local_6c4 = *(ushort *)(local_660 + 0xe) + uVar31;
    if ((uVar17 < (*(ushort *)(local_660 + 0xe) + uVar31 & 0xffff)) &&
       (local_6c4 = uVar17, uVar17 <= uVar31)) {
      iVar8 = FUN_1008e38f0(&DAT_10116d740);
      if (iVar8 != 0) {
        FUN_1008e3970("","prl_net",0,"Error: max_frame_size %u <= hdr_len %u",uVar17,uVar32);
      }
      lVar22 = param_1[8];
      goto LAB_1006c08a5;
    }
    uVar30 = uVar30 & 0xffff | (uVar37 & 0xff) << 0x10;
    puVar26 = local_628;
    uVar9 = uVar32;
    plVar12 = plVar13;
    uVar37 = uVar30 + uVar31;
    if ((local_6c4 & 0xffff) < uVar30 + uVar31) {
      uVar37 = local_6c4 & 0xffff;
    }
    while( true ) {
      uVar36 = 0;
      do {
        uVar19 = uVar9;
        local_690 = plVar12;
        if (uVar19 == 0) goto LAB_1006bf4df;
        uVar33 = (ulong)((uint)*(ushort *)((long)plVar12 + 10) - (int)uVar36);
        uVar29 = uVar19;
        if (uVar33 < uVar19) {
          uVar29 = uVar33;
        }
        uVar9 = uVar29;
        if (*param_2 != '\x01') {
          uVar9 = uVar29 & 0xffffffff;
        }
        _memcpy(puVar26,(void *)(*plVar12 + uVar36),uVar9);
        puVar26 = puVar26 + uVar29;
        uVar31 = (int)uVar29 + (int)uVar36;
        uVar36 = (ulong)uVar31;
        uVar9 = uVar19 - uVar29;
      } while (*(ushort *)((long)plVar12 + 10) != uVar31);
      if ((uVar33 < uVar19) && (uVar36 = 0, local_690 = plVar13, (*(byte *)(plVar12 + 1) & 2) != 0))
      break;
      plVar12 = plVar12 + 2;
    }
LAB_1006bf4df:
    uVar29 = (ulong)*local_660;
    uVar19 = (ulong)local_660[4];
    bVar24 = local_660[9];
    uVar9 = (ulong)bVar24;
    if ((bVar24 & 2) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(ushort *)(auStack_624 + uVar29) << 8 | *(ushort *)(auStack_624 + uVar29) >> 8;
    }
    local_6a0 = local_628 + uVar29;
    if ((bVar24 & 4) == 0) {
      uVar31 = (uint)*(ushort *)(auStack_624 + uVar19 + 2);
      local_64c = 0;
      bVar15 = 0;
    }
    else {
      bVar15 = *(byte *)((long)&uStack_61c + uVar19 + 1);
      uVar31 = *(uint *)(auStack_624 + uVar19);
      local_64c = uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 |
                  uVar31 << 0x18;
      uVar31 = (uint)*(ushort *)((long)&uStack_618 + uVar19);
      *(byte *)((long)&uStack_61c + uVar19 + 1) = bVar15 & 0xf6;
      if ((bVar24 & 8) != 0) {
        if ((bVar24 & 2) == 0) {
          uVar7 = FUN_1006c1310(local_6a0);
          uVar31 = (uint)uVar7;
          uVar9 = (ulong)local_660[9];
        }
        else {
          lVar22 = (ulong)abStack_620[uVar29 + 1] * 0x1000000 +
                   (ulong)*(uint *)((long)&uStack_618 + uVar29) +
                   (ulong)*(uint *)((long)&uStack_61c + uVar29);
          iVar8 = ((uint)lVar22 & 0xffff) + (int)((ulong)lVar22 >> 0x20);
          uVar31 = (iVar8 + (int)((ulong)lVar22 >> 0x10) & 0xffffU) +
                   ((uint)(ushort)((ulong)lVar22 >> 0x10) + iVar8 >> 0x10);
          uVar31 = (uVar31 * 0x10000 | uVar31 >> 0x10) + uVar31 >> 0x10;
        }
      }
    }
    puVar26 = local_628 + uVar19;
    bVar39 = true;
    if ((uVar9 & 4) == 0) {
      if ((*(byte *)(local_690 + 1) & 8) == 0) {
        bVar39 = false;
      }
      else {
        bVar39 = local_660[5] != 0;
      }
    }
    bVar24 = (byte)(uVar9 >> 1) & 1;
    bVar20 = bVar39;
  }
  plVar13 = local_690;
  if ((char)param_1[9] == '\0') goto LAB_1006bf8d0;
  uVar17 = (uint)uVar32;
  if (*(short *)(*(long *)(param_2 + 0x18) + 0xc) == 8) {
    uVar7 = *(ushort *)(param_2 + 8);
    uVar9 = (ulong)uVar7;
    if ((uVar7 < 0x5eb) && ((uint)uVar7 <= uVar17 + uVar30)) {
      if (*(long *)(param_2 + 0x20) == 0) {
        param_2[4] = '\0';
        param_2[5] = '\0';
        param_2[1] = '\x0e';
        param_2[2] = '\0';
        plVar13 = *(long **)(param_2 + 0x38);
        uVar38 = (uint)*(ushort *)((long)plVar13 + 10);
        if (*(ushort *)((long)plVar13 + 10) < 0xf) {
          do {
            uVar18 = uVar38;
            if ((*(byte *)(plVar13 + 1) & 2) != 0) goto LAB_1006c0809;
            puVar1 = (ushort *)((long)plVar13 + 0x1a);
            plVar13 = plVar13 + 2;
            uVar38 = *puVar1 + uVar18;
          } while (uVar38 < 0xf);
        }
        else {
          uVar18 = 0;
          if (plVar13 == (long *)0x0) {
LAB_1006c0809:
            param_2[0x20] = '\0';
            param_2[0x21] = '\0';
            param_2[0x22] = '\0';
            param_2[0x23] = '\0';
            param_2[0x24] = '\0';
            param_2[0x25] = '\0';
            param_2[0x26] = '\0';
            param_2[0x27] = '\0';
            goto LAB_1006bf751;
          }
        }
        lVar22 = *plVar13;
        if (*param_2 == '\x01') {
          pbVar14 = (byte *)(lVar22 + (ulong)(0xe - uVar18));
          *(byte **)(param_2 + 0x20) = pbVar14;
          if (pbVar14 == (byte *)0x0) goto LAB_1006bf751;
        }
        else {
          pbVar14 = (byte *)(param_2 + 0x68);
          uVar19 = (ulong)(0xe - uVar18);
          *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar22 + 0x10 + uVar19);
          uVar3 = *(undefined8 *)(lVar22 + uVar19);
          *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar22 + 8 + uVar19);
          *(undefined8 *)pbVar14 = uVar3;
          *(byte **)(param_2 + 0x20) = pbVar14;
        }
        *(ushort *)(param_2 + 4) = (*pbVar14 & 0xf) * 4 + 0xe;
        param_2[2] = pbVar14[9];
      }
      cVar6 = param_2[2];
      if (cVar6 == '\x11') {
        uVar21 = *(ushort *)(param_2 + 4);
        plVar13 = *(long **)(param_2 + 0x38);
        uVar38 = (uint)*(ushort *)((long)plVar13 + 10);
        if (uVar21 < *(ushort *)((long)plVar13 + 10)) {
          uVar18 = 0;
          if (plVar13 == (long *)0x0) {
LAB_1006c0005:
            param_2[0x28] = '\0';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            goto LAB_1006bf751;
          }
        }
        else {
          do {
            uVar18 = uVar38;
            if ((*(byte *)(plVar13 + 1) & 2) != 0) goto LAB_1006c0005;
            puVar1 = (ushort *)((long)plVar13 + 0x1a);
            plVar13 = plVar13 + 2;
            uVar38 = *puVar1 + uVar18;
          } while (uVar38 <= uVar21);
        }
        uVar18 = uVar21 - uVar18;
        if (*param_2 == '\x01') {
          lVar22 = *plVar13 + (ulong)uVar18;
          *(long *)(param_2 + 0x28) = lVar22;
          if (lVar22 == 0) goto LAB_1006bf751;
        }
        else {
          *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(*plVar13 + (ulong)uVar18);
          *(char **)(param_2 + 0x28) = param_2 + 0x90;
        }
        *(ushort *)(param_2 + 6) = uVar21 + 8;
      }
      else if (cVar6 == '\x06') {
        uVar21 = *(ushort *)(param_2 + 4);
        plVar13 = *(long **)(param_2 + 0x38);
        uVar38 = (uint)*(ushort *)((long)plVar13 + 10);
        if (uVar21 < *(ushort *)((long)plVar13 + 10)) {
          uVar18 = 0;
          if (plVar13 == (long *)0x0) {
LAB_1006c0368:
            param_2[0x28] = '\0';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            goto LAB_1006bf751;
          }
        }
        else {
          do {
            uVar18 = uVar38;
            if ((*(byte *)(plVar13 + 1) & 2) != 0) goto LAB_1006c0368;
            puVar1 = (ushort *)((long)plVar13 + 0x1a);
            plVar13 = plVar13 + 2;
            uVar38 = *puVar1 + uVar18;
          } while (uVar38 <= uVar21);
        }
        uVar18 = uVar21 - uVar18;
        lVar22 = *plVar13;
        if (*param_2 == '\x01') {
          pcVar23 = (char *)(lVar22 + (ulong)uVar18);
          *(char **)(param_2 + 0x28) = pcVar23;
          if (pcVar23 == (char *)0x0) goto LAB_1006bf751;
        }
        else {
          pcVar23 = param_2 + 0x90;
          uVar19 = (ulong)uVar18;
          *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(lVar22 + 0x10 + uVar19);
          uVar3 = *(undefined8 *)(lVar22 + uVar19);
          *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar22 + 8 + uVar19);
          *(undefined8 *)pcVar23 = uVar3;
          *(char **)(param_2 + 0x28) = pcVar23;
        }
        *(ushort *)(param_2 + 6) = ((byte)pcVar23[0xc] >> 2 & 0x3c) + uVar21;
      }
      if (((cVar6 == '\x11') && ((*(short **)(param_2 + 0x28))[1] == 0x4300)) &&
         (**(short **)(param_2 + 0x28) == 0x4400)) {
        uVar21 = *(ushort *)(param_2 + 4);
        if ((ulong)uVar21 + 0xf4 <= uVar9) {
          puVar27 = local_628 + uVar32;
          uVar32 = (ulong)(uVar7 - uVar17);
          uVar19 = uVar36;
          plVar13 = local_690;
          while (uVar29 = uVar32, plVar12 = plVar13, uVar29 != 0) {
            uVar34 = (ulong)((uint)*(ushort *)((long)plVar13 + 10) - (int)uVar19);
            uVar33 = uVar29;
            if (uVar34 < uVar29) {
              uVar33 = uVar34;
            }
            uVar32 = uVar33;
            if (*param_2 != '\x01') {
              uVar32 = uVar33 & 0xffffffff;
            }
            _memcpy(puVar27,(void *)(*plVar13 + uVar19),uVar32);
            puVar27 = puVar27 + uVar33;
            uVar38 = (int)uVar33 + (int)uVar19;
            uVar32 = uVar29 - uVar33;
            uVar19 = (ulong)uVar38;
            if (*(ushort *)((long)plVar13 + 10) == uVar38) {
              if ((uVar34 < uVar29) &&
                 (uVar19 = uVar36, plVar12 = local_690, (*(byte *)(plVar13 + 1) & 2) != 0)) break;
              plVar13 = plVar13 + 2;
              uVar19 = 0;
            }
          }
          local_690 = plVar12;
          uVar30 = uVar30 - (uVar7 - uVar17);
          cVar6 = FUN_1006be9f0(param_1,abStack_620 + uVar21,
                                (uint)*(ushort *)(param_2 + 8) - (uVar21 + 8));
          uVar32 = uVar9;
          uVar36 = uVar19;
          if (cVar6 != '\0') {
            local_640 = param_2[1];
            uVar9 = (ulong)local_640;
            *(undefined2 *)((long)&local_61e + uVar9) = 0;
            local_63f = local_640 + 10;
            local_63e = (local_640 - 1) + (**(byte **)(param_2 + 0x20) & 0xf) * 4;
            uVar21 = *(ushort *)(*(long *)(param_2 + 0x28) + 4) << 8 |
                     *(ushort *)(*(long *)(param_2 + 0x28) + 4) >> 8;
            uVar7 = *(ushort *)(param_2 + 4);
            local_63c = (char)uVar7;
            uVar17 = (uint)abStack_620[uVar9 + 1] + (uint)uVar21;
            lVar22 = (ulong)((uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 * 0x1000000)
                     + (ulong)*(uint *)((long)&uStack_618 + uVar9) +
                       (ulong)*(uint *)((long)&uStack_61c + uVar9);
            iVar8 = ((uint)lVar22 & 0xffff) + (int)((ulong)lVar22 >> 0x20);
            uVar17 = (iVar8 + (int)((ulong)lVar22 >> 0x10) & 0xffffU) +
                     ((uint)(ushort)((ulong)lVar22 >> 0x10) + iVar8 >> 0x10);
            *(short *)(auStack_624 + (ulong)uVar7 + 2) =
                 (short)((uVar17 * 0x10000 | uVar17 >> 0x10) + uVar17 >> 0x10);
            local_63b = (char)uVar7 + '\x06';
            local_63a = (uVar21 - 1) + uVar7;
            bVar39 = true;
            local_660 = &local_640;
            bVar5 = 0;
            bVar24 = 1;
          }
        }
      }
    }
LAB_1006bf751:
    if ((uint)uVar32 < 0xe) {
      uVar17 = 0xe - (uint)uVar32;
      puVar27 = local_628 + uVar32;
      uVar32 = uVar36;
      uVar9 = (ulong)uVar17;
      plVar13 = local_690;
      while (uVar19 = uVar9, uVar38 = (uint)uVar32, uVar19 != 0) {
        uVar33 = (ulong)(*(ushort *)((long)plVar13 + 10) - uVar38);
        uVar29 = uVar19;
        if (uVar33 < uVar19) {
          uVar29 = uVar33;
        }
        uVar9 = uVar29;
        if (*param_2 != '\x01') {
          uVar9 = uVar29 & 0xffffffff;
        }
        _memcpy(puVar27,(void *)(*plVar13 + uVar32),uVar9);
        puVar27 = puVar27 + uVar29;
        uVar38 = (int)uVar29 + uVar38;
        uVar32 = (ulong)uVar38;
        uVar9 = uVar19 - uVar29;
        if (*(ushort *)((long)plVar13 + 10) == uVar38) {
          if ((uVar33 < uVar19) && ((*(byte *)(plVar13 + 1) & 2) != 0)) {
            uVar38 = (uint)uVar36;
            plVar13 = local_690;
            break;
          }
          plVar13 = plVar13 + 2;
          uVar32 = 0;
        }
      }
      uVar30 = uVar30 - uVar17;
      uVar32 = 0xe;
      uVar36 = (ulong)uVar38;
      local_690 = plVar13;
    }
  }
  else {
    if (*(short *)(*(long *)(param_2 + 0x18) + 0xc) != 0x608) goto LAB_1006bf751;
    if (*(ushort *)(param_2 + 8) < 0x2a) goto LAB_1006bf8d0;
    if (uVar17 < 0x2a) {
      puVar27 = local_628 + uVar32;
      uVar32 = uVar36;
      uVar9 = (ulong)(0x2a - uVar17);
      while (uVar19 = uVar9, uVar38 = (uint)uVar32, uVar19 != 0) {
        uVar33 = (ulong)(*(ushort *)((long)plVar13 + 10) - uVar38);
        uVar29 = uVar19;
        if (uVar33 < uVar19) {
          uVar29 = uVar33;
        }
        uVar9 = uVar29;
        if (*param_2 != '\x01') {
          uVar9 = uVar29 & 0xffffffff;
        }
        _memcpy(puVar27,(void *)(*plVar13 + uVar32),uVar9);
        puVar27 = puVar27 + uVar29;
        uVar38 = (int)uVar29 + uVar38;
        uVar32 = (ulong)uVar38;
        uVar9 = uVar19 - uVar29;
        if (*(ushort *)((long)plVar13 + 10) == uVar38) {
          if ((uVar33 < uVar19) && ((*(byte *)(plVar13 + 1) & 2) != 0)) {
            uVar38 = (uint)uVar36;
            plVar13 = local_690;
            break;
          }
          plVar13 = plVar13 + 2;
          uVar32 = 0;
        }
      }
      uVar30 = uVar30 - (0x2a - uVar17);
      uVar32 = 0x2a;
      uVar36 = (ulong)uVar38;
      local_690 = plVar13;
    }
    if ((local_612 == *(int *)((long)param_1 + 0x49)) &&
       (local_60e == *(short *)((long)param_1 + 0x4d))) {
      local_612 = *(int *)((long)param_1 + 0x4f);
      local_60e = *(short *)((long)param_1 + 0x53);
    }
  }
  plVar13 = local_690;
  if ((stack0xfffffffffffff9de == *(int *)((long)param_1 + 0x49)) &&
     (local_61e == *(short *)((long)param_1 + 0x4d))) {
    stack0xfffffffffffff9de = *(int *)((long)param_1 + 0x4f);
    local_61e = *(short *)((long)param_1 + 0x53);
  }
LAB_1006bf8d0:
  lVar22 = param_1[8];
  plVar12 = (long *)(lVar22 + 0xcc);
  *plVar12 = *plVar12 + 1;
  plVar12 = (long *)(lVar22 + 0xbc);
  *plVar12 = *plVar12 + (ulong)*(ushort *)(param_2 + 8);
  local_690._0_4_ = local_6c4 & 0xffff;
  do {
    uVar38 = (uint)uVar32;
    uVar17 = uVar37 - uVar38;
    if (bVar5 != 0) {
      bVar25 = local_660[9];
      sVar2 = (short)uVar37;
      if ((bVar25 & 2) == 0) {
        *(ushort *)(local_6a0 + 4) =
             (sVar2 - (ushort)local_660[4]) * 0x100 | (ushort)(sVar2 - (ushort)local_660[4]) >> 8;
        uVar7 = uVar16;
      }
      else {
        *(ushort *)(local_6a0 + 2) =
             (sVar2 - (ushort)*local_660) * 0x100 | (ushort)(sVar2 - (ushort)*local_660) >> 8;
        uVar7 = uVar16 + 1;
        *(ushort *)(local_6a0 + 4) = uVar16 << 8 | uVar16 >> 8;
        *(undefined2 *)(local_6a0 + 10) = 0;
      }
      uVar16 = uVar7;
      if ((bVar25 & 4) == 0) {
        uVar7 = (sVar2 - (ushort)local_660[4]) * 0x100 | (ushort)(sVar2 - (ushort)local_660[4]) >> 8
        ;
        *(ushort *)(puVar26 + 4) = uVar7;
        if (bVar20 != false) {
          uVar18 = uVar7 + uVar31;
          *(short *)(puVar26 + 6) = (short)((uVar18 * 0x10000 | uVar18 >> 0x10) + uVar18 >> 0x10);
        }
      }
      else {
        *(uint *)(puVar26 + 4) =
             local_64c >> 0x18 | (local_64c & 0xff0000) >> 8 | (local_64c & 0xff00) << 8 |
             local_64c << 0x18;
        uVar18 = (ushort)((sVar2 - (ushort)local_660[4]) * 0x100 |
                         (ushort)(sVar2 - (ushort)local_660[4]) >> 8) + uVar31;
        *(short *)(puVar26 + 0x10) = (short)((uVar18 * 0x10000 | uVar18 >> 0x10) + uVar18 >> 0x10);
        local_64c = (uVar37 - local_660[10]) + local_64c;
        if (uVar30 == uVar17) {
          puVar26[0xd] = bVar15;
        }
      }
    }
    if (bVar24 != 0) {
      FUN_1006c08e0(param_2,local_628,uVar32,plVar13,uVar36,uVar37,local_660[1],*local_660,
                    *(undefined2 *)(local_660 + 2));
    }
    if ((bVar39 != false) && (local_660[5] != 0)) {
      FUN_1006c08e0(param_2,local_628,uVar32,plVar13,uVar36,uVar37,local_660[5],local_660[4],
                    *(undefined2 *)(local_660 + 6));
    }
    param_2[0xb8] = '\0';
    param_2[0xb9] = '\0';
    param_2[0xba] = '\0';
    param_2[0xbb] = '\0';
    if (uVar38 != 0) {
      *(undefined1 **)(param_2 + 0xc0) = local_628;
      *(ulong *)(param_2 + 200) = uVar32;
      param_2[0xb8] = '\x01';
      param_2[0xb9] = '\0';
      param_2[0xba] = '\0';
      param_2[0xbb] = '\0';
    }
    uVar9 = (ulong)(uVar38 != 0);
    uVar18 = uVar17;
    if (uVar37 != uVar38) {
      do {
        uVar7 = *(ushort *)((long)plVar13 + 10);
        uVar28 = (uint)uVar7 - (int)uVar36;
        if (uVar18 < uVar28) {
          uVar28 = uVar18;
        }
        iVar8 = (int)uVar9;
        *(ulong *)(param_2 + uVar9 * 0x10 + 0xc0) = uVar36 + *plVar13;
        *(ulong *)(param_2 + uVar9 * 0x10 + 200) = (ulong)uVar28;
        uVar35 = (int)uVar36 + uVar28;
        uVar36 = (ulong)uVar35;
        if (uVar7 == uVar35) {
          if ((*(byte *)(plVar13 + 1) & 2) != 0) {
            uVar36 = 0;
            plVar13 = (long *)0x0;
            break;
          }
          plVar13 = plVar13 + 2;
          uVar36 = 0;
        }
        if (uVar18 == uVar28) break;
        uVar9 = (ulong)(iVar8 + 1);
        uVar18 = uVar18 - uVar28;
      } while (plVar13 != (long *)0x0);
      uVar18 = iVar8 + 1;
      *(uint *)(param_2 + 0xb8) = uVar18;
      uVar9 = (ulong)uVar18;
    }
    iVar8 = (**(code **)(*param_1 + 0xd8))(param_1,param_2 + 0xc0,uVar9,uVar37);
    if ((uVar30 == uVar17) || (iVar8 < 0)) goto LAB_1006c08ac;
    uVar30 = uVar30 - uVar17;
    uVar37 = uVar38 + uVar30;
    if ((uint)local_690 < uVar38 + uVar30) {
      uVar37 = (uint)local_690;
    }
  } while( true );
}

