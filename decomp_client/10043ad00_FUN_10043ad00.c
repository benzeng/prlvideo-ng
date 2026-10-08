
void FUN_10043ad00(QAbstractItemModel *param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  longlong local_38;
  undefined1 local_29;
  
  QComboBox::setModel(param_1);
  pcVar1 = *(code **)(*param_3 + 0x80);
  QObject::property((char *)&local_70);
  QVariant::toString();
  (*pcVar1)(&local_58,param_3,&local_60);
  iVar3 = QVariant::userType();
  if (iVar3 == 4) {
    plVar4 = (longlong *)QVariant::constData();
    lVar5 = *plVar4;
  }
  else {
    cVar2 = QVariant::convert((int)&local_58,(void *)0x4);
    lVar5 = 0;
    if (cVar2 != '\0') {
      lVar5 = local_38;
    }
  }
  QVariant::QVariant(&local_48,lVar5);
  QComboBox::findData(param_1,&local_48,0x100,0x10);
  QComboBox::setCurrentIndex((int)param_1);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10043adf9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10043adf9:
  QVariant::~QVariant(&local_70);
  return;
}

