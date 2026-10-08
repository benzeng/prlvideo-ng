
void FUN_1000a69b0(long param_1,int param_2,int param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  undefined8 uVar6;
  _func_void_Node_ptr *p_Var7;
  QArrayData *local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  lVar3 = QObject::sender();
  if ((lVar3 == 0) ||
     (lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0), lVar3 == 0)) {
    uVar6 = QObject::sender();
    FUN_100df99c0("SGAD","prl_client_app",0,
                  "Error: signal sender=%p is invalid for slot onVmStateChanged()",uVar6);
    return;
  }
  FUN_100188480(&local_40,lVar3);
  plVar2 = (long *)(param_1 + 0x10);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_1000aa210(plVar2,&local_40);
  p_Var5 = (_func_void_Node_ptr_void_ptr *)*plVar2;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_1000a6a7f;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_1000aaf90,0xaafd0,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_33 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1000a6a7b;
      p_Var7 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_1000a6a7b:
  *plVar2 = (long)p_Var5;
LAB_1000a6a7f:
  if (p_Var5 != p_Var4) {
    (**(code **)(**(long **)(p_Var4 + 0x18) + 0x80))(*(long **)(p_Var4 + 0x18),param_2,param_3);
  }
  if ((((param_2 + 0xcfffffffU < 9) && ((0x121U >> (param_2 + 0xcfffffffU & 0x1f) & 1) != 0)) &&
      (param_3 != 0x30000001)) && (param_3 != 0x30000006)) {
    FUN_1000a6b90(param_1,&local_40);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

