
undefined8 FUN_100b0d040(ulong param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 - 0xfc001 < 0xf03fff) {
    *param_2 = 0x3f;
    param_2[1] = 0x10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1 >> 4;
    uVar4 = SUB168(auVar2 * ZEXT816(0x820820820820821),0);
    param_2[2] = (uint)((param_1 >> 4) / 0x3f);
  }
  else {
    uVar3 = 0x3f;
    if ((((param_1 == (param_1 / 0x3f) * 0x3f) || (uVar3 = 0x20, (param_1 & 0x1f) == 0)) ||
        (uVar3 = 0x10, (param_1 & 0xf) == 0)) || (uVar3 = 8, (param_1 & 7) == 0)) {
      *param_2 = uVar3;
      uVar5 = param_1 / uVar3;
      uVar3 = 0x10;
      if ((((uVar5 & 0xf) == 0) || (uVar3 = 8, (uVar5 & 7) == 0)) ||
         ((uVar3 = 4, (uVar5 & 3) == 0 || (uVar3 = 2, (uVar5 & 1) == 0)))) {
        param_2[1] = uVar3;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar5;
        param_2[2] = SUB164(auVar1 / ZEXT416(uVar3),0);
        return SUB168(auVar1 / ZEXT416(uVar3),0);
      }
      uVar4 = FUN_100df99c0("","dimg",0,"Unable to determine heads count from size %llu");
      param_2[1] = 0xffffffff;
    }
    else {
      uVar4 = FUN_100df99c0("","dimg",0,"Can\'t determine sectors count for size %llu",param_1);
      *param_2 = 0xffffffff;
    }
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = (uint)param_1;
  }
  return uVar4;
}

