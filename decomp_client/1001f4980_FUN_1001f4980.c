
void FUN_1001f4980(int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_100060bb0();
  lVar1 = FUN_100060e80("CAppPreferencesDialog",*(undefined8 *)PTR_self_1021e1388);
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if ((((lVar2 == 0) || (-1 < param_2)) || (lVar1 == 0)) || (*(char *)(lVar2 + 0x60) == '\0'))
  goto LAB_1001f4a7d;
  QWidget::show();
  QWidget::raise();
  uVar3 = CMessageManager::instance();
  local_40 = *(long *)(lVar2 + 0x10);
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  CMessageManager::showMessageBoxForJob(uVar3,&local_40,&local_48,0,lVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f4a6f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001f4a6f:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
LAB_1001f4a7d:
  CAbstractTask::subTaskCompleted(param_1);
  return;
}

