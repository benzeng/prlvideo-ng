
int FUN_1000afcc0(void)

{
  int iVar1;
  QArrayData *local_38;
  undefined8 local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  QString::toUtf8();
  local_38 = local_20 + *(long *)(local_20 + 0x10);
  local_30 = 0;
  iVar1 = _PxAppGrpBridgeRemove(&local_38);
  if ((iVar1 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("SGAC","prl_client_app",1,"PxAppGrpBridgeRemove() err %i",iVar1);
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return iVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return iVar1;
}

