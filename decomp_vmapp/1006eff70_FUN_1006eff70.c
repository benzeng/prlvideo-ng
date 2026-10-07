
undefined1 FUN_1006eff70(QString *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  QArrayData *local_40;
  QDir local_38 [15];
  undefined1 local_29;
  
  QDir::QDir(local_38,param_1);
  do {
    QDir::absolutePath();
    cVar1 = '\0';
    if ((param_2 != 0) && (cVar1 = '\0', *(int *)(local_40 + 4) != 0)) {
      uVar2 = FUN_1006eec80(param_2,&local_40);
      cVar1 = (char)((uVar2 & 2) >> 1);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006f0000;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1006f0000:
    if (cVar1 == '\0') {
      uVar3 = 0;
      break;
    }
    cVar1 = QDir::cdUp();
    if (cVar1 == '\0') {
      uVar3 = 0;
      break;
    }
    cVar1 = QDir::isRoot();
    uVar3 = 1;
  } while (cVar1 == '\0');
  QDir::~QDir(local_38);
  return uVar3;
}

