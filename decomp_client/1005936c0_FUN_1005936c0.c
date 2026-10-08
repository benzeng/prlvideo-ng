
QVariant * FUN_1005936c0(QVariant *param_1)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *local_38;
  undefined1 local_2a;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221b890);
  if (lVar2 == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    FUN_10055bad0(&local_38,lVar2);
    if (DAT_1022743bc == 0) {
      DAT_1022743bc = FUN_100597550("Remaps::MouseRemapList",0xffffffffffffffff,1);
    }
    QVariant::QVariant(param_1,DAT_1022743bc,&local_38,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_2a = 0;
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar2 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = local_38 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar3 != (void *)0x0) {
            operator_delete(*(void **)pDVar3);
          }
          pDVar3 = pDVar3 + -8;
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0);
      }
      QListData::dispose(local_38);
    }
  }
  return param_1;
}

