
QString * FUN_1001c74e0(QString *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to find out product edition");
  }
  else {
    uVar2 = FUN_10016f500(lVar3);
    cVar1 = FUN_10061b4d0(uVar2,0x80);
    if (cVar1 == '\0') {
      uVar2 = FUN_10016f500(lVar3);
      cVar1 = FUN_10061b4d0(uVar2,0x10000);
      if (cVar1 != '\0') {
        QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Pro_Edition_102270a48);
        QString::operator=(param_1,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_38.field0_0x0 != 0) {
              return param_1;
            }
            local_21 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
    }
    else {
      QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Business_Edition_102270a40);
      QString::operator=(param_1,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_30.field0_0x0 != 0) {
            return param_1;
          }
          local_21 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
  }
  return param_1;
}

