
void FUN_1002d9220(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (*(int *)(param_1 + 0x468) == 0) {
    if (*(int *)(param_1 + 0x454) != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x458) + 0x90);
      pbVar7 = (byte *)(param_1 + 0x4d8);
      uVar3 = uVar1 & 0x40000;
      uVar10 = 0;
      iVar6 = 0;
      bVar8 = false;
LAB_1002d9290:
      do {
        bVar5 = pbVar7[1];
        if (bVar8) {
          bVar2 = bVar8;
          bVar11 = true;
          if (bVar5 == 4) {
            bVar5 = 4;
            bVar8 = false;
            goto LAB_1002d92ac;
          }
        }
        else {
LAB_1002d92ac:
          bVar2 = bVar8;
          bVar11 = false;
          if (bVar5 < 5) {
            if (bVar5 == 2) {
              if ((uVar1 & 0x20000) == 0) {
                pbVar7[7] = pbVar7[7] & 0xdf;
              }
LAB_1002d9390:
              bVar11 = false;
            }
            else if (bVar5 == 4) {
              if (((DAT_1011c567c == 0) || (pbVar7[5] != 8)) || (pbVar7[6] != 6))
              goto LAB_1002d9390;
              bVar11 = pbVar7[7] == 0x62;
              bVar2 = true;
              if (!bVar11) {
                bVar2 = bVar8;
              }
            }
          }
          else {
            if (bVar5 == 5) {
              if (((uVar3 != 0) && ((pbVar7[3] & 3) == 2)) && (0x200 < *(ushort *)(pbVar7 + 4))) {
                if (0 < DAT_1011c568c) {
                  FUN_1008e3970("","USB",0,"Fix usb3 endpoint descriptor (addr:%02x sz:%d)",
                                pbVar7[2]);
                }
                pbVar7[4] = 0;
                pbVar7[5] = 2;
              }
              goto LAB_1002d9390;
            }
            if (bVar5 == 0x30) {
              bVar11 = SUB41(uVar3 >> 0x12,0);
            }
          }
        }
        bVar8 = bVar2;
        bVar5 = *pbVar7;
        if (bVar5 == 0) break;
        uVar9 = (uint)bVar5;
        if (bVar11 != false) {
          _memmove(pbVar7,pbVar7 + bVar5,(ulong)((uVar9 - uVar10) + *(int *)(param_1 + 0x454)));
          uVar4 = *(int *)(param_1 + 0x454) - uVar9;
          *(uint *)(param_1 + 0x454) = uVar4;
          iVar6 = iVar6 + uVar9;
          if (uVar4 <= uVar10) break;
          goto LAB_1002d9290;
        }
        uVar10 = uVar9 + uVar10;
        pbVar7 = pbVar7 + bVar5;
      } while (uVar10 < *(uint *)(param_1 + 0x454));
      if (iVar6 != 0) {
        *(short *)(param_1 + 0x4da) = *(short *)(param_1 + 0x4da) - (short)iVar6;
      }
    }
    if (*(uint *)(param_1 + 0x43c) < *(uint *)(param_1 + 0x454)) {
      *(uint *)(param_1 + 0x454) = *(uint *)(param_1 + 0x43c);
    }
  }
  return;
}

