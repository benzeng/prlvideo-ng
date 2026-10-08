
void FUN_10018d260(long param_1)

{
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    return;
  }
  if (DAT_10230ffd0 < 2) goto LAB_10018d33c;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",2,"Clearing device action sets for VM %s...",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10018d30c;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10018d30c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10018d33c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10018d33c:
  FUN_1007c6450(*(undefined8 *)(param_1 + 0x90));
  FUN_100805020(param_1);
  return;
}

