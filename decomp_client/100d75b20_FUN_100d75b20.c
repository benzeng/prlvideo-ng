
void FUN_100d75b20(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  
  cVar1 = DAT_102311961;
  cVar3 = DAT_102311960;
  QString::toLatin1();
  cVar2 = FUN_100d75340(local_38 + *(long *)(local_38 + 0x10));
  DAT_102311960 = cVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100d75b98;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100d75b98:
  if (cVar3 != cVar2) {
    FUN_100d76280(param_1,DAT_102311960);
  }
  QString::toLatin1();
  cVar3 = FUN_100d75430(local_40 + *(long *)(local_40 + 0x10));
  DAT_102311961 = cVar3;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100d75c02;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d75c02:
  if (cVar1 != cVar3) {
    FUN_100d762d0(param_1,DAT_102311961);
  }
  return;
}

