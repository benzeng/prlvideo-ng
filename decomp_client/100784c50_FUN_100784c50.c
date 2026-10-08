
void FUN_100784c50(long param_1)

{
  char cVar1;
  QPixmap *pQVar2;
  long *plVar3;
  QPixmap local_50 [32];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = FUN_100785160(*(undefined8 *)(param_1 + 0x48));
  if (cVar1 != '\0') {
    return;
  }
  QMetaObject::tr((char *)&local_28,(char *)&PTR_staticMetaObject_10222ab80,0x1e16823);
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_10222ab80,0x1e16857);
  pQVar2 = operator_new(0x78);
  CMessageBox::CMessageBox((CMessageBox *)pQVar2,param_1,5,0xb);
  QWidget::setAttribute(pQVar2,0x37,1);
  plVar3 = (long *)CMessageDataProvider::instance();
  (**(code **)(*plVar3 + 0x70))(local_50,plVar3,0,1);
  CMessageBox::setIcon(pQVar2);
  QPixmap::~QPixmap(local_50);
  CMessageBox::setMessage((QString *)pQVar2);
  CMessageBox::setDescription((QString *)pQVar2);
  (**(code **)(*(long *)pQVar2 + 0x1a0))(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100784d69;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100784d69:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

