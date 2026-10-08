
undefined8 FUN_100c4d590(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x78) + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_100c557e0();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x78) = param_2;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_1);
  }
  return 1;
}

