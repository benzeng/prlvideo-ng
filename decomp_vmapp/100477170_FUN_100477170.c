
long * FUN_100477170(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  QObject *this;
  long *plVar4;
  long lVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  long *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  plVar6 = (long *)(param_2 + 0x28);
  p_Var2 = (_func_void_Node_ptr_void_ptr *)FUN_1004788a0(plVar6);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)*plVar6;
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_100477207;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var3,FUN_100479d20,0x472060,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar6;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100477204;
      p_Var7 = (_func_void_Node_ptr *)*plVar6;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100477204:
  *plVar6 = (long)p_Var3;
LAB_100477207:
  if (p_Var3 == p_Var2) {
    this = operator_new(0x10);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_100bc1ed0;
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      (*(code *)PTR_FUN_100bc1ef0)(this);
    }
    else {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = (long)this;
      *plVar4 = (long)&PTR_FUN_10111c798;
    }
    local_40 = plVar4;
    lVar5 = FUN_100478980(plVar6,param_3,&local_40);
    lVar5 = *(long *)(lVar5 + 0x18);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    lVar5 = *(long *)(p_Var2 + 0x18);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  QMutex::unlock();
  return param_1;
}

