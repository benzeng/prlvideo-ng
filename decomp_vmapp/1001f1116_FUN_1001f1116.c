
undefined4
FUN_1001f1116(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  if ((param_5 == 0) && (param_4 == 0)) {
    return 0;
  }
  if (param_5 != 0x40000000) {
    if (param_5 < 1) {
      uVar1 = FUN_1001ece01(param_3,"maxOccurs");
      FUN_1001ea087(param_1,0xbe4,0,0,uVar1,"The value must be greater than or equal to 1");
      return 0xbe4;
    }
    if (param_5 < param_4) {
      uVar1 = FUN_1001ece01(param_3,"minOccurs");
      FUN_1001ea087(param_1,0xbe3,0,0,uVar1,
                    "The value must not be greater than the value of \'maxOccurs\'");
      return 0xbe3;
    }
  }
  return 0;
}

