
undefined8 FUN_10086a2a0(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa0) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x42;
    uVar3 = 0xab;
  }
  else {
    if (pbVar1 == (byte *)*param_2) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010086a306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa0))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = FUN_1008693b0();
        return uVar2;
      }
      uVar2 = FUN_100869d90();
      return uVar2;
    }
    uVar2 = 0x65;
    uVar3 = 0xaf;
  }
  FUN_100887ce0(0x10,0x7a,uVar2,"ec_oct.c",uVar3);
  return 0;
}

