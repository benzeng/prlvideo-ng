
void FUN_100c94f00(long param_1)

{
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(param_1);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(param_1 + 0xe0) == 0) {
      FUN_100c9c510();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_100ca9350();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_100c60790(*(long *)(param_1 + 0xa0),FUN_100c7cd70);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_100bf51c0(5,param_1,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

