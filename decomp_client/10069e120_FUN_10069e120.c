
void FUN_10069e120(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  QObject::property((char *)&local_40);
  uVar1 = 1;
  if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QObject::property((char *)&local_50);
    uVar1 = QVariant::toBool();
    QVariant::~QVariant(&local_50);
  }
  QVariant::~QVariant(&local_40);
  local_29 = uVar1;
  FUN_10069e570(param_1,"is%1Enabled",&local_29,param_2);
  return;
}

