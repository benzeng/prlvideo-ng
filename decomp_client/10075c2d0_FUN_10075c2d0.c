
void FUN_10075c2d0(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  long local_48;
  QVariant local_40;
  
  cVar1 = '\x01';
  iVar3 = 0;
  do {
    pcVar2 = (char *)FUN_10075d060(param_1,iVar3);
    QVariant::QVariant(&local_40,iVar3);
    QObject::setProperty(pcVar2,(QVariant *)"sectionId");
    QVariant::~QVariant(&local_40);
    QObject::connect(&local_48,pcVar2,"2clicked()",param_1,"1onButtonClicked()",0);
    bVar4 = cVar1 != '\0';
    cVar1 = '\0';
    if ((bVar4) && (local_48 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  return;
}

