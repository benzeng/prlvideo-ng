
void FUN_10021357b(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x98) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x98))(*(undefined8 *)(param_1 + 0x20),param_2,param_3)
    ;
  }
  return;
}

