
void FUN_100946c61(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x48) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x48))
              (*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  }
  return;
}

