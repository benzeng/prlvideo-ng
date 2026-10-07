
void FUN_1002133a1(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x38))
              (*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  }
  return;
}

