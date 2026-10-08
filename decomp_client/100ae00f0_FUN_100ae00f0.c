
undefined8 FUN_100ae00f0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int extraout_var;
  bool bVar3;
  undefined1 auVar4 [12];
  
  bVar3 = false;
  auVar4 = FUN_100ae60d0(param_2,0);
  uVar2 = auVar4._0_8_;
  if (*param_3 <= (auVar4._8_4_ + 1) - auVar4._0_4_) {
    uVar1 = FUN_100ae60d0(param_2,0);
    uVar2 = uVar1 >> 0x20;
    bVar3 = param_3[1] <= (extraout_var + 1) - (int)(uVar1 >> 0x20);
  }
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}

