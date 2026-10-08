
undefined1 FUN_1003e3d50(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *local_48;
  QObject *local_40;
  long local_38;
  undefined1 local_29;
  
  lVar3 = FUN_1003e3f10();
  if (lVar3 == 0) {
    pQVar4 = operator_new(0x18);
    FUN_1003a4d40(pQVar4,param_2,param_3);
    QObject::connect(&local_38,pQVar4,
                     "2attributesChanged(CVmEditorItem::Attributes, CVmEditorItem::Attributes)",
                     param_1,"1updateItemsAttributes()",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar2 = FUN_1003a4d50(pQVar4);
    uVar1 = FUN_1003b4e20(uVar2,*(undefined8 *)(param_1 + 0x18));
    FUN_1003a4e10(pQVar4,2,uVar1);
    uVar2 = FUN_1003a4d50(pQVar4);
    uVar1 = FUN_1003b5190(uVar2,*(undefined8 *)(param_1 + 0x18));
    FUN_1003a4e10(pQVar4,8,uVar1);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    local_48 = piVar5;
    local_40 = pQVar4;
    FUN_1003e66e0(param_1 + 0x28,&local_48);
    uVar1 = 1;
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar5);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

