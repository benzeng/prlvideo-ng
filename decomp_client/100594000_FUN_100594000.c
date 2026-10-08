
QVariant * FUN_100594000(QVariant *param_1)

{
  code *pcVar1;
  long lVar2;
  _func_void_Node_ptr *local_20;
  undefined1 local_12;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bd30);
  if (lVar2 == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    FUN_100565b30(&local_20,lVar2);
    if (DAT_1022743dc == 0) {
      DAT_1022743dc = FUN_100598590("Shortcuts::ShortcutsMap",0xffffffffffffffff,1);
    }
    QVariant::QVariant(param_1,DAT_1022743dc,&local_20,0);
    if (*(int *)(local_20 + 0x10) != -1) {
      if (*(int *)(local_20 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_20 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return param_1;
        }
        local_12 = 0;
      }
      QHashData::free_helper(local_20);
    }
  }
  return param_1;
}

