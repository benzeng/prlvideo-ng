
int FUN_1003296a0(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return -0x7fffffff;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return -0x7fffffff;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return -0x7fffffff;
  }
  CSdkCommunicator::stopCommunication();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_30,uVar4);
  iVar3 = _PrlDevDisplay_DisconnectFromVm(local_30);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar3) {
    return iVar3;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_40,uVar4);
  QString::toLocal8Bit();
  pQVar2 = local_38;
  lVar1 = *(long *)(local_38 + 0x10);
  uVar4 = FUN_100dddcf0(iVar3);
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error while closing IO gate to VM [%s]. Failed to call DisconnectFromVm. RC = %.8X [%s]"
                ,pQVar2 + lVar1,iVar3,uVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003297c1;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1003297c1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return iVar3;
}

