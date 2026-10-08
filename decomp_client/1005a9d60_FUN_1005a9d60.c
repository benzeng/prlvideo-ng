
bool FUN_1005a9d60(void)

{
  int iVar1;
  int iVar2;
  QVariant local_48;
  QVariant local_38;
  
  QObject::property((char *)&local_38);
  iVar1 = QVariant::toInt((bool *)&local_38);
  QObject::property((char *)&local_48);
  iVar2 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_38);
  return iVar2 < iVar1;
}

