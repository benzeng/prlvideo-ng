
void FUN_1002aacf0(CAbstractTask *param_1,QObject *param_2,CAbstractTask param_3)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  QArrayData *local_38;
  undefined1 local_2c;
  
  uVar1 = 0;
  CAbstractTask::CAbstractTask(param_1,(CTaskGenericId *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102207a50;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  param_1[0x28] = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  *(uint *)(param_1 + 0x30) = (uint)(lVar2 != 0);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar2 == 0) {
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    if (lVar2 == 0) {
      local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_10015aab0(&local_38,lVar2);
    }
  }
  else {
    FUN_100188480(&local_38,lVar2);
  }
  pvVar3 = operator_new(0x18);
  FUN_100178ec0(pvVar3,&local_38);
  CAbstractTask::setId((CTaskGenericId *)param_1);
  lVar2 = CAntivirusInfo::installedAntivirus(*(undefined4 *)(param_1 + 0x30));
  *(long *)(param_1 + 0x58) = lVar2;
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(param_1 + 0x30) == 0;
  }
  *(uint *)(param_1 + 0x2c) = (uint)bVar4;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2c = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

