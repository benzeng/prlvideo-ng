
void FUN_1002cebc0(long param_1,long param_2,long *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar1 = *(ushort *)(*param_3 + 6);
  uVar9 = *param_4;
  *param_4 = 0;
  if (((uVar9 & 1) == 0) && (uVar8 = uVar9 & 0xffffffe0, uVar8 != 0)) {
    uVar5 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar5 = 0xb0000000;
    }
    if (uVar8 < uVar5) {
      local_48 = (uint *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_10008d2d0(&local_48,(ulong)uVar8,0x20);
      uVar8 = local_48[2];
      if ((uVar8 & 0xc0) == 0x80) {
        uVar4 = uVar1 & 0x7ff;
        uVar7 = 0;
        do {
          uVar2 = *param_5;
          uVar10 = uVar8 >> 0x10 & 0x7fff;
          if (uVar10 < uVar2) {
            if (0 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[EHC] Invalid qtd_offset, %u %u",uVar2,uVar10);
            }
            goto LAB_1002cee30;
          }
          uVar7 = uVar7 + (uVar10 - uVar2);
          if (*(uint *)(param_2 + 0x43c) < uVar7) {
            *param_5 = (uVar10 - uVar7) + *(uint *)(param_2 + 0x43c);
LAB_1002cee29:
            *param_4 = uVar9;
            goto LAB_1002cee30;
          }
          lVar6 = (long)*(int *)(param_1 + 0x14c8);
          if (lVar6 < 0x400) {
            *(uint *)(param_1 + 0x14cc + lVar6 * 4) = uVar9;
            *(int *)(param_1 + 0x14c8) = *(int *)(param_1 + 0x14c8) + 1;
          }
          uVar9 = *local_48;
          *param_5 = 0;
          if (((uVar9 & 1) != 0) || (uVar8 = uVar9 & 0xffffffe0, uVar8 == 0)) goto LAB_1002cee30;
          uVar5 = DAT_1011c5640;
          if (0xb0000000 < DAT_1011c5640) {
            uVar5 = 0xb0000000;
          }
          if (uVar5 <= uVar8) goto LAB_1002cee30;
          cVar3 = FUN_1002c78a0((int *)(param_1 + 0x14c8),uVar9);
          if (cVar3 != '\0') goto LAB_1002cee30;
          FUN_10008d3f0(&local_48);
          uStack_40 = 0;
          FUN_10008d2d0(&local_48,(ulong)uVar8,0x20);
          uVar8 = local_48[2];
          if (((uVar8 & 0xc0) != 0x80) ||
             (*(uint *)(param_2 + 0x450) != (uint)(byte)(&DAT_100b38460)[uVar8 >> 8 & 3]))
          goto LAB_1002cee30;
          if (uVar7 == *(uint *)(param_2 + 0x43c)) goto LAB_1002cee29;
        } while ((uVar10 != uVar2) && ((uVar10 - uVar2) % uVar4 == 0));
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[EHC] scan is aborted, %u %u %u",uVar4,uVar7,
                        *(uint *)(param_2 + 0x43c));
        }
      }
LAB_1002cee30:
      FUN_10008d3f0(&local_48);
    }
  }
  return;
}

