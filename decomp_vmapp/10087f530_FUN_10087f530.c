
long FUN_10087f530(long param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_2 < 0x68) {
    if (param_2 - 0xbU < 2) {
      return 1;
    }
    if (param_2 == 8) {
      return (long)*(int *)(param_1 + 0x1c);
    }
    if (param_2 == 9) {
      *(undefined4 *)(param_1 + 0x1c) = param_3;
      return 1;
    }
  }
  else {
    if (param_2 == 0x69) {
      if (*(int *)(param_1 + 0x18) == 0) {
        return -1;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x28);
        return (long)*(int *)(param_1 + 0x28);
      }
      return (long)*(int *)(param_1 + 0x28);
    }
    if (param_2 == 0x68) {
      if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        if (*(int *)(param_1 + 0x18) != 0) {
          _shutdown(*(int *)(param_1 + 0x28),2);
          _close(*(int *)(param_1 + 0x28));
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = *param_4;
      *(undefined4 *)(param_1 + 0x1c) = param_3;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return 1;
    }
  }
  return 0;
}

