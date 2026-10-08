
undefined8 FUN_100cd16b0(long *param_1,long param_2,char param_3)

{
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_100cd05d0(param_1,4);
    if ((char)param_1[0xd] != '\0') {
      (**(code **)(*param_1 + 0x138))(param_1);
      if ((((int)param_1[3] == 0) && ((*(uint *)(param_1 + 8) & 0xfffffff) == 0)) &&
         (param_3 == '\0')) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x7fffffff;
      }
    }
  }
  return 0;
}

