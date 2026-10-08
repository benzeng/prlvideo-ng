
void FUN_100234c30(long param_1)

{
  bool bVar1;
  char *pcVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (DAT_10230ffd0 < 3) {
    return;
  }
  pcVar2 = "unknown";
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    bVar1 = false;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    FUN_1003193e0(&local_30);
    QString::toLocal8Bit();
    pcVar2 = (char *)(local_28 + *(long *)(local_28 + 0x10));
    bVar1 = true;
  }
  FUN_100df99c0("","prl_client_app",3," Coherence in VM [%s] is about to start!",pcVar2);
  if (!bVar1) {
    return;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100234ced;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100234ced:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

