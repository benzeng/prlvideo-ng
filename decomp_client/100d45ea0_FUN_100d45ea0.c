
int FUN_100d45ea0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  QString::toUtf8();
  if ((1 < *(uint *)local_20) || (*(long *)(local_20 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_20,*(uint *)(local_20 + 4) + 1,*(uint *)(local_20 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmCfg_SetName(uVar1,local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_100d45f1e;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100d45f1e:
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.10:\t0x%x",iVar2);
  }
  return iVar2;
}

