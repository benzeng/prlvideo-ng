
bool FUN_100155010(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  char cVar2;
  QString local_58;
  QString local_50;
  long local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_3c = 0;
  FUN_10015aa20(&local_48);
  iVar1 = _PrlSrv_IsConnected(local_48,&local_38,&local_3c);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (iVar1 < 0) {
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"(!)Error: PrlSrv_IsConnected failed. RC = %.8X"
                  ,iVar1);
    return false;
  }
  if ((local_38 != 0) && (param_3 == '\0')) {
    cVar2 = local_3c != 0;
    goto LAB_100155149;
  }
  FUN_10015a1a0(&local_50,param_2);
  if (*(int *)(local_50.field0_0x0 + 4) == 0) {
    FUN_10015a060(&local_58,param_2);
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100155106;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_100155106:
  cVar2 = FUN_100154f20(param_1,&local_50,1);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) goto LAB_100155149;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100155149:
  return cVar2 != '\0';
}

