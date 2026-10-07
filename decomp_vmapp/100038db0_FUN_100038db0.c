
void FUN_100038db0(long *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *local_30;
  undefined *local_28;
  undefined1 local_19;
  
  puVar3 = PTR_shared_null_100ba2188;
  local_30 = PTR_shared_null_100ba2188;
  if ((undefined *)*param_1 != PTR_shared_null_100ba2188) {
    local_28 = PTR_shared_null_100ba2188;
    if (*(int *)PTR_shared_null_100ba2188 != -1) {
      if (*(int *)PTR_shared_null_100ba2188 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = *(int *)(local_28 + 8);
        if (iVar1 != *(int *)(local_28 + 0xc)) {
          puVar5 = (undefined8 *)(puVar3 + (long)*(int *)(puVar3 + 8) * 8 + 0x10);
          puVar6 = (undefined8 *)(local_28 + (long)iVar1 * 8 + 0x10);
          lVar4 = (long)*(int *)(local_28 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar5;
            *puVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_19 = *piVar2 != 0;
              UNLOCK();
            }
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *(int *)PTR_shared_null_100ba2188 = *(int *)PTR_shared_null_100ba2188 + 1;
        local_19 = *(int *)puVar3 != 0;
        UNLOCK();
      }
    }
    puVar3 = (undefined *)*param_1;
    *param_1 = (long)local_28;
    local_28 = puVar3;
    FUN_100037320(&local_28);
  }
  FUN_100037320(&local_30);
  return;
}

