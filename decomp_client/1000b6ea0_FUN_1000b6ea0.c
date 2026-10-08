
undefined8 * FUN_1000b6ea0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x88))(param_2);
  if (lVar2 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    piVar1 = *(int **)(lVar2 + 0xa8);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

