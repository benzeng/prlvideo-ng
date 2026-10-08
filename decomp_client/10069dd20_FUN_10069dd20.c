
undefined1 FUN_10069dd20(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  QVariant local_28;
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    QObject::property((char *)&local_28);
    cVar1 = QVariant::toBool();
    if (cVar1 == '\0') {
      lVar3 = QAction::menu();
      QVariant::~QVariant(&local_28);
      uVar2 = 1;
      if (lVar3 == 0) {
        uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      }
    }
    else {
      QVariant::~QVariant(&local_28);
      uVar2 = 1;
    }
  }
  return uVar2;
}

