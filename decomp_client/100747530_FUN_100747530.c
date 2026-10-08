
void * FUN_100747530(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  void *pvVar5;
  _func_void_Node_ptr *p_Var6;
  long local_48;
  void *local_40;
  undefined1 local_31;
  
  plVar2 = (long *)(param_1 + 0x18);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_100748640(plVar2);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1007475b6;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100748a20,0x748900,0x20);
  p_Var6 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007475b3;
      p_Var6 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007475b3:
  *plVar2 = (long)p_Var4;
LAB_1007475b6:
  if (p_Var3 == p_Var4) {
    pvVar5 = operator_new(0x18);
    FUN_1007469c0(pvVar5,param_2,param_1);
    local_40 = pvVar5;
    QObject::connect(&local_48,pvVar5,"2requestCatalogInfo()",param_1,
                     "1requestProductsPermissions()",0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    FUN_100748720(plVar2,param_2,&local_40);
  }
  else {
    pvVar5 = *(void **)(p_Var3 + 0x18);
  }
  return pvVar5;
}

