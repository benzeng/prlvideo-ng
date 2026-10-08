
undefined8 FUN_1006268d0(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QVariant local_38;
  QVariant local_28;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 != 0) {
    uVar3 = FUN_10016f500(lVar4);
    FUN_10061abe0(&local_28,uVar3,0);
    iVar2 = QVariant::toInt((bool *)&local_28);
    if (iVar2 == 0) {
      QVariant::~QVariant(&local_28);
    }
    else {
      uVar3 = FUN_10016f500(lVar4);
      FUN_10061abe0(&local_38,uVar3,0);
      iVar2 = QVariant::toInt((bool *)&local_38);
      QVariant::~QVariant(&local_38);
      QVariant::~QVariant(&local_28);
      if (iVar2 != -0x7ffeefa8) {
        return 0;
      }
    }
    uVar3 = FUN_10016f500(lVar4);
    cVar1 = FUN_10061b4d0(uVar3,0x10000);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = FUN_10016f500(lVar4);
    cVar1 = FUN_10061b4d0(uVar3,0x80);
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return 0;
}

