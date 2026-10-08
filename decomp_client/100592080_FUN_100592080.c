
void FUN_100592080(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  QVariant local_40;
  QVariant local_30;
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12f8);
  if (lVar1 != 0) {
    MappingHelpers::getFirstValue((QHash *)&local_30);
    lVar2 = QVariant::toLongLong((bool *)&local_30);
    QObject::property((char *)&local_40);
    lVar3 = QVariant::toLongLong((bool *)&local_40);
    QVariant::~QVariant(&local_40);
    if (lVar2 == lVar3) {
      QAbstractButton::setChecked(SUB81(lVar1,0));
    }
    QVariant::~QVariant(&local_30);
  }
  return;
}

