
undefined8 * FUN_100d2bb70(undefined8 *param_1,long param_2,QString *param_3)

{
  long lVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  QFileInfo local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_40,param_3);
  QFileInfo::absoluteFilePath();
  QFileInfo::~QFileInfo(local_40);
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(lVar1 + 0x10) != 0) {
    lVar4 = *(long *)(lVar1 + 0x20);
    if (lVar4 != lVar1 + 8) {
      do {
        cVar3 = operator==((QString *)(lVar4 + 0x20),&local_38);
        if (cVar3 != '\0') {
          piVar2 = *(int **)(lVar4 + 0x18);
          *param_1 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          goto LAB_100d2bbfa;
        }
        lVar4 = QMapNodeBase::nextNode();
      } while (lVar4 != lVar1 + 8);
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_100d2bbfa:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

