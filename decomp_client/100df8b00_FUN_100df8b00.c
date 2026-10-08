
void FUN_100df8b00(uint *param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  undefined8 *puVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint uVar8;
  
  p_Var4 = DAT_102319798;
  if (1 < *(uint *)(DAT_102319798 + 0x10)) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(DAT_102319798,FUN_100df8cb0,0xdf8ca0,0x18);
    if (*(int *)(DAT_102319798 + 0x10) != -1) {
      if (*(int *)(DAT_102319798 + 0x10) != 0) {
        LOCK();
        pcVar1 = DAT_102319798 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100df8b82;
      }
      QHashData::free_helper((_func_void_Node_ptr *)DAT_102319798);
    }
  }
LAB_100df8b82:
  DAT_102319798 = p_Var4;
  uVar2 = *(uint *)(DAT_102319798 + 0x20);
  uVar8 = *(uint *)(DAT_102319798 + 0x24) ^ *param_1;
  if (uVar2 == 0) {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)&DAT_102319798;
    p_Var7 = DAT_102319798;
  }
  else {
    p_Var4 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(DAT_102319798 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
    for (p_Var5 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(DAT_102319798 + 8) + ((ulong)uVar8 % (ulong)uVar2) * 8);
        (p_Var7 = DAT_102319798, p_Var5 != DAT_102319798 &&
        ((*(uint *)(p_Var5 + 8) != uVar8 || (p_Var7 = p_Var5, *param_1 != *(uint *)(p_Var5 + 0xc))))
        ); p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var5) {
      p_Var4 = p_Var5;
    }
  }
  if (p_Var7 == DAT_102319798) {
    if ((int)uVar2 <= *(int *)(DAT_102319798 + 0x14)) {
      QHashData::rehash((int)DAT_102319798);
      uVar8 = *(uint *)(DAT_102319798 + 0x24) ^ *param_1;
      if (*(uint *)(DAT_102319798 + 0x20) == 0) {
        p_Var4 = (_func_void_Node_ptr_void_ptr *)&DAT_102319798;
      }
      else {
        uVar3 = (ulong)uVar8 % (ulong)*(uint *)(DAT_102319798 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(DAT_102319798 + 8) + uVar3 * 8);
        p_Var4 = (_func_void_Node_ptr_void_ptr *)(*(long *)(DAT_102319798 + 8) + uVar3 * 8);
        while ((p_Var5 = p_Var7, p_Var5 != DAT_102319798 &&
               ((*(uint *)(p_Var5 + 8) != uVar8 || (*param_1 != *(uint *)(p_Var5 + 0xc)))))) {
          p_Var4 = p_Var5;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
        }
      }
    }
    puVar6 = (undefined8 *)QHashData::allocateNode((int)DAT_102319798);
    *puVar6 = *(undefined8 *)p_Var4;
    *(uint *)(puVar6 + 1) = uVar8;
    *(uint *)((long)puVar6 + 0xc) = *param_1;
    puVar6[2] = *param_2;
    *(undefined8 **)p_Var4 = puVar6;
    *(int *)(DAT_102319798 + 0x14) = *(int *)(DAT_102319798 + 0x14) + 1;
  }
  else {
    *(undefined8 *)(p_Var7 + 0x10) = *param_2;
  }
  return;
}

