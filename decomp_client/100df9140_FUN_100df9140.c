
undefined8 * FUN_100df9140(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_2 == 0) goto LAB_100df91ec;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_2);
  uVar2 = _objc_retainAutorelease(uVar2);
  pcVar3 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_bytes_10226a748);
  iVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_length_102269050);
  QByteArray::QByteArray((QByteArray *)&local_38,pcVar3,iVar1);
  QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df91e3;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100df91e3:
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
LAB_100df91ec:
  puVar4 = operator_new(8);
  *puVar4 = local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return puVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return puVar4;
}

