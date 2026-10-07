
undefined1 FUN_1000eb6b0(long param_1,long param_2,long param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  QString *this;
  QArrayData *pQVar4;
  undefined1 uVar5;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar5 = 1;
  if ((uVar2 & 0x10) != 0) goto LAB_1000eb8cf;
  if ((uVar2 & 0x20) == 0) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Unxpected data type. Item %s, flag=0x%x, line=%u",
                  *(undefined8 *)(param_1 + 0x2c),uVar2,0x21c);
    goto LAB_1000eb8cf;
  }
  if ((*(uint *)(param_1 + -0x20) & 0x10) == 0) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Unxpected prev data type. Item %s, flag=0x%x, line=%u",
                  *(undefined8 *)(param_1 + 0x2c),*(uint *)(param_1 + -0x20),0x227);
    goto LAB_1000eb8cf;
  }
  pcVar1 = (char *)(param_3 + (ulong)*(uint *)(param_2 + 0xc));
  iVar3 = *(int *)(param_3 + (ulong)*(uint *)(param_2 + -4));
  if ((long)(ulong)param_4 < (long)((long)iVar3 + (ulong)*(uint *)(param_2 + 0xc))) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Ptr is out of range. Item %s (%p,0x%x,%p,0x%x), line=%u",
                  *(undefined8 *)(param_1 + 0x2c),pcVar1,iVar3,param_3,param_4,0x232);
    goto LAB_1000eb8cf;
  }
  QByteArray::QByteArray((QByteArray *)&local_38,pcVar1,iVar3);
  QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000eb7fb;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000eb7fb:
  this = *(QString **)(param_1 + 4);
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  pQVar4 = local_30 + *(long *)(local_30 + 0x10);
  if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) == 0xffffffff)) {
    _strlen((char *)pQVar4);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pQVar4);
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(this,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000eb89f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000eb89f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000eb8cf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000eb8cf:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar5;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return uVar5;
}

