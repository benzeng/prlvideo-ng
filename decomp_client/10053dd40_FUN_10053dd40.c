
void FUN_10053dd40(long param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  QString *pQVar5;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar1 == 0)) {
    pQVar5 = *(QString **)(*(long *)(param_1 + 0x48) + 0x28);
LAB_10053ddb1:
    bVar2 = false;
    QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_10221ac00,0x1df7017);
  }
  else {
    pQVar5 = *(QString **)(*(long *)(param_1 + 0x48) + 0x28);
    if (*(char *)(lVar1 + 0x13c) == '\0') goto LAB_10053ddb1;
    QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_10221ac00,0x1df700b);
    bVar2 = true;
  }
  plVar4 = (long *)(param_1 + 0x48);
  QAbstractButton::setText(pQVar5);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10053de0f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10053de0f:
  cVar3 = FUN_1001756c0(0x24);
  if (!bVar2 && cVar3 == '\x01') {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x30),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x70),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x78),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x80),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x88),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*plVar4 + 0x90),0));
  }
  return;
}

