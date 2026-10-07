
void FUN_1004b2810(long param_1)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  bool bVar4;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (1 < DAT_1011b55f8) {
    uVar1 = *(uint *)(param_1 + 0x88);
    bVar4 = true;
    if (*(char *)(param_1 + 0x8c) == '\0') {
      bVar4 = *(char *)(param_1 + 0x8d) != '\0';
    }
    QString::toUtf8();
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "ProcessPackageSendingFailure. CoherenceStarted=%d; InProgress=%d activeClient=%s"
                  ,(uVar1 & 0xfffffffe) == 2,bVar4,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b28e1;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1004b28e1:
  if (((((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2) && (*(char *)(param_1 + 0x8c) == '\0')) &&
      (*(char *)(param_1 + 0x8d) == '\0')) || (*(int *)(*(long *)(param_1 + 0x120) + 4) == 0))
  goto LAB_1004b29fa;
  cVar2 = FUN_1004b5960(*(undefined8 *)(param_1 + 0x80),(QString *)(param_1 + 0x120));
  if (cVar2 == '\0') goto LAB_1004b29fa;
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                  "ProcessPackageSendingFailure. Currently active client died. Stop Coherence in guest."
                 );
  }
  FUN_10052acc0(param_1 + 0xf8);
  FUN_10052acc0(param_1 + 0x108);
  QString::fromUtf8_helper((char *)&local_40,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x120),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b29c2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004b29c2:
  *(undefined2 *)(param_1 + 0x8c) = 0;
  pvVar3 = operator_new(0x18);
  *(undefined4 *)((long)pvVar3 + 4) = 0;
  FUN_1004ae8a0(param_1,pvVar3,param_1 + 0x98,0);
  *(undefined4 *)(param_1 + 0x88) = 1;
LAB_1004b29fa:
  QMutex::unlock();
  return;
}

