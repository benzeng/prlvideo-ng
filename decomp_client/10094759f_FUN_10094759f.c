
void FUN_10094759f(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0xf0) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x10) + 0xf0))
                (*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_1009456c3(*(undefined8 *)(param_1 + 0x128),param_2,param_3,param_4);
    }
  }
  return;
}

