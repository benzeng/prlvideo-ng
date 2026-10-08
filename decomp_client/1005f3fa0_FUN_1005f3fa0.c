
void FUN_1005f3fa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  QString local_28;
  undefined1 local_19;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220780);
  FUN_1005fde90(&local_28,lVar1);
  if (*(int *)(lVar1 + 0x80) == 3) {
    uVar2 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x38);
    uVar2 = FUN_10015a340(uVar2);
    FUN_100122bf0(&local_30,uVar2,&local_28);
    if (*(int *)(local_30 + 0xc) != *(int *)(local_30 + 8)) {
      QString::operator=(&local_28,(QString *)(local_30 + 0x10 + (long)*(int *)(local_30 + 8) * 8));
    }
    FUN_100039a80(&local_30);
  }
  MacUtils::showInFinder(&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

