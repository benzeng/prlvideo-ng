
undefined8 * FUN_1007345c0(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined8 *puVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  uint uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_100734641;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100734870,0x734860,0x18);
  p_Var8 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10073463a;
      p_Var8 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10073463a:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_100734641:
  uVar2 = *(uint *)(p_Var4 + 0x20);
  uVar9 = *(uint *)(p_Var4 + 0x24) ^ *param_2 ^ param_2[1];
  p_Var6 = p_Var4;
  p_Var10 = param_1;
  if (uVar2 != 0) {
    p_Var10 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var4 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var4 + 8) + ((ulong)uVar9 % (ulong)uVar2) * 8);
        (p_Var6 = p_Var4, p_Var7 != p_Var4 &&
        (((*(uint *)(p_Var7 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var7 + 0xc))) ||
         (p_Var6 = p_Var7, param_2[1] != *(uint *)(p_Var7 + 0x10)))));
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var10 = p_Var7;
    }
  }
  if (p_Var6 == p_Var4) {
    if ((int)uVar2 <= *(int *)(p_Var4 + 0x14)) {
      QHashData::rehash((int)p_Var4);
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar9 = *(uint *)(p_Var4 + 0x24) ^ *param_2 ^ param_2[1];
      p_Var10 = param_1;
      if (*(uint *)(p_Var4 + 0x20) != 0) {
        uVar3 = (ulong)uVar9 % (ulong)*(uint *)(p_Var4 + 0x20);
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        while ((p_Var7 = p_Var6, p_Var7 != p_Var4 &&
               (((*(uint *)(p_Var7 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var7 + 0xc))) ||
                (param_2[1] != *(uint *)(p_Var7 + 0x10)))))) {
          p_Var10 = p_Var7;
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
        }
      }
    }
    puVar5 = (undefined8 *)QHashData::allocateNode((int)p_Var4);
    *puVar5 = *(undefined8 *)p_Var10;
    *(uint *)(puVar5 + 1) = uVar9;
    *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)param_2;
    *(undefined4 *)((long)puVar5 + 0x14) = *param_3;
    *(undefined8 **)p_Var10 = puVar5;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    *(undefined4 *)(p_Var6 + 0x14) = *param_3;
    puVar5 = *(undefined8 **)p_Var10;
  }
  return puVar5;
}

