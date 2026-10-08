
void FUN_1001d32f0(long param_1,undefined8 param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("[APP_QUIT]","prl_client_app",3,"Silent start for VM %s has begun",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_1a = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_1a) goto LAB_1001d339d;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_1001d339d:
  FUN_1000e5580(param_1 + 0x28,param_2);
  return;
}

