
void FUN_1000a71e0(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  code *pcVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (DAT_100e152b8 != param_4) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x10);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1000aa210(plVar1,param_3);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x10);
  if (1 < *(uint *)(p_Var4 + 0x10)) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var4,FUN_1000aaf90,0xaafd0,0x20);
    p_Var5 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var5 + 0x10) != -1) {
      if (*(int *)(p_Var5 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var5 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        local_31 = *(int *)pcVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a7273;
        p_Var5 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var5);
    }
LAB_1000a7273:
    *plVar1 = (long)p_Var4;
  }
  if (p_Var4 == p_Var3) {
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAD","prl_client_app",1,
                    "Warning: no Shared Guest Applications client for vmUuid=\"%s\"",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a735d;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
    goto LAB_1000a735d;
  }
  local_48 = (QArrayData *)*param_3;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_1007f4f80(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a72cf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000a72cf:
  if (*(long **)(p_Var3 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(p_Var3 + 0x18) + 0x20))();
  }
  FUN_1000aa2f0(plVar1,p_Var3);
LAB_1000a735d:
  FUN_1000a6b90(param_1,param_3);
  return;
}

