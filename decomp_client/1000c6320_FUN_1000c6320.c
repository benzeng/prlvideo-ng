
void FUN_1000c6320(undefined8 param_1,long param_2)

{
  char cVar1;
  short sVar2;
  undefined4 local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_30 = 0;
  sVar2 = _GetFrontProcess(&local_30);
  if (((sVar2 == 0) && ((int)local_30 == *(int *)(param_2 + 0x30))) &&
     ((int)((ulong)local_30 >> 0x20) == *(int *)(param_2 + 0x34))) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Helper \"%s\" {%u, %u} is active",
                  local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(param_2 + 0x30),
                  *(undefined4 *)(param_2 + 0x34));
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
    return;
  }
  cVar1 = FUN_1000bd150(param_1);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = FUN_1000a6420();
  if (cVar1 == '\0') {
    return;
  }
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Activating \"%s\" {%u, %u}->{%u, %u}",
                  local_40 + *(long *)(local_40 + 0x10),local_30,(int)((ulong)local_30 >> 0x20),
                  *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000c64a9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1000c64a9:
  local_44 = 0;
  FUN_1000c4970((int *)(param_2 + 0x30),0x68,&local_44,4);
  return;
}

