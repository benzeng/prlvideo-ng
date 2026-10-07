
void FUN_10010f4e0(long param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 8))();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    _dlclose(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

