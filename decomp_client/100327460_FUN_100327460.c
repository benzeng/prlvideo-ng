
/* WARNING: Type propagation algorithm not settling */

int FUN_100327460(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [3];
  undefined4 local_30;
  undefined1 local_29;
  
  local_48[1] = 0;
  local_48[2] = 0xffffffffffffffff;
  local_30 = *(undefined4 *)(param_1 + 0x30);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_48[0] = 0;
  }
  else {
    FUN_1003193b0(local_48);
  }
  iVar4 = _PrlDevSecondaryDisplay_SendCaptureScreenRequest(local_48[0],local_48 + 1);
  if (local_48[0] != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar4) {
    return iVar4;
  }
  if (DAT_10230ffd0 < 2) {
    return iVar4;
  }
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1003193e0(&local_58);
  }
  QString::toLocal8Bit();
  pQVar3 = local_50;
  lVar2 = *(long *)(local_50 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = FUN_100dddcf0(iVar4);
  FUN_100df99c0("","prl_client_app",2,
                "Error during stop of VM [%s] screen [%d] capturing: PrlDevSecondaryDisplay_SendCaptureScreenRequest failed with RC = %.8X [%s]"
                ,pQVar3 + lVar2,uVar1,iVar4,uVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10032759f;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10032759f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return iVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return iVar4;
}

