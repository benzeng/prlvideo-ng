
void FUN_1004b0ff0(long param_1,QString *param_2)

{
  QString *this;
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  QMutex::lock();
  this = (QString *)(param_1 + 0x120);
  cVar2 = operator==(param_2,this);
  if (cVar2 == '\0') goto LAB_1004b1253;
  pQVar1 = param_2->field0_0x0;
  iVar3 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"",0xffffffff,1);
  if (iVar3 == 0) goto LAB_1004b1253;
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                  "Active client disconnected! State = %d startInProgress = %d stopInProgress = %d",
                  *(undefined4 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x8c),
                  *(undefined1 *)(param_1 + 0x8d));
  }
  QString::fromUtf8_helper((char *)&local_48,0xa320a0);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b10f4;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004b10f4:
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if ((*(char *)(param_1 + 0x8d) != '\0') || ((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2))
    goto LAB_1004b1253;
    QString::fromUtf8_helper((char *)&local_38,0xa320a0);
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004b11c5;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1004b11c5:
    FUN_10052acc0(param_1 + 0xf8);
    pvVar4 = operator_new(0x18);
    *(undefined4 *)((long)pvVar4 + 4) = 0;
    FUN_1004ae8a0(param_1,pvVar4,param_1 + 0x98,0);
    goto LAB_1004b1253;
  }
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    FUN_10052acc0(param_1 + 0xf8);
    pvVar4 = operator_new(0x18);
    *(undefined4 *)((long)pvVar4 + 4) = 0;
    FUN_1004ae8a0(param_1,pvVar4,param_1 + 0x98,0);
    *(undefined1 *)(param_1 + 0x8d) = 1;
    goto LAB_1004b1253;
  }
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=(this,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004b1248;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004b1248:
  *(undefined2 *)(param_1 + 0x8c) = 0x100;
LAB_1004b1253:
  QMutex::unlock();
  return;
}

