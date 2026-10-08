
undefined8 FUN_1006272c0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QVariant local_40;
  QVariant local_30;
  
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001554a0(uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  uVar5 = FUN_10016f500(lVar6);
  FUN_10061abe0(&local_30,uVar5,0);
  iVar4 = QVariant::toInt((bool *)&local_30);
  if (iVar4 == 0) {
    bVar1 = false;
LAB_100627337:
    cVar2 = FUN_10061b4d0(uVar5,0x8000);
    cVar3 = '\x01';
    if (cVar2 != '\0') {
      cVar3 = FUN_10061b4d0(uVar5,0x20);
    }
    if (!bVar1) goto LAB_100627367;
  }
  else {
    FUN_10061abe0(&local_40,uVar5,0);
    iVar4 = QVariant::toInt((bool *)&local_40);
    bVar1 = true;
    cVar3 = '\x01';
    if (iVar4 == -0x7ffeefa8) goto LAB_100627337;
  }
  QVariant::~QVariant(&local_40);
LAB_100627367:
  QVariant::~QVariant(&local_30);
  if (cVar3 == '\0') {
    cVar3 = FUN_10061b4d0(uVar5,0x80);
    if ((cVar3 == '\0') || (iVar4 = CustomUpdateServerInfo::policy(), iVar4 != 2)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

