
int FUN_100d47ab0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_40;
  undefined1 local_38 [16];
  QArrayData *local_28;
  undefined1 local_19;
  
  local_38 = QUuid::createUuid();
  QUuid::toString();
  uVar1 = *(undefined8 *)(param_1 + 8);
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmCfg_SetUuid(uVar1,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d47b53;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d47b53:
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.9:\t0x%x",iVar2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return iVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return iVar2;
}

