
void FUN_100947301(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x90) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x10) + 0x90))
                (*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_10094505a(*(undefined8 *)(param_1 + 0x128),param_2,param_3);
    }
  }
  return;
}

