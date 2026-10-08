
byte FUN_1006aee20(long param_1)

{
  byte bVar1;
  QArrayData *local_60;
  undefined **local_58 [2];
  int *local_48;
  int *local_30;
  undefined1 local_19;
  
  FUN_1007b3640(local_58,0,*(undefined8 *)(param_1 + 0x20),0,1);
  FUN_1007a1300(&local_60,local_58);
  if (*(int *)(local_60 + 4) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_10018ed10(*(undefined8 *)(param_1 + 0x20));
    bVar1 = bVar1 ^ 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006aeea0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006aeea0:
  local_58[0] = &PTR_FUN_10222d640;
  if (local_30 != (int *)0x0) {
    LOCK();
    *local_30 = *local_30 + -1;
    local_19 = *local_30 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_30 != (int *)0x0)) {
      operator_delete(local_30);
    }
  }
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    local_19 = *local_48 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_48 != (int *)0x0)) {
      operator_delete(local_48);
    }
  }
  QObject::~QObject((QObject *)local_58);
  return bVar1;
}

