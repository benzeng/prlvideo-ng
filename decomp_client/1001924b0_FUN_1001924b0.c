
undefined8 FUN_1001924b0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  long lVar4;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    iVar1 = _PrlVmCfg_GetAccessRights(*(undefined8 *)(param_1 + 0x40),(long *)(param_1 + 0x70));
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get access rights for VM");
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x70);
  }
  iVar1 = _PrlAcl_SetAccessForOthers(lVar4,param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_SetAccessForOthers failed. RC = %.8X",
                  iVar1);
    return 0;
  }
  FUN_100188480(&local_38,param_1);
  QString::toUtf8();
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  pQVar3 = local_30 + *(long *)(local_30 + 0x10);
  FUN_10018d830(&local_48,param_1);
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"Setting access rights for VM %s %s to %d ...",pQVar3,
                local_40 + *(long *)(local_40 + 0x10),param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019260a;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10019260a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019263a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10019263a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019266a;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10019266a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019269a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10019269a:
  uVar2 = _PrlVm_UpdateSecurity(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x70));
  local_50 = 0x80000000;
  local_58.field7 = 0;
  uVar2 = FUN_100191960(param_1,uVar2,0x837,&local_58);
  QVariant::~QVariant((QVariant *)&local_58);
  return uVar2;
}

