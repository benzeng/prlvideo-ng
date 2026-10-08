
QVariant * FUN_100591590(QVariant *param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
  if ((lVar2 == 0) || (iVar1 = CPrlFileDevSelectorWidget::getCurrentItemType(), iVar1 != 2))
  goto LAB_100591664;
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059160c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10059160c:
  if (iVar1 != 0) {
    CPrlFileDevSelectorWidget::getCurrentSystemName();
    QVariant::QVariant(param_1,10,&local_38,0);
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
    return param_1;
  }
LAB_100591664:
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

