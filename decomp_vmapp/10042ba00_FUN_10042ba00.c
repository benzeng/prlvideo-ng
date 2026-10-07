
undefined4 FUN_10042ba00(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x470) = FUN_10042b3b0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  cVar1 = FUN_10042b7d0();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x410);
  }
  return uVar2;
}

