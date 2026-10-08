
bool FUN_100525ab0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  QVariant local_28;
  char local_11;
  
  QObject::property((char *)&local_28);
  iVar2 = QVariant::userType();
  if (iVar2 == 1) {
    pcVar3 = (char *)QVariant::constData();
    local_11 = *pcVar3;
  }
  else {
    cVar1 = QVariant::convert((int)&local_28,(void *)0x1);
    if (cVar1 == '\0') {
      bVar4 = false;
      goto LAB_100525b0e;
    }
  }
  bVar4 = local_11 != '\0';
LAB_100525b0e:
  QVariant::~QVariant(&local_28);
  return bVar4;
}

