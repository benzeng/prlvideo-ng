
undefined8 FUN_1002d1860(long param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  long local_48 [2];
  undefined4 local_38;
  
  uVar1 = *(uint *)((long)param_2 + 0xc);
  uVar9 = uVar1 >> 0x18;
  bVar7 = (byte)(uVar1 >> 0x10) & 0x1f;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar9 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if (((((char)(uVar1 >> 0x18) == '\0') || (0x20 < uVar9)) || ((uVar1 & 0x1f0000) == 0)) ||
     (lVar4 = (ulong)uVar9 * 0x510, *(char *)(param_1 + 0x1b18 + lVar4) == '\0')) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",(ulong)uVar9,bVar7);
    }
  }
  else {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = 0;
    FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x1b10 + lVar4),0x400);
    uVar8 = (ulong)bVar7;
    lVar6 = (long)(int)(bVar7 - 1) * 0x20;
    if ((*(uint *)(local_48[0] + 0x20 + lVar6) & 7) - 3 < 2) {
      uVar2 = *param_2;
      *(ulong *)(local_48[0] + 0x28 + lVar6) = uVar2 & 0xfffffffffffffff0;
      *(uint *)(local_48[0] + 0x28 + lVar6) =
           (uint)(uVar2 & 0xfffffffffffffff0) | (uint)*param_2 & 1;
      param_1 = param_1 + lVar4;
      *(ulong *)(param_1 + 0x1610 + uVar8 * 0x28) =
           *(ulong *)(local_48[0] + 0x28 + lVar6) & 0xfffffffffffffff0;
      *(byte *)(param_1 + 0x1620 + uVar8 * 0x28) =
           *(byte *)(param_1 + 0x1620 + uVar8 * 0x28) & 0xfe |
           *(byte *)(local_48[0] + 0x28 + lVar6) & 1;
      *(undefined4 *)(param_1 + 0x1624 + uVar8 * 0x28) = 0x1000000;
      *(undefined1 *)((long)param_3 + 0xb) = 1;
    }
    if (1 < DAT_1011c568c) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar5 = FUN_1002da3a0(local_48[0] + 0x20 + lVar6);
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d][STREAM%d] Set TRDP (SCT:%d) %s",uVar9,uVar8,
                    (uint)uVar3 >> 0x10,(uint)uVar2 >> 1 & 7,uVar5);
    }
    FUN_10008d3f0(local_48);
  }
  return 0x2c00;
}

