
undefined8 FUN_100c475d0(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x40);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100c557e0();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x10) = param_2;
  if (*(code **)(param_2 + 0x38) != (code *)0x0) {
    (**(code **)(param_2 + 0x38))(param_1);
  }
  return 1;
}

