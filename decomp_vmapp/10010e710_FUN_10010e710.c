
undefined8 FUN_10010e710(byte *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78 [3];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78[2] = 0;
  _uStack_60 = 0;
  local_78[1] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  local_78[0] = (ulong)((int)(char)param_1[3] +
                       (char)param_1[2] * 0x100 +
                       (char)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000);
  local_20 = lVar1;
  _strncpy(param_2,(char *)param_1,4);
  uStack_50._0_3_ = CONCAT12(9,(undefined2)uStack_50);
  local_d0 = 0x50;
  uVar2 = _IOConnectCallStructMethod(DAT_1011c37a0._4_4_,2,local_78,0x50,&local_c8,&local_d0);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_2 + 8) = uStack_b0._4_4_;
    param_2[0xc] = '\0';
    _sprintf(param_2 + 0xc,"%c%c%c%c",(uint)local_a8 >> 0x18,(ulong)((uint)local_a8 >> 0x10),
             (uint)local_a8 >> 8);
    _uStack_60 = CONCAT44(*(undefined4 *)(param_2 + 8),uStack_60);
    uStack_50._0_3_ = CONCAT12(5,(undefined2)uStack_50);
    local_d0 = 0x50;
    uVar2 = _IOConnectCallStructMethod(DAT_1011c37a0._4_4_,2,local_78,0x50,&local_c8,&local_d0);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_2 + 0x29) = uStack_80;
      *(undefined8 *)(param_2 + 0x21) = local_88;
      *(undefined8 *)(param_2 + 0x19) = uStack_90;
      *(undefined8 *)(param_2 + 0x11) = local_98;
      uVar2 = 0;
    }
  }
  if (lVar1 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

