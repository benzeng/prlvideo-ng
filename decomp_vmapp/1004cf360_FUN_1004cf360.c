
long * FUN_1004cf360(long *param_1,long param_2,undefined4 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 in_RAX;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  undefined4 local_38;
  undefined4 uStack_34;
  
  _local_38 = CONCAT44((int)((ulong)in_RAX >> 0x20),param_3);
  QMutex::lock();
  plVar6 = (long *)(param_2 + 0x30);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_1004d5480(plVar6,&local_38);
  p_Var5 = (_func_void_Node_ptr_void_ptr *)*plVar6;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_1004cf3f4;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_1004d7890,0x4d6b70,0x18);
  p_Var7 = (_func_void_Node_ptr *)*plVar6;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      _local_38 = CONCAT17(*(int *)pcVar1 != 0,_local_38);
      if (*(int *)pcVar1 != 0) goto LAB_1004cf3f1;
      p_Var7 = (_func_void_Node_ptr *)*plVar6;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_1004cf3f1:
  *plVar6 = (long)p_Var5;
LAB_1004cf3f4:
  if (p_Var4 == p_Var5) {
    *param_1 = 0;
  }
  else {
    plVar2 = *(long **)(p_Var4 + 0x10);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    FUN_1004d5550(plVar6,p_Var4);
    *(long *)(DAT_1011cc970 + 0xf0) = *(long *)(DAT_1011cc970 + 0xf0) + -1;
    *param_1 = (long)plVar2;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  QMutex::unlock();
  return param_1;
}

