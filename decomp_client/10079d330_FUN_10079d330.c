
void FUN_10079d330(long param_1,CAppliance *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  QArrayData *local_58;
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  CAppliance::operator=((CAppliance *)(param_1 + 0x10),param_2);
  uVar2 = CAppliance::getDownloadStatus();
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  FUN_100861660(param_1,uVar2);
  iVar3 = CAppliance::getDownloadStatus();
  if (iVar3 == 2) {
    local_48 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    uVar4 = CAppliance::getPackedSize();
    local_38 = uVar4;
    auVar6 = CAppliance::getDownloadedSize();
    uVar5 = auVar6._8_8_;
    local_40 = auVar6._0_8_;
    if (uVar4 != 0) {
      uVar5 = (ulong)(local_40 * 100) % uVar4;
      local_48 = (undefined4)((ulong)(local_40 * 100) / uVar4);
    }
    *(undefined8 *)(param_1 + 0x180) = local_30;
    *(ulong *)(param_1 + 0x178) = local_38;
    *(long *)(param_1 + 0x170) = local_40;
    *(ulong *)(param_1 + 0x168) = CONCAT44(uStack_44,local_48);
    FUN_1008616b0(param_1,&local_48,uVar5);
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  iVar3 = _PrlAppliance_Create((undefined8 *)(param_1 + 0x158));
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to create appliance handle");
  }
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  CBaseNode::toString(SUB81(&local_58,0),(bool)((char)param_1 + ' '));
  QString::toUtf8();
  iVar3 = _PrlHandle_FromString(uVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079d4ad;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10079d4ad:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079d4dd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10079d4dd:
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to fill appliance handle with data");
  }
  return;
}

