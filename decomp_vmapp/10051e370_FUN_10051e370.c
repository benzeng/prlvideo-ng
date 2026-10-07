
void FUN_10051e370(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,undefined8 *param_3)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  _func_void_Node_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_10051e3ec;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var3,FUN_10051e270,0x51e010,0x18);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10051e3e8;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10051e3e8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var3;
LAB_10051e3ec:
  uVar7 = *(uint *)(p_Var3 + 0x20);
  if ((int)uVar7 <= *(int *)(p_Var3 + 0x14)) {
    QHashData::rehash((int)p_Var3);
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar7 = *(uint *)(p_Var3 + 0x20);
  }
  uVar6 = *(uint *)(p_Var3 + 0x24) ^ *param_2;
  p_Var9 = param_1;
  if (uVar7 != 0) {
    p_Var2 = *(_func_void_Node_ptr_void_ptr **)
              (*(long *)(p_Var3 + 8) + ((ulong)uVar6 % (ulong)uVar7) * 8);
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var3 + 8) + ((ulong)uVar6 % (ulong)uVar7) * 8);
    while ((p_Var4 = p_Var2, p_Var4 != p_Var3 &&
           ((*(uint *)(p_Var4 + 8) != uVar6 || (*param_2 != *(uint *)(p_Var4 + 0xc)))))) {
      p_Var9 = p_Var4;
      p_Var2 = *(_func_void_Node_ptr_void_ptr **)p_Var4;
    }
  }
  puVar5 = (undefined8 *)QHashData::allocateNode((int)p_Var3);
  *puVar5 = *(undefined8 *)p_Var9;
  *(uint *)(puVar5 + 1) = uVar6;
  *(uint *)((long)puVar5 + 0xc) = *param_2;
  puVar5[2] = *param_3;
  *(undefined8 **)p_Var9 = puVar5;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  return;
}

