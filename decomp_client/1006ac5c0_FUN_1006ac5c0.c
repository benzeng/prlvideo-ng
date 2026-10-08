
char * FUN_1006ac5c0(char *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  QVariant local_28;
  
  uVar2 = FUN_10016f500(*(undefined8 *)(param_2 + 0x18));
  FUN_10061abe0(&local_28,uVar2,0);
  iVar1 = QVariant::toInt((bool *)&local_28);
  if (iVar1 == 0) {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1e0f2bf);
  }
  else {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1e0f2cf);
  }
  QVariant::~QVariant(&local_28);
  return param_1;
}

