
undefined8 FUN_1002d0fe0(long param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar1 = *(uint *)((long)param_2 + 0xc);
  uVar9 = uVar1 >> 0x18;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar9 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if ((0x1f < (byte)((char)(uVar1 >> 0x18) - 1U)) ||
     (lVar4 = (ulong)uVar9 * 0x510, *(char *)(param_1 + 0x1b18 + lVar4) == '\0')) {
    if (DAT_1011c568c < 0) {
      return 0x2c00;
    }
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",(ulong)uVar9,0xff);
    return 0x2c00;
  }
  local_48 = (ulong *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,*(undefined8 *)(param_1 + 0x1b10 + lVar4),0x400);
  if ((local_48[1] & 0xf000000000000000) == 0x1000000000000000) {
    uVar8 = *param_2 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      uVar5 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar5 = 0xb0000000;
      }
      if (uVar8 < uVar5) {
        local_68 = (undefined4 *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_10008d2d0(&local_68,uVar8,0x420);
        if ((*(byte *)(local_68 + 1) & 1) != 0) {
          uVar8 = *(ulong *)(local_68 + 8);
          local_48[1] = local_48[1];
          *local_48 = *local_48 & 0xffffffff07ffffff | uVar8 & 0xf8000000;
          if ((*(byte *)((long)param_2 + 0xd) & 2) == 0) {
            uVar8 = local_48[1] & 0x7ffffffffffffff | 0x1800000000000000;
          }
          else {
            uVar8 = local_48[1] & 0x7ffffffffffffff | 0x1000000000000000;
          }
          *local_48 = *local_48;
          local_48[1] = uVar8;
        }
        FUN_1002d2ec0(param_1,local_68,local_48,uVar9);
        *(undefined1 *)((long)param_3 + 0xb) = 1;
        if (1 < DAT_1011c568c) {
          uVar2 = *local_68;
          uVar3 = local_68[1];
          uVar1 = *(uint *)((long)param_2 + 0xc);
          uVar6 = FUN_1002da2f0(local_48);
          uVar7 = FUN_1002da3a0(local_48 + 4);
          FUN_1008e3970("","USB",0,
                        "[XHC][SLOT%d] Endpoint Configure (DROP:%08x ADD:%08x DC:%d) %s %s",uVar9,
                        uVar2,uVar3,uVar1 >> 9 & 1,uVar6,uVar7);
        }
        FUN_10008d3f0(&local_68);
        goto LAB_1002d1256;
      }
    }
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC] TRB_EP_CFG invalid input context base address: 0x%llx");
    }
  }
LAB_1002d1256:
  FUN_10008d3f0(&local_48);
  return 0x2c00;
}

