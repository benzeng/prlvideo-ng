
undefined4 FUN_100201a0a(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 *local_10;
  
  if (param_1 == param_2) {
    return 0;
  }
  if (((param_3 & 1) != 0) ||
     (iVar1 = FUN_1002015bb(*(undefined8 *)(param_1 + 0x1c),0x400), iVar1 != 0)) {
    return 0xbd7;
  }
  if (*(int **)(param_1 + 0x1c) == param_2) {
    return 0;
  }
  if (((**(int **)(param_1 + 0x1c) != 1) || (*(int *)(*(long *)(param_1 + 0x1c) + 0xa0) != 0x2d)) &&
     (iVar1 = FUN_100201a0a(*(undefined8 *)(param_1 + 0x1c),param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  if (((*param_2 == 1) && (param_2[0x28] == 0x2e)) &&
     ((((uint)param_1[0x16] >> 6 & 1) != 0 || (((uint)param_1[0x16] >> 7 & 1) != 0)))) {
    return 0;
  }
  if (((uint)param_2[0x16] >> 7 & 1) != 0) {
    for (local_10 = *(undefined8 **)(param_2 + 0x2a); local_10 != (undefined8 *)0x0;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = FUN_100201a0a(param_1,local_10[1],param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0xbd8;
}

