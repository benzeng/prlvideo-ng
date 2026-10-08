
void FUN_100680640(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_11;
  
  if (param_2 == 1) {
    QObject::sender();
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022223e0);
    local_20 = *(QArrayData **)(lVar2 + 0x68);
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_13 = *(int *)local_20 != 0;
      UNLOCK();
    }
    iVar1 = CAbstractWizardModel::currentPageId();
    if (iVar1 == 1) {
      CAbstractWizardModel::currentPage();
      lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_102223090);
      if (lVar2 != 0) {
        FUN_100645290(lVar2,&local_20);
      }
    }
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

