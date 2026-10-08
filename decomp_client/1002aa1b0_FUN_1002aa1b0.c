
void FUN_1002aa1b0(long param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pcVar2 = *(code **)(param_1 + 0x20);
  local_28 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  local_30 = *(int **)(param_1 + 0x30);
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)&local_30);
      iVar1 = local_30[2];
      if (iVar1 != local_30[3]) {
        puVar6 = (undefined8 *)
                 (*(long *)(param_1 + 0x30) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x30) + 8) * 8);
        piVar7 = local_30 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_30[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = (int *)*puVar6;
          *(int **)piVar7 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_19 = *piVar3 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_19 = *local_30 != 0;
      UNLOCK();
    }
  }
  uVar4 = (*pcVar2)(&local_28,&local_30);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_100039a80(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

