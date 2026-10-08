
bool FUN_1009d8c40(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  
  *(code **)(param_1 + 0x470) = FUN_1009d8430;
  *(undefined8 *)(param_1 + 0x478) = 0;
  FUN_1009d03c0(param_1 + 0x414);
  cVar1 = FUN_1009d85c0(param_1,param_2,param_3,FUN_1009d8840,param_1);
  if (cVar1 != '\0') {
    FUN_1009d0c00(param_4,param_1 + 0x414);
  }
  return cVar1 != '\0';
}

