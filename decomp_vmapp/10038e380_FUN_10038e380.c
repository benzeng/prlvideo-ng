
undefined1  [16] FUN_10038e380(uint param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(uint *)(&DAT_100b3e8a4 + (ulong)param_2 * 8) < 0x1000000) {
    uVar1 = 0;
    uVar2 = (ulong)(param_2 - 0x53);
    if (param_2 - 0x53 < 0x39) {
      if ((0x900000030c000fU >> (uVar2 & 0x3f) & 1) != 0) {
        auVar4._4_4_ = 0;
        auVar4._0_4_ = param_1 >> 1;
        auVar4._8_8_ = param_3;
        return auVar4;
      }
      if ((0x16000000cf00100U >> (uVar2 & 0x3f) & 1) == 0) {
        if ((0x70UL >> (uVar2 & 0x3f) & 1) == 0) goto LAB_10038e3d1;
      }
      else {
        param_1 = param_1 >> 2;
      }
      auVar5._4_4_ = 0;
      auVar5._0_4_ = param_1;
      auVar5._8_8_ = param_3;
      return auVar5;
    }
  }
  else {
    param_3 = (ulong)(*(uint *)(&DAT_100b3e8a4 + (ulong)param_2 * 8) >> 0x18);
    uVar1 = param_1 / param_3;
    param_3 = (ulong)param_1 % param_3;
  }
LAB_10038e3d1:
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar1;
  return auVar3;
}

