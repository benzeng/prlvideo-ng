
void FUN_100594270(void)

{
  long lVar1;
  QVariant local_38;
  undefined1 local_28 [8];
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bf80);
  if (lVar1 != 0) {
    MappingHelpers::getFirstValue((QHash *)&local_38);
    FUN_1005993a0(local_28,(QHash *)&local_38);
    FUN_10056c830(lVar1,local_28);
    FUN_10056e3a0(local_28);
    QVariant::~QVariant(&local_38);
  }
  return;
}

