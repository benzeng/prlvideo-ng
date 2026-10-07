
undefined8 FUN_1004ce5f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(ushort *)(param_2 + 0x16) < 2) {
    return 0xf0000003;
  }
  lVar1 = FUN_1002a6120(param_2,0,0);
  lVar2 = FUN_1002a6120(param_2,1,0);
  if ((*(int *)(lVar1 + 8) == 0) && (*(int *)(lVar2 + 8) == 0)) {
    return 0;
  }
  QByteArray::QByteArray((QByteArray *)&local_38,*(int *)(lVar1 + 8),'\0');
  QByteArray::QByteArray((QByteArray *)&local_40,*(int *)(lVar2 + 8),'\0');
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  FUN_1002a5990(lVar1,0,local_38 + *(long *)(local_38 + 0x10),*(uint *)(local_38 + 4));
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_1002a5990(lVar2,0,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4));
  FUN_1004f8610(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004ce71b;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1004ce71b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return 0;
}

