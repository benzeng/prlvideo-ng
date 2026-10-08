
void FUN_10022a5f0(long param_1,QString *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  CVmEventParameter *local_38;
  Data *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x90) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  uVar1 = CPasswordDialog::isNeedSavePassword();
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  QString::operator=((QString *)(param_1 + 0xb8),param_2);
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = operator_new(0xd0);
  local_40 = param_2->field0_0x0;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("encrypted_vm_password",0x15);
  CVmEventParameter::CVmEventParameter(local_38,1,&local_40,&local_48);
  FUN_100202fa0(&local_30,&local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022a706;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10022a706:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022a736;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
LAB_10022a736:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x90) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
  }
  local_50 = *(long *)(param_1 + 0xc0);
  if (local_50 != 0) {
    _PrlHandle_AddRef();
  }
  CSdkRequest::sendAnswer(uVar2,&local_50,0x3e88,&local_30);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

