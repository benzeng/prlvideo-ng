
void FUN_100a405e0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long local_30;
  undefined1 local_22;
  
  piVar1 = (int *)*param_2;
  lVar2 = param_2[1];
  *param_1 = piVar1;
  param_1[1] = lVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_22 = *piVar1 != 0;
    UNLOCK();
  }
  lVar2 = 0;
  if ((*param_2 != 0) && (lVar2 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar2 = param_2[1];
  }
  FUN_1003193b0(&local_30,lVar2);
  if (local_30 != 0) {
    _PrlHandle_Free(local_30);
  }
  param_1[2] = local_30;
  return;
}

