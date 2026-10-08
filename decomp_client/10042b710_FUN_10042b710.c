
void FUN_10042b710(long param_1)

{
  QString *pQVar1;
  QSize *pQVar2;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10042bd80(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  CProgressIndicator::setIndicatorSize((int)*(undefined8 *)(param_1 + 0xb8));
  pQVar1 = *(QString **)(param_1 + 0xb8);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Reading_the_disk_info____10226ee30);
  CProgressIndicator::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042b7a7;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10042b7a7:
  CProgressIndicator::setElidingEnabled(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
  pQVar2 = *(QSize **)(param_1 + 0x10);
  (**(code **)((long)*pQVar2 + 0x70))(pQVar2);
  QWidget::setFixedSize(pQVar2);
  FUN_10042d570(param_1,1);
  return;
}

