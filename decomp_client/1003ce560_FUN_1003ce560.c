
void FUN_1003ce560(void)

{
  long lVar1;
  undefined4 uVar2;
  QVariant local_30;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb760);
  if (lVar1 != 0) {
    MappingHelpers::getFirstValue((QHash *)&local_30);
    uVar2 = QVariant::toUInt((bool *)&local_30);
    FUN_100141080(lVar1,uVar2);
    QVariant::~QVariant(&local_30);
  }
  return;
}

