
undefined8 FUN_100683450(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  QVariant local_28;
  
  uVar2 = FUN_100675e00();
  uVar2 = FUN_10016f500(uVar2);
  FUN_10061abe0(&local_28,uVar2,0xf);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  uVar2 = 3;
  if (cVar1 == '\0') {
    uVar2 = FUN_100675e00(param_1);
    uVar2 = FUN_10016f500(uVar2);
    cVar1 = FUN_10061b500(uVar2,0x20000);
    uVar2 = 0xffffffff;
    if (cVar1 != '\0') {
      uVar2 = 0xb;
    }
  }
  return uVar2;
}

