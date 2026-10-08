
void FUN_1006b35c0(QObject *param_1)

{
  undefined8 uVar1;
  QObject *pQVar2;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100370280();
  QAction::data();
  QVariant::toString();
  pQVar2 = (QObject *)FUN_1003704b0(uVar1,&local_38,DAT_100e152b8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006b3640;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006b3640:
  QVariant::~QVariant(&local_48);
  if (pQVar2 != (QObject *)0x0) {
    QObject::disconnect(pQVar2,"2windowMenuTitleChanged(const QString&)",param_1,
                        "1onWindowTitleUpdated(const QString&)");
  }
  QAction::setText((QString *)param_1);
  return;
}

