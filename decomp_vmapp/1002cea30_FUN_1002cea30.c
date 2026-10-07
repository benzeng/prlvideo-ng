
void FUN_1002cea30(long param_1,long *param_2,uint param_3,uint *param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar3 = *param_2;
  uVar6 = *(ushort *)(lVar3 + 0x1a) & 0x7fff;
  uVar4 = *(ushort *)(lVar3 + 6) & 0x7ff;
  uVar7 = *(uint *)(lVar3 + 0x10);
  *param_4 = 0;
  iVar8 = 0x401;
  while( true ) {
    if ((uVar7 & 1) != 0) {
      return;
    }
    uVar5 = uVar7 & 0xffffffe0;
    if (uVar5 == 0) {
      return;
    }
    uVar2 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar2 = 0xb0000000;
    }
    if (uVar2 <= uVar5) {
      return;
    }
    local_48 = (uint *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_10008d2d0(&local_48,(ulong)uVar5,0x20);
    if ((local_48[2] & 0x3c0) != 0x180) break;
    if (param_3 <= uVar6) {
      if (uVar6 == param_3) {
        *param_4 = uVar7;
      }
      break;
    }
    if (iVar8 + -1 == 0 || iVar8 < 1) break;
    uVar5 = (local_48[2] >> 0x10 & 0x7fff) + (uVar4 - 1);
    lVar3 = (long)*(int *)(param_1 + 0x14c8);
    if (lVar3 < 0x400) {
      *(uint *)(param_1 + 0x14cc + lVar3 * 4) = uVar7;
      *(int *)(param_1 + 0x14c8) = *(int *)(param_1 + 0x14c8) + 1;
    }
    uVar7 = *local_48;
    cVar1 = FUN_1002c78a0((int *)(param_1 + 0x14c8),uVar7);
    uVar6 = (uVar5 + uVar6) - uVar5 % uVar4;
    FUN_10008d3f0(&local_48);
    iVar8 = iVar8 + -1;
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_10008d3f0(&local_48);
  return;
}

