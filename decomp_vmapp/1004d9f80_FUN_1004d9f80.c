
undefined8 *
FUN_1004d9f80(undefined8 *param_1,undefined8 param_2,QString *param_3,undefined8 param_4,
             undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  long *local_58;
  long *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1004dd2d0(&local_50,param_3,param_4,param_5);
  plVar1 = local_50;
  local_50 = (long *)0x0;
  if (DAT_1011bc090 == '\0') {
    QMutex::lock();
    local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
    cVar2 = FUN_10050fa80(1,&local_38,0);
    if (cVar2 == '\0') {
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004da163;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1004da163:
      QMutex::unlock();
      goto LAB_1004da16f;
    }
    FUN_100507c20(&local_48);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::append(&local_40);
    QString::operator=((QString *)&DAT_1011bc088,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004da062;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1004da062:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004da092;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1004da092:
    DAT_1011bc090 = '\x01';
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004da0c9;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1004da0c9:
    QMutex::unlock();
  }
  cVar2 = operator==(param_3,(QString *)&DAT_1011bc088);
  if (cVar2 != '\0') {
    local_58 = plVar1;
    puVar3 = operator_new(0x18);
    FUN_1004dc4c0(puVar3,&local_58);
    *puVar3 = &PTR_FUN_10111cd20;
    puVar3[2] = FUN_1004da260;
    *param_1 = puVar3;
    if (local_58 == (long *)0x0) {
      return param_1;
    }
    (**(code **)(*local_58 + 8))();
    return param_1;
  }
LAB_1004da16f:
  *param_1 = plVar1;
  return param_1;
}

