
void FUN_10032eef0(long param_1)

{
  long lVar1;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
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
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  local_118 = 0xf;
  uStack_ec = (undefined4)*(undefined8 *)(param_1 + 0x80);
  uStack_e8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  uStack_f4 = (undefined4)*(undefined8 *)(param_1 + 0x78);
  uStack_f0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  uStack_fc = (undefined4)*(undefined8 *)(param_1 + 0x70);
  local_f8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  uStack_104 = (undefined4)*(undefined8 *)(param_1 + 0x68);
  uStack_100 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  uStack_10c = (undefined4)*(undefined8 *)(param_1 + 0x60);
  uStack_108 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  local_18 = lVar1;
  FUN_10032ea20(param_1,&local_118,1,0);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

