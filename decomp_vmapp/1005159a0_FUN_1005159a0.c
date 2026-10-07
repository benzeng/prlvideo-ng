
void FUN_1005159a0(uint *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  undefined8 *puVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint uVar8;
  
  p_Var4 = DAT_1011bc2c0;
  if (1 < *(uint *)(DAT_1011bc2c0 + 0x10)) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(DAT_1011bc2c0,FUN_100515b50,0x515b40,0x18);
    if (*(int *)(DAT_1011bc2c0 + 0x10) != -1) {
      if (*(int *)(DAT_1011bc2c0 + 0x10) != 0) {
        LOCK();
        pcVar1 = DAT_1011bc2c0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100515a22;
      }
      QHashData::free_helper((_func_void_Node_ptr *)DAT_1011bc2c0);
    }
  }
LAB_100515a22:
  DAT_1011bc2c0 = p_Var4;
  uVar2 = *(uint *)(DAT_1011bc2c0 + 0x20);
  uVar8 = *(uint *)(DAT_1011bc2c0 + 0x24) ^ *param_1;
  if (uVar2 == 0) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)&DAT_1011bc2c0;
    p_Var7 = DAT_1011bc2c0;
  }
  else {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(DAT_1011bc2c0 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
    for (p_Var5 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(DAT_1011bc2c0 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
        (p_Var7 = DAT_1011bc2c0, p_Var5 != DAT_1011bc2c0 &&
        ((*(uint *)(p_Var5 + 8) != uVar8 || (p_Var7 = p_Var5, *param_1 != *(uint *)(p_Var5 + 0xc))))
        ); p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var5) {
      p_Var4 = p_Var5;
    }
  }
  if (p_Var7 == DAT_1011bc2c0) {
    if ((int)uVar2 <= *(int *)(DAT_1011bc2c0 + 0x14)) {
      QHashData::rehash((int)DAT_1011bc2c0);
      uVar8 = *(uint *)(DAT_1011bc2c0 + 0x24) ^ *param_1;
      if (*(uint *)(DAT_1011bc2c0 + 0x20) == 0) {
        p_Var4 = (_func_void_Node_ptr_void_ptr *)&DAT_1011bc2c0;
      }
      else {
        uVar3 = (ulong)uVar8 % (ulong)*(uint *)(DAT_1011bc2c0 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(DAT_1011bc2c0 + 8) + uVar3 * 8);
        p_Var4 = (_func_void_Node_ptr_void_ptr *)(*(long *)(DAT_1011bc2c0 + 8) + uVar3 * 8);
        while ((p_Var5 = p_Var7, p_Var5 != DAT_1011bc2c0 &&
               ((*(uint *)(p_Var5 + 8) != uVar8 || (*param_1 != *(uint *)(p_Var5 + 0xc)))))) {
          p_Var4 = p_Var5;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
        }
      }
    }
    puVar6 = (undefined8 *)QHashData::allocateNode((int)DAT_1011bc2c0);
    *puVar6 = *(undefined8 *)p_Var4;
    *(uint *)(puVar6 + 1) = uVar8;
    *(uint *)((long)puVar6 + 0xc) = *param_1;
    puVar6[2] = *param_2;
    *(undefined8 **)p_Var4 = puVar6;
    *(int *)(DAT_1011bc2c0 + 0x14) = *(int *)(DAT_1011bc2c0 + 0x14) + 1;
  }
  else {
    *(undefined8 *)(p_Var7 + 0x10) = *param_2;
  }
  return;
}

