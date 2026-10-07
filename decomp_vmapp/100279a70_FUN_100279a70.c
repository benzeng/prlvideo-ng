
ulong FUN_100279a70(ulong *param_1,uint param_2,ulong param_3,long param_4,uint param_5,int param_6,
                   uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(int *)(param_1 + 2) = param_6;
  if (param_7 - 1 < 5000) {
    *(uint *)((long)param_1 + 0x14) = param_7;
  }
  if (((param_2 == 100) || (param_3 != 0)) || (param_6 != 0 || param_7 != 0)) {
    if (param_3 == 0) {
      if (param_7 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0xc) = 0x10000;
      return (ulong)param_7;
    }
  }
  else {
    uVar7 = 100;
    if (param_2 < 0x65) {
      uVar7 = param_2;
    }
    param_3 = (ulong)((uVar7 * 3000000) / 100 + 1000000);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",3,"network: applied io_quota %u%%; bps is %u kBit",uVar7,
                    param_3 / 1000);
    }
  }
  *param_1 = param_3;
  lVar3 = 1000;
  if (param_4 != 0) {
    lVar3 = param_4;
  }
  uVar4 = lVar3 * param_3 >> 6;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  uVar4 = uVar4 / 0x7d;
  uVar5 = 0x40000000;
  if (uVar4 < 0x40000001) {
    uVar5 = uVar4;
  }
  uVar6 = 0x40000000;
  if (uVar4 < 0x40000001) {
    uVar6 = SUB164(auVar1 * ZEXT816(0x20c49ba5e353f7d),8);
  }
  *(undefined4 *)(param_1 + 1) = uVar6;
  if (param_5 == 0) {
    uVar4 = uVar5 * 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    uVar5 = SUB168(auVar2 * ZEXT816(0xad2589a356e95797),0);
    uVar7 = (uint)(uVar4 / 0xbd4);
    param_5 = 0x20;
    if (0x1f < uVar7) {
      param_5 = uVar7;
    }
  }
  *(uint *)((long)param_1 + 0xc) = param_5;
  return uVar5;
}

