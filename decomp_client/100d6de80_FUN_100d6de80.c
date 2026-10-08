
int FUN_100d6de80(void)

{
  int iVar1;
  uint *in_RCX;
  QString *in_R8;
  QArrayData *local_48;
  QString local_40;
  uint local_34;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_34 = *in_RCX;
  if (2 < local_34) {
    return 0x8158018;
  }
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = FUN_100d6d2b0();
  if ((iVar1 != 0x8000000) || (iVar1 = 0x8158018, 1 < local_34 - 1)) goto LAB_100d6dfa8;
  *in_RCX = local_34;
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  QString::fromUtf16((ushort *)&local_48,(int)local_30 + (int)*(undefined8 *)(local_30 + 0x10));
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(in_R8,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d6df72;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d6df72:
  iVar1 = 0x8000000;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d6dfa8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d6dfa8:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return iVar1;
}

