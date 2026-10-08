
void FUN_1000eb860(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  QString::fromUtf16((ushort *)&local_40,(int)param_2 + 0x2c);
  QString::normalized(&local_38,&local_40,0,0);
  FUN_1000cc5f0(uVar2,uVar1,uVar3,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000eb8e2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000eb8e2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

