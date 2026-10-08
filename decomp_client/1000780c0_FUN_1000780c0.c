
void FUN_1000780c0(long param_1,undefined8 *param_2,void *param_3)

{
  void *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (DAT_10230ffd0 < 3) goto LAB_100078194;
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Store completion handler for window: %s",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100078164;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100078164:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100078194;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100078194:
  local_40 = __Block_copy(param_3);
  FUN_10007b170(param_1 + 0x28,param_2,&local_40);
  return;
}

