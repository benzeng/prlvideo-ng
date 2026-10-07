
void FUN_100213b71(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0xe8) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x10) + 0xe8))
                (*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,param_9);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_10021197d(*(undefined8 *)(param_1 + 0x128),param_2,param_3,param_4,param_5,param_6,param_7
                    ,param_8,param_9);
    }
  }
  return;
}

