
undefined4 FUN_1009d87f0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x470) = FUN_1009d81a0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  cVar1 = FUN_1009d85c0();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x410);
  }
  return uVar2;
}

