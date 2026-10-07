
undefined8 FUN_1004a41d0(long param_1,long param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  QArrayData *pQVar6;
  void *pvVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar5 = PTR_shared_null_100ba20d0;
  if (param_2 == 0) {
    return 0xf0000003;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::resize((int)&local_48);
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  FUN_1002a5990(param_2,0,local_48 + *(long *)(local_48 + 0x10),uVar2);
  QString::fromUtf16((ushort *)&local_58,(int)local_48 + (int)*(undefined8 *)(local_48 + 0x10));
  QString::normalized(&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a42a0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004a42a0:
  lVar3 = *(long *)(param_1 + 0x38);
  local_40 = (QArrayData *)puVar5;
  sVar1 = (long)*(int *)(local_50 + 4) * 2 + 2;
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar6 = local_40;
  lVar4 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar4) = 0x20000;
  *(undefined4 *)(local_40 + lVar4 + 4) = 2;
  *(undefined4 *)(local_40 + lVar4 + 8) = 0;
  *(int *)(local_40 + lVar4 + 0xc) = (int)sVar1 + 0x10;
  pvVar7 = (void *)QString::utf16();
  _memcpy(pQVar6 + lVar4 + 0x10,pvVar7,sVar1);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100434830(*(undefined8 *)(lVar3 + 0xf0),0x1896d,local_40 + *(long *)(local_40 + 0x10),
                *(uint *)(local_40 + 4),&DAT_1011ccb98,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a43a6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1004a43a6:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a43d6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004a43d6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return 0;
}

