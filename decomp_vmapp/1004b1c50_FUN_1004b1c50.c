
void FUN_1004b1c50(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  QArrayData *local_40;
  
  QMutex::lock();
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "statusChanged %d m_bWasSuspendedFromChr=%d State=%d startInProgress=%d stopInProgress=%d"
                  ,param_3,*(undefined1 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x88),
                  *(undefined1 *)(param_1 + 0x8c),*(undefined1 *)(param_1 + 0x8d));
  }
  if ((param_3 != 1) ||
     (FUN_1004b5a20(*(undefined8 *)(param_1 + 0x80),param_2), *(char *)(param_1 + 0x128) != '\0'))
  goto LAB_1004b1d96;
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "New client connected. Send tool availability state to connected client %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1004b1d6d;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1004b1d6d:
  if (*(int *)(param_1 + 0x88) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x151) != '\0';
  }
  FUN_1004ad350(param_1,bVar1,param_2);
LAB_1004b1d96:
  QMutex::unlock();
  return;
}

