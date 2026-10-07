
undefined8 FUN_100785a10(void)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  iVar1 = FUN_100785b20();
  if (iVar1 != 0) {
    uVar2 = FUN_100785ca0(iVar1);
    _IOObjectRelease(iVar1);
    return uVar2;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  FUN_1008e3970("","HostUtils",0,"GetStorageSize(): error, service is NULL [%s]",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0xffffffffffffffff;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 0xffffffffffffffff;
}

