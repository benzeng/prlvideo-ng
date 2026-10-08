
undefined8 FUN_100bdd590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100be2c50();
  FUN_100be4680(param_1,0x20,0x2000,0);
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x280) = 1;
  uVar1 = FUN_100be4280(param_1);
  if (0 < (int)uVar1) {
    uVar1 = FUN_100be39f0(param_1);
    FUN_100c58d60(uVar1,0x2e,0,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

