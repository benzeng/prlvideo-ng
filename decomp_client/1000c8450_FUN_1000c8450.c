
void FUN_1000c8450(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  puVar5 = *(uint **)(param_2 + 0x38);
  if ((int)puVar5[2] < (int)puVar5[3]) {
    puVar6 = (undefined8 *)(param_2 + 0x38);
    lVar7 = 0;
    bVar8 = false;
    do {
      if (1 < *puVar5) {
        FUN_1000e7430(puVar6,puVar5[1]);
        puVar5 = (uint *)*puVar6;
      }
      lVar2 = **(long **)(puVar5 + ((int)puVar5[2] + lVar7) * 2 + 4);
      local_48 = lVar2;
      FUN_10009c430(&local_40,&local_48);
      bVar9 = true;
      if (*(long *)(param_1 + 0x220) != lVar2) {
        bVar9 = bVar8;
      }
      if (*(long *)(param_1 + 0x220) == 0) {
        bVar9 = bVar8;
      }
      lVar7 = lVar7 + 1;
      puVar5 = (uint *)*puVar6;
      bVar8 = bVar9;
    } while (lVar7 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
  }
  else {
    bVar9 = false;
  }
  if (*(int *)(*(long *)(param_2 + 0x40) + 4) != 0) {
    FUN_1000cf750(param_3,param_2 + 0x40);
  }
  FUN_1000df990(param_1,param_3);
  local_50 = *(QArrayData **)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  local_58 = *(QArrayData **)(param_2 + 8);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  FUN_1000b07c0(uVar3,&local_50,&local_58,*param_3,&local_40);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c85be;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000c85be:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c85ee;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000c85ee:
  if ((((*(byte *)(param_2 + 0x20) & 8) != 0) &&
      (FUN_1000c4970(param_3,0x89,param_2 + 0x70,0x40), bVar9)) &&
     (cVar4 = FUN_1000a6420(), cVar4 != '\0')) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    FUN_1000c6320(param_1,param_2);
  }
  QMutex::lock();
  if (*(char *)(param_1 + 0x230) != '\0') {
    lVar7 = *(long *)(param_1 + 0x238);
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 != *(int *)(lVar7 + 0xc)) {
      puVar6 = (undefined8 *)(lVar7 + 0x10 + (long)iVar1 * 8);
      lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar1 * -8;
      do {
        if ((((int *)*puVar6)[1] == *(int *)(param_2 + 0x34)) &&
           (*(int *)*puVar6 == *(int *)(param_2 + 0x30))) goto LAB_1000c86d4;
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    if ((((*(byte *)(param_2 + 0x20) & 8) != 0) && (*(char *)(param_1 + 0x104) == '\0')) &&
       (FUN_1000aaa10((long *)(param_1 + 0x238),param_2 + 0x30), lVar7 = *(long *)(param_1 + 0x238),
       *(int *)(lVar7 + 0xc) - *(int *)(lVar7 + 8) == 1)) {
      FUN_1000dfa80(param_1);
    }
  }
LAB_1000c86d4:
  QMutex::unlock();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

