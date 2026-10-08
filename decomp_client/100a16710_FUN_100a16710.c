
void FUN_100a16710(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  _func_void_Node_ptr_void_ptr *local_28;
  undefined1 local_19;
  
  local_28 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (1 < *(int *)(local_28 + 0x10) + 1U) {
    LOCK();
    pcVar1 = local_28 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_19 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var2 = local_28;
  if ((((byte)local_28[0x28] & 1) == 0) && (1 < *(uint *)(local_28 + 0x10))) {
    p_Var2 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(local_28,FUN_100076890,0x76530,0x28);
    if (*(int *)(local_28 + 0x10) != -1) {
      if (*(int *)(local_28 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_28 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_19 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a1679d;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_28);
    }
  }
LAB_100a1679d:
  local_28 = p_Var2;
  local_30 = (QArrayData *)QString::fromAscii_helper("prl_app_id",10);
  QVariant::QVariant(&local_40,"000000001");
  FUN_10007af00(&local_28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a1680c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a1680c:
  local_48 = (QArrayData *)QString::fromAscii_helper("social_login",0xc);
  FUN_100a0d330(param_1,0,&local_48,&local_28);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a16863;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a16863:
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_28);
  }
  return;
}

