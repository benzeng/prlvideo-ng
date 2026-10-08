
void FUN_100580ee0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  QString *pQVar2;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar2 = (QString *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
  if (pQVar2 == (QString *)0x0) {
    return;
  }
  if (*param_3 < 0) {
    return;
  }
  if (param_3[1] < 0) {
    return;
  }
  plVar1 = *(long **)(param_3 + 4);
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x90))(&local_40,plVar1,param_3,0);
  QVariant::toString();
  QLineEdit::setText(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100580f79;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100580f79:
  QVariant::~QVariant(&local_40);
  QLineEdit::selectAll();
  return;
}

