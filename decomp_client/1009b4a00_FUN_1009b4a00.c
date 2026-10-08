
void FUN_1009b4a00(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  QVariant local_28;
  
  if (param_2 != (char *)0x0) {
    uVar1 = FUN_1009983c0();
    cVar2 = FUN_100991a90(uVar1);
    pcVar3 = "externalStorageWay";
    if (cVar2 != '\0') {
      pcVar3 = "networkWay";
    }
    QVariant::QVariant(&local_28,pcVar3);
    QObject::setProperty(param_2,(QVariant *)"migrationWay");
    QVariant::~QVariant(&local_28);
  }
  return;
}

