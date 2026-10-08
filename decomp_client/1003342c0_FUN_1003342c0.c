
void FUN_1003342c0(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100099f10(&local_28);
  FUN_1003193b0(&local_30,*(undefined8 *)(param_1 + 0x10));
  lVar1 = local_30;
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar2 = _PrlVm_SendToolsGeneralCommand
                    (lVar1,1,local_28 + *(long *)(local_28 + 0x10),*(uint *)(local_28 + 4));
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("","prl_client_app",1,"Failed to send command cmd=%d",*param_2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

