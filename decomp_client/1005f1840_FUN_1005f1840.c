
undefined8 * FUN_1005f1840(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int *local_98 [11];
  undefined1 local_40 [47];
  undefined1 local_11;
  
  uVar1 = FUN_1005ec990(param_2 + 0x38);
  FUN_1005b69c0(local_98,uVar1);
  *param_1 = local_98[0];
  if (1 < *local_98[0] + 1U) {
    LOCK();
    *local_98[0] = *local_98[0] + 1;
    local_11 = *local_98[0] != 0;
    UNLOCK();
  }
  FUN_100252c80(local_40);
  FUN_100252e70(local_98);
  return param_1;
}

