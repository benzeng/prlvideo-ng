
int FUN_1002d2ca0(long param_1,ulong param_2,uint param_3,byte param_4)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  int local_4c;
  long local_48 [2];
  undefined4 local_38;
  
  uVar7 = (ulong)param_3;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x1b10 + param_2 * 0x510),0x400);
  lVar4 = local_48[0];
  lVar10 = (long)(int)(param_3 - 1) * 0x20;
  bVar3 = *(byte *)(local_48[0] + 0x20 + lVar10);
  local_4c = 0;
  uVar11 = (uint)((ulong)*(undefined8 *)(local_48[0] + 8) >> 0x3b);
  if (uVar11 == 0) goto LAB_1002d2df7;
  param_1 = param_1 + param_2 * 0x510;
  if (*(long *)(param_1 + 0x1628 + uVar7 * 0x28) != 0) {
    FUN_1002c8930();
    *(undefined8 *)(param_1 + 0x1628 + uVar7 * 0x28) = 0;
  }
  bVar9 = bVar3 & 7;
  uVar5 = (uint)param_4;
  if (4 < uVar5) goto LAB_1002d2df7;
  puVar1 = (ulong *)(param_1 + 0x1610 + uVar7 * 0x28);
  switch((ulong)uVar5) {
  case 0:
    *puVar1 = 0;
    pbVar2 = (byte *)(param_1 + 0x1620 + uVar7 * 0x28);
    *pbVar2 = *pbVar2 & 0xfe;
    break;
  case 1:
    if ((bVar9 != 0) && ((bVar3 & 7) != 3)) goto LAB_1002d2df7;
    break;
  case 2:
    if (1 < (byte)(bVar9 - 1)) goto LAB_1002d2df7;
    goto LAB_1002d2db0;
  case 3:
    if (bVar9 == 0) goto LAB_1002d2df7;
LAB_1002d2db0:
    uVar6 = *puVar1 & 0xfffffffffffffff0;
    *(ulong *)(lVar4 + 0x28 + lVar10) = uVar6;
    *(uint *)(lVar4 + 0x28 + lVar10) = *(byte *)(param_1 + 0x1620 + uVar7 * 0x28) & 1 | (uint)uVar6;
    break;
  case 4:
    if ((bVar3 & 7) != 1) goto LAB_1002d2df7;
  }
  puVar1 = (ulong *)(lVar4 + 0x20 + lVar10);
  *puVar1 = *puVar1 & 0xfffffffffffffff8 | (ulong)uVar5 & 7;
  local_4c = 1;
LAB_1002d2df7:
  if (1 < DAT_1011c568c) {
    pcVar8 = "failed";
    if (local_4c != 0) {
      pcVar8 = "ok";
    }
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] %d:%d -> %d:%d %s",param_2 & 0xff,uVar7,uVar11,
                  bVar3 & 7,uVar11,param_4,pcVar8);
  }
  FUN_10008d3f0(local_48);
  return local_4c;
}

