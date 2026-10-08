
undefined8 FUN_1000a9690(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  long *plVar5;
  undefined8 uVar6;
  _func_void_Node_ptr *p_Var7;
  
  QMutex::lock();
  lVar2 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    return 0;
  }
  DAT_1023108b0 = DAT_1023108b0 + 1;
  QMutex::unlock();
  plVar5 = (long *)(lVar2 + 0x10);
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_1000aa210(plVar5,param_1);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*plVar5;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1000a973b;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_1000aaf90,0xaafd0,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar5;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000a9738;
      p_Var7 = (_func_void_Node_ptr *)*plVar5;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_1000a9738:
  *plVar5 = (long)p_Var4;
LAB_1000a973b:
  uVar6 = 0;
  if (p_Var4 != p_Var3) {
    uVar6 = *(undefined8 *)(p_Var3 + 0x18);
  }
  FUN_100055290(&DAT_102310898);
  return uVar6;
}

