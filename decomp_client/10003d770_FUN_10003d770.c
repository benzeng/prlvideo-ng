
void FUN_10003d770(long param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined4 *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (DAT_10230ffd0 < 2) goto LAB_10003d895;
  (**(code **)(**(long **)(param_1 + 0x18) + 0xc0))(&local_40,*(long **)(param_1 + 0x18),param_2);
  QString::toUtf8();
  pQVar2 = local_38;
  lVar1 = *(long *)(local_38 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("SGA_SERVER","prl_client_app",2,
                "New client connected from host: %s, handle=%s, count=%d",pQVar2 + lVar1,
                local_48 + *(long *)(local_48 + 0x10),
                *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10003d835;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10003d835:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10003d865;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10003d865:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10003d895;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10003d895:
  local_50 = operator_new(0x10);
  *(undefined **)(local_50 + 2) = PTR_shared_null_1021e1288;
  *local_50 = 0;
  local_50[1] = 0;
  FUN_10003ea00(param_1 + 0x10,param_2,&local_50);
  return;
}

