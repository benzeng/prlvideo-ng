
undefined8 * FUN_100dd5760(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *param_1 = PTR_shared_null_1021e15e8;
  if ((long *)*param_2 != param_2 + 1) {
    plVar3 = (long *)*param_2;
    do {
      if (((int)plVar3[6] != -1) && ((int)plVar3[6] != 1)) {
        FUN_100dda260(&local_48,plVar3 + 4);
        QString::operator=(&local_40,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dd580d;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_100dd580d:
        QString::mid((int)&local_50,(int)&local_40);
        QString::operator=(&local_40,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dd5864;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_100dd5864:
        QString::toUpper();
        QString::operator=(&local_40,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dd58ac;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100dd58ac:
        FUN_1000341d0(param_1,&local_40);
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar3[2];
          bVar5 = (long *)*plVar4 != plVar3;
          plVar3 = plVar4;
        } while (bVar5);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      plVar3 = plVar4;
    } while (plVar4 != param_2 + 1);
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dd592c;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100dd592c:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

