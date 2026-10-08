
void FUN_10007fef0(QObject *param_1,uint param_2)

{
  char cVar1;
  QObject *pQVar2;
  void *pvVar3;
  
  QObject::sender();
  pQVar2 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (((param_2 & 1) != 0) && (pQVar2 != (QObject *)0x0)) {
    cVar1 = FUN_10018c1f0(pQVar2,1);
    if (cVar1 == '\0') {
      pvVar3 = operator_new(0x18);
      FUN_10008b530(pvVar3,pQVar2);
      FUN_10007f510(param_1,pvVar3);
      QObject::disconnect(pQVar2,"2vmAttributesChanged(CVmWrap::VmAttributes)",param_1,
                          "1onVmAttributesChanged(CVmWrap::VmAttributes)");
      return;
    }
  }
  return;
}

