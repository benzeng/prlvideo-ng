
void FUN_100544d90(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100546150(*(undefined8 *)(param_1 + 0x48),param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x40);
  QLabel::text();
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dffece);
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544e32;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100544e32:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544e62;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100544e62:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544e92;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100544e92:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x48) + 0x40);
  QLabel::text();
  local_48 = (QArrayData *)QString::fromAscii_helper("CEP_URL",7);
  FUN_100116360(&local_50);
  QString::replace(&local_40,&local_48,&local_50,1);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544f15;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100544f15:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544f45;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100544f45:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100544f75;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100544f75:
  cVar3 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  bVar4 = SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),0);
  if (cVar3 == '\0') {
    FUN_1005455f0();
    QWidget::setEnabled(bVar4);
  }
  else {
    QWidget::setDisabled(bVar4);
  }
  cVar3 = FUN_1001756c0(0x1e);
  if (cVar3 == '\0') {
    plVar2 = *(long **)(*(long *)(param_1 + 0x48) + 0x80);
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
    QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x48) + 8));
  }
  return;
}

