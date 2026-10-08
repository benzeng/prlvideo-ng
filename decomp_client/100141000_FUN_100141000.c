
void FUN_100141000(QObject *param_1,QEvent *param_2,long param_3)

{
  QEvent *pQVar1;
  
  pQVar1 = (QEvent *)0x0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (pQVar1 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    pQVar1 = *(QEvent **)(param_1 + 0x38);
  }
  if (pQVar1 != param_2) {
    pQVar1 = (QEvent *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar1 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar1 = *(QEvent **)(param_1 + 0x48);
    }
    if (pQVar1 != param_2) goto LAB_10014105d;
  }
  if (*(short *)(param_3 + 0x10) == 9) {
    FUN_100140de0(param_1);
  }
LAB_10014105d:
  QObject::eventFilter(param_1,param_2);
  return;
}

