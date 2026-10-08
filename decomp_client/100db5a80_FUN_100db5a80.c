
void FUN_100db5a80(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  QArrayData *local_30;
  
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Iface = %p",param_1,*param_1);
  QString::toUtf8();
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Name = %s",param_1,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100db5b1e;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100db5b1e:
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Access = 0x%X",param_1,
                *(undefined4 *)(param_1 + 2));
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Share disp = 0x%X",param_1,
                *(undefined4 *)((long)param_1 + 0x14));
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Disposition = 0x%X",param_1,
                *(undefined4 *)(param_1 + 3));
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] Block size = %u",param_1,
                *(undefined4 *)(param_1 + 4));
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] References to ICommonFile = %d",param_1,
                *(undefined4 *)((long)param_1 + 0x24));
  cVar1 = QMutex::tryLock((int)param_1 + 0x38);
  if (cVar1 != '\0') {
    QMutex::unlock();
  }
  pcVar2 = "locked";
  if (cVar1 != '\0') {
    pcVar2 = "unlocked";
  }
  FUN_100df99c0("","AbstractFile",0,"HandleDesc[%p] RefGuard state = %s",param_1,pcVar2);
  return;
}

