
undefined1 FUN_1007609e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  FUN_1008e3970("","dbgdump",0,"Writing %d VCPU states",param_4);
  if (param_4 != 0) {
    uVar2 = 0;
    do {
      FUN_1008e3970("","dbgdump",0,"RIP of vcpu %d is %llx",uVar2 & 0xffffffff,*param_3);
      FUN_1008e3970("","dbgdump",0,"CR3 of vcpu %d is %llx",uVar2 & 0xffffffff,param_3[0x12]);
      local_e8 = 4;
      local_e4 = 0xb8;
      local_e0 = 4;
      local_dc = 0x2a;
      local_d8 = param_3[1];
      local_d0 = param_3[4];
      local_c8 = param_3[2];
      uStack_c0 = param_3[3];
      local_b8 = param_3[8];
      local_b0 = param_3[7];
      local_a8 = param_3[6];
      local_a0 = param_3[5];
      local_98 = param_3[9];
      uStack_90 = param_3[10];
      local_88 = param_3[0xb];
      uStack_80 = param_3[0xc];
      local_78 = param_3[0xd];
      uStack_70 = param_3[0xe];
      local_68 = *(undefined4 *)(param_3 + 0xf);
      uStack_64 = *(undefined4 *)((long)param_3 + 0x7c);
      uStack_60 = *(undefined4 *)(param_3 + 0x10);
      uStack_5c = *(undefined4 *)((long)param_3 + 0x84);
      local_58 = *param_3;
      local_50 = param_3[0x11];
      local_48 = (ulong)*(ushort *)((long)param_3 + 0x5f1);
      local_40 = (ulong)*(ushort *)((long)param_3 + 0x681);
      local_38 = (ulong)*(ushort *)((long)param_3 + 0x6b1);
      lVar1 = FUN_100761880(param_2,FUN_100761810,0,&local_e8,0xb8);
      if (lVar1 != 0xb8) {
        FUN_1008e3970("","dbgdump",0,"Write to dump file failed");
        return 0;
      }
      uVar2 = uVar2 + 1;
      param_3 = param_3 + 0xed;
    } while (uVar2 < param_4);
  }
  return 1;
}

