
void FUN_100a17fa0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  size_t sVar5;
  int iVar6;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  _func_void_Node_ptr_void_ptr *local_30;
  undefined1 local_21;
  
  local_30 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (1 < *(int *)(local_30 + 0x10) + 1U) {
    LOCK();
    pcVar1 = local_30 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_21 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var4 = local_30;
  if ((((byte)local_30[0x28] & 1) == 0) && (1 < *(uint *)(local_30 + 0x10))) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(local_30,FUN_100076890,0x76530,0x28);
    if (*(int *)(local_30 + 0x10) != -1) {
      if (*(int *)(local_30 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_30 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_21 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100a1802f;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_30);
    }
  }
LAB_100a1802f:
  local_30 = p_Var4;
  puVar2 = PTR_s__location__102280a70;
  iVar6 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s__location__102280a70);
    iVar6 = (int)sVar5;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  FUN_100a10930(&local_40,&local_30,&local_48);
  uVar3 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a180b2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a180b2:
  puVar2 = PTR_s__command__102280a68;
  iVar6 = -1;
  if (PTR_s__command__102280a68 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s__command__102280a68);
    iVar6 = (int)sVar5;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  FUN_100a10930(&local_60,&local_30,&local_68);
  QVariant::toString();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a18134;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a18134:
  FUN_100a0e170(param_1,uVar3,&local_50,&local_30);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a18177;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a18177:
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
    QHashData::free_helper((_func_void_Node_ptr *)local_30);
  }
  return;
}

