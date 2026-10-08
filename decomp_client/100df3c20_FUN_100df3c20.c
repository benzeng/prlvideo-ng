
void FUN_100df3c20(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [12];
  QArrayData *local_50;
  undefined1 local_48 [12];
  undefined1 local_31;
  
  iVar2 = QMetaObject::methodCount();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      auVar4 = QMetaObject::method(param_3);
      local_48 = auVar4;
      iVar3 = QMetaMethod::methodType();
      if (iVar3 != 3) {
        iVar3 = QMetaMethod::methodType();
        if (iVar3 != 1) {
          QMetaMethod::methodSignature();
          cVar1 = QByteArray::startsWith((char *)&local_50);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100df3cdc;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_100df3cdc:
          if (cVar1 == '\0') {
            (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_addMethod__10226a720,local_48._0_8_,local_48._8_4_);
          }
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = QMetaObject::methodCount();
    } while (iVar2 < iVar3);
  }
  return;
}

