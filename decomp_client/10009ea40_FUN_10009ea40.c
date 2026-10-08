
void FUN_10009ea40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  local_18 = lVar1;
  if (3 < param_4) {
    switch(*(undefined4 *)param_3) {
    case 5:
      if (0x10 < param_4) {
        FUN_1000a01b0();
        return;
      }
      break;
    case 10:
      if (0x1f < param_4) {
        FUN_10009fe80();
        return;
      }
      break;
    case 0xb:
      if (0x7f < param_4) {
        FUN_1000a0080();
        return;
      }
      break;
    case 0xd:
      if (0x1f < param_4) {
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
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_100 = param_3[3];
        local_108 = param_3[2];
        local_118 = *param_3;
        uStack_110 = param_3[1];
        uVar2 = FUN_100319c40(*param_1);
        FUN_10032ea20(uVar2,&local_118,1,0);
      }
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

