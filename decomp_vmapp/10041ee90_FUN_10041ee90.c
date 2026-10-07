
undefined8 * FUN_10041ee90(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined1 local_48 [8];
  long local_40;
  undefined1 local_38 [8];
  long *local_30 [2];
  
  plVar2 = (long *)*param_2;
  if (1 < *(uint *)(plVar2 + 2)) {
    local_30[0] = plVar2;
    FUN_10041f350(local_38,param_2,local_30);
    plVar2 = (long *)*param_2;
  }
  piVar1 = *(int **)(*plVar2 + 0x10);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_30[0] = (long *)CONCAT71(local_30[0]._1_7_,*piVar1 != 0);
    plVar2 = (long *)*param_2;
  }
  if (1 < *(uint *)(plVar2 + 2)) {
    local_30[0] = plVar2;
    FUN_10041f350(local_38,param_2,local_30);
    plVar2 = (long *)*param_2;
  }
  local_40 = *plVar2;
  FUN_10041f500(local_48,param_2,&local_40);
  return param_1;
}

