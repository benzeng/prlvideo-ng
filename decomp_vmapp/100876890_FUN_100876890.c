
undefined8 FUN_100876890(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x80) + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10087a5e0();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x80) = param_2;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_1);
  }
  return 1;
}

