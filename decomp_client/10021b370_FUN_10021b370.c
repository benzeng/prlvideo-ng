
undefined8 FUN_10021b370(QObject *param_1,QEvent *param_2,long param_3)

{
  QEvent *pQVar1;
  undefined8 uVar2;
  
  pQVar1 = (QEvent *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar1 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar1 = *(QEvent **)(param_1 + 0x30);
  }
  if ((pQVar1 != param_2) ||
     (uVar2 = CONCAT71((int7)((ulong)pQVar1 >> 8),1), *(short *)(param_3 + 0x10) != 0x13)) {
    uVar2 = QObject::eventFilter(param_1,param_2);
  }
  return uVar2;
}

