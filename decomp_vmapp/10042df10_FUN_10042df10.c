
undefined8 FUN_10042df10(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr *psVar3;
  size_t sVar4;
  undefined8 uVar5;
  QString local_38;
  undefined1 local_2b;
  undefined1 local_29;
  
  *param_1 = 10;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_2b = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  uVar5 = 0x80000018;
  if (*(int *)(local_38.field0_0x0 + 4) == 0) goto LAB_10042e042;
  uVar5 = 0;
  iVar1 = _socket(1,1,0);
  param_1[4] = iVar1;
  if (iVar1 < 0) {
    uVar2 = FUN_100768f60();
    uVar5 = 0x80029000;
    FUN_1008e3970("","IPCFileOpenClnt",0,"Error creating socket: %d",uVar2);
  }
  psVar3 = (sockaddr *)FUN_1008e2de0(&local_38);
  if (psVar3 == (sockaddr *)0x0) {
    uVar5 = 0x80029000;
    FUN_1008e3970("","IPCFileOpenClnt",0,"Failed to allocate sockaddr_un");
LAB_10042e032:
    FUN_10042d6a0(param_1);
  }
  else {
    iVar1 = param_1[4];
    sVar4 = _strlen(psVar3->sa_data);
    iVar1 = _connect(iVar1,psVar3,(int)sVar4 + 2);
    if (iVar1 < 0) {
      uVar2 = FUN_100768f60();
      uVar5 = 0x80029004;
      FUN_1008e3970("","IPCFileOpenClnt",0,"Connect() failed. Error %d",uVar2);
      goto LAB_10042e032;
    }
    QString::operator=((QString *)(param_1 + 2),&local_38);
  }
  _free(psVar3);
LAB_10042e042:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar5;
}

