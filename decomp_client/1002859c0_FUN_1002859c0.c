
undefined8 FUN_1002859c0(QString *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QFileInfo local_28 [8];
  
  iVar2 = *(int *)&param_1[1].field0_0x0;
  if (iVar2 == 2) {
    QFileInfo::QFileInfo(local_28,param_1);
    lVar3 = QFileInfo::size();
    if ((lVar3 == 0) || (cVar1 = QFileInfo::exists(), cVar1 == '\0')) {
      QFileInfo::~QFileInfo(local_28);
      return 0x80000014;
    }
    QFileInfo::~QFileInfo(local_28);
    iVar2 = *(int *)&param_1[1].field0_0x0;
  }
  cVar1 = FUN_100114890(param_1,iVar2 == 1,param_2);
  uVar4 = 0x80000009;
  if (cVar1 != '\0') {
    uVar4 = 0;
  }
  return uVar4;
}

