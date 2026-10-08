
void FUN_10095805e(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
    (**(code **)(lVar1 + 0x48))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    if (((*(long *)(param_1 + 0x50) != 0) &&
        (((*(long *)(param_1 + 0x38) != 0 && (*(long *)(*(long *)(param_1 + 0x38) + 0x20) != 0)) &&
         (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '/')))) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '>')) {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + 0x72) = 1;
    }
  }
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 1;
  }
  return;
}

