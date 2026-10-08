
undefined8 * FUN_1000e5fc0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_28 = (int *)*param_2;
  if ((int *)*param_1 != local_28) {
    if (*local_28 != -1) {
      if (*local_28 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = local_28[2];
        if (iVar1 != local_28[3]) {
          puVar4 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar5 = local_28 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_28[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar4;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_19 = *piVar2 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            puVar4 = puVar4 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_28 = *local_28 + 1;
        local_1a = *local_28 != 0;
        UNLOCK();
      }
    }
    piVar5 = (int *)*param_1;
    *param_1 = local_28;
    local_28 = piVar5;
    FUN_100039a80(&local_28);
  }
  return param_1;
}

