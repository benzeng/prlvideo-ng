
void FUN_10045f540(QObject *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100785b00(pvVar1);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar1;
  }
  pvVar1 = DAT_1023109d8;
  uVar2 = FUN_10044e460(*(undefined8 *)(param_1 + 0x10));
  pQVar3 = (QObject *)FUN_100785c90(pvVar1,uVar2,9);
  QObject::disconnect(pQVar3,"2valueChanged(const QVariant&)",param_1,
                      "1onVmDiskSpaceUsageChanged(const QVariant&)");
  QObject::disconnect(*(QObject **)(param_1 + 0x30),"2timeout()",pQVar3,"1fetch()");
  QTimer::stop();
  return;
}

