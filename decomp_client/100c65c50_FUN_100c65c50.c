
undefined8 FUN_100c65c50(long *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(long *)(*param_1 + 0x38) != 0) {
      iVar1 = FUN_100c6fcd0(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x38))(param_1);
      }
    }
    if (((*param_1 != 0) && (*(int *)(*param_1 + 0x68) != 0)) && (param_1[3] != 0)) {
      iVar1 = FUN_100c6fcd0(param_1,4);
      if (iVar1 == 0) {
        _OPENSSL_cleanse((void *)param_1[3],(long)*(int *)(*param_1 + 0x68));
        FUN_100bf3910(param_1[3]);
      }
    }
  }
  if (param_1[4] != 0) {
    FUN_100c71960();
  }
  if (param_1[1] != 0) {
    FUN_100c557e0();
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return 1;
}

