
void FUN_1000853a0(long param_1,undefined8 param_2)

{
  undefined *self;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_30 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_30,(ID)self,PTR_s_QStringWithString__1022696d0,uVar1);
  }
  lVar2 = FUN_10007f750(uVar5,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100085455;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100085455:
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_10008b940(lVar2);
  if (lVar3 == 0) {
    return;
  }
  pvVar4 = operator_new(0x50);
  uVar5 = FUN_10008b940(lVar2);
  FUN_100188480(&local_38,uVar5);
  FUN_100240130(pvVar4,&local_38,0,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000854cb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000854cb:
  CAbstractTask::execute();
  return;
}

