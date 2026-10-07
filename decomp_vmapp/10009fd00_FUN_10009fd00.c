
void FUN_10009fd00(undefined8 param_1,int param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != 1) {
    return;
  }
  QMutex::lock();
  lVar2 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    return;
  }
  DAT_1011cc810 = DAT_1011cc810 + 1;
  QMutex::unlock();
  lVar2 = *(long *)(lVar2 + 0xe8);
  if (lVar2 != 0) {
    local_40 = (QArrayData *)*param_4;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = (long *)*param_5;
    if (local_48 != (long *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    lVar3 = *param_3;
    FUN_100053130(lVar2,&local_40,&local_48,*(long *)(lVar3 + 0x10) + lVar3,
                  *(undefined4 *)(lVar3 + 4));
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009fdf9;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10009fdf9:
  FUN_100026030(&DAT_1011cc7f8);
  return;
}

