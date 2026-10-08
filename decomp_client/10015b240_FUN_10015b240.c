
void FUN_10015b240(long param_1,QObject *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  QObject *local_38;
  undefined1 local_29;
  
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  local_40 = piVar3;
  local_38 = param_2;
  FUN_1001785f0(param_1 + 200,&local_40);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  FUN_100188480(&local_58,param_2);
  local_48 = *(QArrayData **)(param_1 + 0x68);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_50 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  iVar2 = *(int *)local_48;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
    iVar2 = *(int *)local_48;
  }
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015b30e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10015b30e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015b33e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10015b33e:
  uVar1 = FUN_1001b7bd0(param_2);
  FUN_10018c220(param_2,1,uVar1);
  FUN_1008004f0(param_1,&local_50);
  FUN_100800540(param_1,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10015b39d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10015b39d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

