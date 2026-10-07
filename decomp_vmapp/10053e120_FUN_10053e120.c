
void FUN_10053e120(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),1);
  param_1[2] = PTR_shared_null_100ba20d8;
  FUN_10053e310(param_1 + 3);
  *(undefined1 *)(param_1 + 4) = 0;
  QString::toUtf8();
  iVar2 = _access((char *)(local_40 + *(long *)(local_40 + 0x10)),0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10053e1b2;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10053e1b2:
  if (iVar2 == -1) {
    QString::toUtf8();
    lVar1 = *(long *)(local_48 + 0x10);
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    FUN_1008e3970("","InvSharingHost",0,"the vfstool(%s) couldn\'t be executed: %s",local_48 + lVar1
                  ,pcVar4);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  return;
}

