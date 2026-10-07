
undefined8 * FUN_100515cf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_2 == 0) goto LAB_100515d9f;
  uVar1 = (*(code *)PTR__objc_retain_100ba25f8)(param_2);
  uVar1 = _objc_retainAutorelease(uVar1);
  pcVar2 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar1,PTR_s_UTF8String_100bed218);
  if (pcVar2 != (char *)0x0) {
    _strlen(pcVar2);
  }
  QString::fromUtf8_helper((char *)&local_38,(int)pcVar2);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100515d96;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100515d96:
  (*(code *)PTR__objc_release_100ba25f0)(uVar1);
LAB_100515d9f:
  puVar3 = operator_new(8);
  *puVar3 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return puVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return puVar3;
}

