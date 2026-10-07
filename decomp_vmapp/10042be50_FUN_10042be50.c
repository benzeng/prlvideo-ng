
bool FUN_10042be50(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  
  *(code **)(param_1 + 0x470) = FUN_10042b640;
  *(undefined8 *)(param_1 + 0x478) = 0;
  FUN_100423700(param_1 + 0x414);
  cVar1 = FUN_10042b7d0(param_1,param_2,param_3,FUN_10042ba50,param_1);
  if (cVar1 != '\0') {
    FUN_100423f40(param_4,param_1 + 0x414);
  }
  return cVar1 != '\0';
}

