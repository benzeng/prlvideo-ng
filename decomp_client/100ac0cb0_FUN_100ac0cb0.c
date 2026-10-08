
void FUN_100ac0cb0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10223a190;
  *(undefined **)(param_1 + 0x10) = &DAT_10223a208;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  FUN_100abb910(param_1 + 0x28,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1000949e0("QList<TResolvedPath>",0,0);
  FUN_10009bee0("UINT32",0,0);
  FUN_100ac1a00("QuickLookRect",0,0);
  return;
}

