
undefined1 FUN_100135610(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  QVariant local_20;
  
  lVar1 = FUN_1001353f0(param_1,param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    QObject::property((char *)&local_20);
    uVar2 = QVariant::toBool();
    QVariant::~QVariant(&local_20);
  }
  return uVar2;
}

