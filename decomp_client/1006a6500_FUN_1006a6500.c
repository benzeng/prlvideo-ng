
void FUN_1006a6500(undefined8 param_1,long param_2)

{
  long lVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_100695a30(param_2);
  if (lVar1 != 0) {
    FUN_1006a6000(param_1,param_2,lVar1);
    return;
  }
  FUN_100694760(&local_30,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                "(!)Error: failed to update action %s since the context object is invalid",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006a65ae;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1006a65ae:
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

