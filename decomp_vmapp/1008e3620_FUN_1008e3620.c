
undefined1  [16] FUN_1008e3620(uint *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (ulong)(param_1[3] * 1000) / (ulong)uVar1;
    param_3 = (ulong)(param_1[3] * 1000) % (ulong)uVar1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

