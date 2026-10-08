
undefined8 FUN_100bd6e90(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = ___error();
  *piVar1 = 0;
  uVar2 = FUN_100be45f0(param_1);
  if (((uVar2 & 0x3000) == 0) || (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_100be2c20(param_1);
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((int)uVar3 != 0) {
      uVar3 = FUN_100be44e0(param_1,param_2,param_3);
      return uVar3;
    }
    FUN_100c62ee0(0x14,0xed,0xe5,"s23_lib.c",0x9d);
  }
  return 0xffffffff;
}

