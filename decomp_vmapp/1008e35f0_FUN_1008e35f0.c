
undefined1  [16] FUN_1008e35f0(uint *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar3 = param_1[2];
    if (param_1[1] < param_1[2]) {
      uVar3 = param_1[1];
    }
    uVar2 = (ulong)(uVar3 * 1000) / (ulong)uVar1;
    param_3 = (ulong)(uVar3 * 1000) % (ulong)uVar1;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

