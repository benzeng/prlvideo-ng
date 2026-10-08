
undefined8 FUN_100c45320(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x90) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x42;
    uVar3 = 0x4e;
  }
  else {
    if (pbVar1 == (byte *)*param_2) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c45386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x90))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = FUN_100c43df0();
        return uVar2;
      }
      uVar2 = FUN_100c44920();
      return uVar2;
    }
    uVar2 = 0x65;
    uVar3 = 0x53;
  }
  FUN_100c62ee0(0x10,0x7d,uVar2,"ec_oct.c",uVar3);
  return 0;
}

