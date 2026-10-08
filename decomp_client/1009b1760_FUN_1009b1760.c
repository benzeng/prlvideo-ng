
void FUN_1009b1760(long param_1,char *param_2)

{
  QVariant local_40;
  QVariant local_30;
  
  FUN_100999460();
  if (param_2 != (char *)0x0) {
    QVariant::QVariant(&local_30,*(char *)(param_1 + 0x58) == '\0');
    QObject::setProperty(param_2,(QVariant *)"passwordRequired");
    QVariant::~QVariant(&local_30);
    QVariant::QVariant(&local_40,(QString *)(param_1 + 0x50));
    QObject::setProperty(param_2,(QVariant *)"userName");
    QVariant::~QVariant(&local_40);
  }
  return;
}

