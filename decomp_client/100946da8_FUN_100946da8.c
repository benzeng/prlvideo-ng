
void FUN_100946da8(long param_1,undefined8 param_2)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x58) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x58))(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return;
}

