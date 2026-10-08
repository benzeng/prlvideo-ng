
void FUN_100326b80(long param_1,QImage *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QImage local_48 [32];
  
  if ((((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
      (*(long *)(param_1 + 0x18) == 0)) || (lVar3 = FUN_100319390(), lVar3 == 0)) {
    QImage::operator=((QImage *)(param_1 + 0xa0),param_2);
    goto LAB_100326c43;
  }
  cVar1 = FUN_100123880(lVar3);
  if (cVar1 == '\0') {
LAB_100326c5b:
    QImage::operator=((QImage *)(param_1 + 0xa0),param_2);
  }
  else {
    FUN_10018c2b0(lVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    cVar1 = CVmTools::isLockGuestOnSuspend();
    if (cVar1 == '\0') goto LAB_100326c5b;
    QImage::QImage(local_48,param_2);
    QImage::fill(local_48,2);
    QImage::operator=((QImage *)(param_1 + 0xa0),local_48);
    QImage::~QImage(local_48);
  }
  iVar2 = FUN_10018a9d0(lVar3);
  if (((iVar2 == 0x30000009) || (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000006)) ||
     (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000010)) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
    }
    FUN_100323340(uVar4,param_1 + 0xa0);
  }
LAB_100326c43:
  FUN_10082a6e0(param_1,param_1 + 0xa0);
  return;
}

