
undefined8 FUN_1006276d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QVariant local_48;
  QLocale local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    local_30 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
    QLocale::QLocale(local_38);
    FUN_100d3f730(param_1,&local_30,local_38);
    QLocale::~QLocale(local_38);
    if (*(int *)local_30 == -1) {
      return param_1;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
    return param_1;
  }
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(&local_48,uVar3,0);
  iVar2 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (iVar2 < 0) {
    if (iVar2 < -0x7ffeefa8) {
      if (iVar2 != -0x7ffeefff) {
LAB_1006277e6:
        uVar3 = 0;
        goto LAB_100627807;
      }
    }
    else if ((0x1f < iVar2 + 0x7ffeefa8U) ||
            ((0x90002001U >> (iVar2 + 0x7ffeefa8U & 0x1f) & 1) == 0)) goto LAB_1006277e6;
  }
  else if (iVar2 != 0) goto LAB_1006277e6;
  cVar1 = FUN_10061b4d0(uVar3,0x80);
  if (cVar1 == '\0') {
    cVar1 = FUN_10061b4d0(uVar3,0x10000);
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 2;
  }
LAB_100627807:
  FUN_1006273e0(param_1,uVar3);
  return param_1;
}

