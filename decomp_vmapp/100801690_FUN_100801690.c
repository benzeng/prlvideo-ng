
undefined8 FUN_100801690(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = ___error();
  *piVar1 = 0;
  uVar2 = FUN_10080ee80(param_1);
  if (((uVar2 & 0x3000) == 0) || (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_10080d4b0(param_1);
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((int)uVar3 != 0) {
      uVar3 = FUN_10080ed20(param_1,param_2,param_3);
      return uVar3;
    }
    FUN_100887ce0(0x14,0x78,0xe5,"s23_lib.c",0x89);
  }
  return 0xffffffff;
}

