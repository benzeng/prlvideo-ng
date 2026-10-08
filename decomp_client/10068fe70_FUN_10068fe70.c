
void FUN_10068fe70(_func_void_Node_ptr_void_ptr *param_1,ulong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_10068feec;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_10068ffa0,0x68fd10,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10068fee8;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_10068fee8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_10068feec:
  uVar8 = *(uint *)(p_Var4 + 0x20);
  if ((int)uVar8 <= *(int *)(p_Var4 + 0x14)) {
    QHashData::rehash((int)p_Var4);
    p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar8 = *(uint *)(p_Var4 + 0x20);
  }
  uVar2 = *param_2;
  uVar7 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)(p_Var4 + 0x24);
  p_Var10 = param_1;
  if (uVar8 != 0) {
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)
              (*(long *)(p_Var4 + 8) + ((ulong)uVar7 % (ulong)uVar8) * 8);
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var4 + 8) + ((ulong)uVar7 % (ulong)uVar8) * 8);
    while ((p_Var5 = p_Var3, p_Var5 != p_Var4 &&
           ((*(uint *)(p_Var5 + 8) != uVar7 || (uVar2 != *(ulong *)(p_Var5 + 0x10)))))) {
      p_Var10 = p_Var5;
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
    }
  }
  puVar6 = (undefined8 *)QHashData::allocateNode((int)p_Var4);
  *puVar6 = *(undefined8 *)p_Var10;
  *(uint *)(puVar6 + 1) = uVar7;
  puVar6[2] = *param_2;
  puVar6[3] = *param_3;
  *(undefined8 **)p_Var10 = puVar6;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  return;
}

