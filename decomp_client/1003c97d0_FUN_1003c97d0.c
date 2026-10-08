
void FUN_1003c97d0(void)

{
  long lVar1;
  int iVar2;
  QVariant local_30;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb9b0);
  if (lVar1 != 0) {
    MappingHelpers::getFirstValue((QHash *)&local_30);
    iVar2 = QVariant::toUInt((bool *)&local_30);
    QVariant::~QVariant(&local_30);
    if (iVar2 != 0) {
      FUN_100142100(lVar1,iVar2);
    }
  }
  return;
}

