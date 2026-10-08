
void FUN_1007c7250(long param_1,int param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(param_1 + 0x28) == param_2) {
    return;
  }
  FUN_1007c7fc0(&local_38,"ToolState");
  QString::toLocal8Bit();
  pQVar1 = local_30 + *(long *)(local_30 + 0x10);
  FUN_1007c7fc0(&local_48,"ToolState",param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Install tool state changed from [%s] to [%s]",pQVar1,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007c7313;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007c7313:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007c7343;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007c7343:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007c7373;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1007c7373:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007c73a3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007c73a3:
  *(int *)(param_1 + 0x28) = param_2;
  FUN_1008641e0(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

