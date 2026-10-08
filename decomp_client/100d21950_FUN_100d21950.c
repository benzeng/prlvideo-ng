
undefined8 FUN_100d21950(QString *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QDomDocument local_38 [8];
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_30,param_1);
  QDomDocument::QDomDocument(local_38);
  QFileInfo::absoluteFilePath();
  cVar3 = FUN_100d21390(&local_40,local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d219c4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d219c4:
  uVar4 = 0;
  if (cVar3 != '\0') {
    QFileInfo::absolutePath();
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) {
      LOCK();
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      UNLOCK();
    }
    local_50 = param_2;
    uVar4 = FUN_100d214a0(local_38,&local_48,&local_50);
    if (param_2 != (long *)0x0) {
      LOCK();
      plVar1 = param_2 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d21a56;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100d21a56:
  QDomDocument::~QDomDocument(local_38);
  QFileInfo::~QFileInfo(local_30);
  return uVar4;
}

