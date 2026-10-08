
void FUN_100035c60(QObject *param_1)

{
  long lVar1;
  undefined *puVar2;
  QObject *pQVar3;
  QTimer *pQVar4;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222f200;
  pQVar3 = operator_new(0x40);
  QObject::QObject(pQVar3,param_1);
  *(undefined ***)pQVar3 = &PTR_FUN_10222f2c0;
  puVar2 = PTR_shared_null_1021e15d0;
  *(undefined **)(pQVar3 + 0x18) = PTR_shared_null_1021e15d0;
  *(undefined **)(pQVar3 + 0x30) = puVar2;
  pQVar3[0x38] = (QObject)0x0;
  pQVar3[0x39] = (QObject)0x0;
  *(QObject **)(param_1 + 0x10) = pQVar3;
  *(QObject **)(pQVar3 + 0x10) = param_1;
  pQVar4 = operator_new(0x20);
  QTimer::QTimer(pQVar4,pQVar3);
  pQVar3 = *(QObject **)(param_1 + 0x10);
  *(QTimer **)(pQVar3 + 0x20) = pQVar4;
  pQVar4 = operator_new(0x20);
  QTimer::QTimer(pQVar4,pQVar3);
  lVar1 = *(long *)(param_1 + 0x10);
  *(QTimer **)(lVar1 + 0x28) = pQVar4;
  (pQVar4->field5_0x1c).bitField0_1 = (pQVar4->field5_0x1c).bitField0_1 | 1;
  QTimer::setInterval((int)*(undefined8 *)(lVar1 + 0x28));
  FUN_100034f30(*(undefined8 *)(param_1 + 0x10));
  return;
}

