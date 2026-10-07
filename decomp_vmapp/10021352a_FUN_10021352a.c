
void FUN_10021352a(long param_1)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x68) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x68))(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

