
void FUN_100067920(QObject *param_1)

{
  QEvent *pQVar1;
  
  pQVar1 = operator_new(0x18);
  QEvent::QEvent(pQVar1,DAT_1011c3658);
  *(undefined ***)pQVar1 = &PTR_FUN_100bef658;
  QCoreApplication::postEvent(param_1,pQVar1,0);
  return;
}

