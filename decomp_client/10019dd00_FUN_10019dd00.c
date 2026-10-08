
void FUN_10019dd00(undefined8 *param_1,long *param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e1288;
  puVar3 = PTR_shared_null_1021e15e8;
  param_1[1] = PTR_shared_null_1021e15e8;
  *(undefined1 *)((long)param_1 + 0x14) = param_3;
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 5) = 1;
  local_30 = (int *)*param_2;
  if (local_30 != (int *)puVar3) {
    if (*local_30 != -1) {
      if (*local_30 == 0) {
        QListData::detach((int)&local_30);
        iVar1 = local_30[2];
        if (iVar1 != local_30[3]) {
          puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar6 = local_30 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_30[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar5;
            *(int **)piVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_21 = *piVar2 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *local_30 = *local_30 + 1;
        local_22 = *local_30 != 0;
        UNLOCK();
      }
    }
    piVar6 = (int *)param_1[1];
    param_1[1] = local_30;
    local_30 = piVar6;
    FUN_100039a80(&local_30);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}

