
void FUN_10033da60(QObject *param_1,undefined4 param_2)

{
  QObject *pQVar1;
  
  pQVar1 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar1 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar1 = *(QObject **)(param_1 + 0x40);
  }
  QObject::disconnect(pQVar1,"2taskFinished(PRL_RESULT)",param_1,"1setResult(PRL_RESULT)");
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  param_1[0x30] = (QObject)0x0;
  FUN_10082f2d0(param_1,param_2);
  QObject::deleteLater();
  return;
}

