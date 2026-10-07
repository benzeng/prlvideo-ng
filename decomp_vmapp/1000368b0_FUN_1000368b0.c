
void FUN_1000368b0(long param_1,int param_2)

{
  undefined *puVar1;
  QMapNodeBase *pQVar2;
  ulong uVar3;
  long lVar4;
  long local_78 [2];
  QArrayData *local_68;
  QMapNodeBase *local_58;
  Data *local_50 [2];
  QArrayData *local_40;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_100ba20d0;
  if (param_2 != 3) {
    if (param_2 != 4) {
      return;
    }
    FUN_100034c80(param_1);
    FUN_100034660(param_1);
    QMutex::lock();
    *(undefined1 *)(param_1 + 0xa8) = 1;
    QMutex::unlock();
    return;
  }
  local_50[0] = (Data *)PTR_shared_null_100ba2188;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1000345a0(param_1,local_50);
  uVar3 = (ulong)*(uint *)(local_50[0] + 8);
  if ((int)*(uint *)(local_50[0] + 8) < *(int *)(local_50[0] + 0xc)) {
    lVar4 = 0;
    do {
      FUN_1004c07d0(param_1,*(undefined8 *)(local_50[0] + ((int)uVar3 + lVar4) * 8 + 0x10),
                    0xf0000020);
      lVar4 = lVar4 + 1;
      uVar3 = (ulong)*(int *)(local_50[0] + 8);
    } while (lVar4 < (long)((long)*(int *)(local_50[0] + 0xc) - uVar3));
  }
  local_68 = (QArrayData *)puVar1;
  local_58 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  FUN_100034ba0(param_1,local_78);
  if (local_78[0] != 0) {
    FUN_1004c07d0(param_1,local_78[0],0xf0000020);
  }
  QMutex::lock();
  lVar4 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  QMutex::unlock();
  if (lVar4 != 0) {
    FUN_1004c07d0(param_1,lVar4,0xf0000020);
  }
  pQVar2 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000369ed;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000369ed:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100036a1d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100036a1d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100036a4d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100036a4d:
  if (*(int *)local_50[0] != -1) {
    if (*(int *)local_50[0] != 0) {
      LOCK();
      *(int *)local_50[0] = *(int *)local_50[0] + -1;
      UNLOCK();
      if (*(int *)local_50[0] != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50[0]);
  }
  return;
}

