
void FUN_1003261e0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_40;
  undefined1 local_31;
  
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  local_48 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_60 = 0;
  }
  else {
    FUN_1003193b0(&local_60);
  }
  iVar4 = _PrlDevSecondaryDisplay_GetScreenSize(local_60,*(undefined4 *)(param_1 + 0x30),&local_58);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar4) {
    uVar7 = (ulong)local_48._4_4_;
    uVar8 = CONCAT44((local_40 - 1) + local_58._4_4_,(local_48._4_4_ - 1) + (int)local_58);
    uVar6 = (ulong)local_40 << 0x20;
    goto LAB_100326395;
  }
  uVar8 = 0xffffffffffffffff;
  uVar6 = 0;
  if (DAT_10230ffd0 < 3) {
    uVar7 = 0;
    goto LAB_100326395;
  }
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1003193e0(&local_70);
  }
  QString::toLocal8Bit();
  pQVar3 = local_68;
  lVar2 = *(long *)(local_68 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = FUN_100dddcf0(iVar4);
  FUN_100df99c0("","prl_client_app",3,
                "Failed to get size of VM [%s] screen [%d]. PrlDevSecondaryDisplay_GetScreenSize failed with RC = %.8X [%s]"
                ,pQVar3 + lVar2,uVar1,iVar4,uVar5);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100326355;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100326355:
  uVar6 = 0;
  if (*(int *)local_70 == -1) {
    uVar7 = 0;
  }
  else {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      uVar6 = 0;
      if (*(int *)local_70 != 0) {
        uVar7 = 0;
        goto LAB_100326395;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
    uVar6 = 0;
    uVar7 = 0;
  }
LAB_100326395:
  *(ulong *)(param_1 + 0x50) = uVar7 | uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  if (((int)uVar7 <= (int)uVar8) && ((int)(uVar6 >> 0x20) <= (int)((ulong)uVar8 >> 0x20))) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x50);
  }
  return;
}

