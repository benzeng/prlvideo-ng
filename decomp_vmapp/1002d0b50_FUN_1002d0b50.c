
undefined8 FUN_1002d0b50(long param_1,ulong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_68 [2];
  undefined4 local_58;
  undefined4 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulong uVar14;
  
  uVar2 = *(uint *)((long)param_2 + 0xc);
  uVar13 = uVar2 >> 0x18;
  uVar14 = (ulong)uVar13;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar13 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if ((0x1f < (byte)((char)(uVar2 >> 0x18) - 1U)) ||
     (lVar11 = uVar14 * 0x510, *(char *)(param_1 + 0x1b18 + lVar11) == '\0')) {
    if (DAT_1011c568c < 0) {
      return 0x2c00;
    }
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",uVar13,0xff);
    return 0x2c00;
  }
  pbVar1 = (byte *)(param_1 + 0x1b18 + lVar11);
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,*param_2 & 0xfffffffffffffff0,0x420);
  if (*pbVar1 == 0xff) {
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x40) + 0xb0) & 0xffffffffffffffc0;
    if (uVar12 != 0) {
      uVar7 = DAT_1011c5640;
      if (0xb0000000 < DAT_1011c5640) {
        uVar7 = 0xb0000000;
      }
      if (uVar12 < uVar7) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = 0;
        FUN_10008d2d0(local_68,uVar12,0x108);
        uVar7 = *(ulong *)(local_68[0] + uVar14 * 8);
        uVar8 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar8 = 0xb0000000;
        }
        if (uVar12 < uVar8) {
          bVar5 = (byte)*(undefined2 *)((long)local_48 + 0x26);
          if (*(long *)(param_1 + 0x60 + (ulong)(bVar5 - 1) * 8) == 0) {
            bVar6 = true;
            if (-1 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,
                            "[XHC] TRB_DEV_ADDR: invalid root_hub number was given: %d for slot %d",
                            bVar5,uVar13);
            }
          }
          else {
            *pbVar1 = bVar5;
            *(ulong *)(param_1 + 0x1b10 + lVar11) = uVar7 & 0xffffffffffffffc0;
            bVar6 = false;
          }
        }
        else {
          bVar6 = true;
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[XHC] TRB_DEV_ADDR invalid device ctx base address: 0x%llx");
          }
        }
        FUN_10008d3f0(local_68);
        if (bVar6) goto LAB_1002d0f81;
        goto LAB_1002d0db9;
      }
    }
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC] TRB_DEV_ADDR invalid DCBA pointer: 0x%llx",uVar12);
    }
  }
  else {
LAB_1002d0db9:
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_10008d2d0(&local_88,*(undefined8 *)(param_1 + 0x1b10 + lVar11),0x400);
    if ((*(byte *)(local_48 + 1) & 1) != 0) {
      local_88[3] = *(undefined8 *)(local_48 + 0xe);
      local_88[2] = *(undefined8 *)(local_48 + 0xc);
      uVar9 = *(undefined8 *)(local_48 + 8);
      local_88[1] = *(undefined8 *)(local_48 + 10);
      *local_88 = uVar9;
      if ((*(byte *)((long)param_2 + 0xd) & 2) == 0) {
        *local_88 = *local_88;
        local_88[1] = local_88[1] & 0xffffff00ffffffff | uVar14 << 0x20;
        uVar14 = local_88[1];
        uVar12 = 0x1000000000000000;
      }
      else {
        local_88[1] = local_88[1] & 0xffffff00ffffffff;
        *local_88 = *local_88;
        uVar14 = local_88[1];
        uVar12 = 0x800000000000000;
      }
      *local_88 = *local_88;
      local_88[1] = uVar12 | uVar14 & 0x7ffffffffffffff;
    }
    lVar11 = *(long *)(param_1 + 0x60 + (ulong)(*pbVar1 - 1) * 8);
    if (lVar11 == 0) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[XHC] TRB_DEV_ADDR: invalid slot_id was given: %d. RHPort: %d",
                      uVar13);
      }
    }
    else {
      FUN_1002d4610(lVar11,*(undefined1 *)((long)local_88 + 0xc));
      FUN_1002d2ec0(param_1,local_48,local_88,uVar13);
      *(undefined1 *)((long)param_3 + 0xb) = 1;
      if (1 < DAT_1011c568c) {
        uVar3 = *local_48;
        uVar4 = local_48[1];
        uVar2 = *(uint *)((long)param_2 + 0xc);
        uVar9 = FUN_1002da2f0(local_88);
        uVar10 = FUN_1002da3a0(local_88 + 4);
        FUN_1008e3970("","USB",0,"[XHC][SLOT%d] Device Address (DROP:%08x ADD:%08x BSR:%d) %s %s",
                      uVar13,uVar3,uVar4,uVar2 >> 9 & 1,uVar9,uVar10);
      }
    }
    FUN_10008d3f0(&local_88);
  }
LAB_1002d0f81:
  FUN_10008d3f0(&local_48);
  return 0x2c00;
}

