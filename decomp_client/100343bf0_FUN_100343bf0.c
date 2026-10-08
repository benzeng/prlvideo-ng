
void FUN_100343bf0(QObject *param_1,QEvent *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  QEvent *pQVar3;
  int iVar4;
  QWidget *pQVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  pQVar3 = (QEvent *)0x0;
  if ((lVar1 != 0) && (pQVar3 = (QEvent *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar3 = *(QEvent **)(param_1 + 0x30);
  }
  if ((pQVar3 == param_2) && (*(short *)(param_3 + 0x10) == 0xe)) {
    pQVar5 = (QWidget *)0x0;
    if ((lVar1 != 0) && (pQVar5 = (QWidget *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pQVar5 = *(QWidget **)(param_1 + 0x30);
    }
    cVar2 = MacUtils::inLiveResize(pQVar5);
    iVar4 = (int)*(undefined8 *)(param_1 + 0x38);
    if (cVar2 == '\0') {
      QTimer::stop();
      pQVar5 = (QWidget *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pQVar5 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pQVar5 = *(QWidget **)(param_1 + 0x30);
      }
      cVar2 = MacUtils::inLiveResize(pQVar5);
      if (cVar2 == '\0') {
        (**(code **)(*(long *)param_1 + 0x70))(param_1);
        goto LAB_100343c8b;
      }
      iVar4 = (int)*(undefined8 *)(param_1 + 0x38);
    }
    QTimer::start(iVar4);
  }
LAB_100343c8b:
  QObject::eventFilter(param_1,param_2);
  return;
}

