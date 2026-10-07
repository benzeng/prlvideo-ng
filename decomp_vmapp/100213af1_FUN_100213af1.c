
void FUN_100213af1(long param_1,undefined8 param_2)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x80) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x80))(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_1002118fe(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return;
}

