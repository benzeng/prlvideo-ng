
void FUN_1008b9980(long param_1)

{
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(param_1);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(param_1 + 0xe0) == 0) {
      FUN_1008c0f90();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1008cddd0();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_100885590(*(long *)(param_1 + 0xa0),FUN_1008a17f0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_10081fa50(5,param_1,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

