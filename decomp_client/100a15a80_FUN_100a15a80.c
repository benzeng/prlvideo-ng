
void FUN_100a15a80(long param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  size_t sVar3;
  int iVar4;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  if (param_2 != 200) {
    if (param_2 == 0x194) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047003;
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0x80000001;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar2 = PTR_s_imageData_102280cc0;
  local_30 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar4 = -1;
  if (PTR_s_imageData_102280cc0 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_imageData_102280cc0);
    iVar4 = (int)sVar3;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  QVariant::toByteArray();
  QVariant::QVariant(&local_48,(QByteArray *)&local_50);
  FUN_10007af00(&local_30,&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a15b3d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100a15b3d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a15b6d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a15b6d:
  QVariant::QVariant(&local_60,(QHash *)&local_30);
  QVariant::operator=((QVariant *)(param_1 + 0x60),&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return;
}

