
void FUN_10020b0e0(long param_1,int *param_2)

{
  long lVar1;
  QWidget *pQVar2;
  QCheckBox *this;
  long lVar3;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*param_2 != 0x3c1b) {
    return;
  }
  lVar1 = 0;
  if ((*(long *)(param_2 + 0x26) != 0) && (lVar1 = 0, *(int *)(*(long *)(param_2 + 0x26) + 4) != 0))
  {
    lVar1 = *(long *)(param_2 + 0x28);
  }
  lVar3 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (lVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if (lVar1 != lVar3) {
    return;
  }
  pQVar2 = (QWidget *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1298);
  if (pQVar2 == (QWidget *)0x0) {
    return;
  }
  this = operator_new(0x30);
  QCheckBox::QCheckBox(this,(QWidget *)0x0);
  QAbstractButton::setChecked(SUB81(this,0));
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1ddba9b);
  QAbstractButton::setText((QString *)this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020b1dd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10020b1dd:
  QObject::connect(&local_40,this,"2toggled(bool)",param_1,
                   "1onEditHddBeforeInstallationToggled(bool)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  CMessageBox::embedView(pQVar2);
  return;
}

