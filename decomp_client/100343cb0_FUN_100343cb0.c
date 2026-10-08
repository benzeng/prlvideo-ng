
void FUN_100343cb0(long *param_1)

{
  char cVar1;
  QWidget *pQVar2;
  
  QTimer::stop();
  pQVar2 = (QWidget *)0x0;
  if ((param_1[5] != 0) && (pQVar2 = (QWidget *)0x0, *(int *)(param_1[5] + 4) != 0)) {
    pQVar2 = (QWidget *)param_1[6];
  }
  cVar1 = MacUtils::inLiveResize(pQVar2);
  if (cVar1 != '\0') {
    QTimer::start((int)param_1[7]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100343d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}

