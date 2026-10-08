
void FUN_1001478b0(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *param_1;
  CBaseNode::toString(SUB81(&local_30,0),(bool)(param_2 + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmDev_FromString(uVar1,local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100147946;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100147946:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100147976;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100147976:
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to update device handle configuration. RC [%.8X]",iVar2);
  }
  return;
}

