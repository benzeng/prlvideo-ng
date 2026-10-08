
undefined8 FUN_100062860(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  undefined8 uVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_1000628d9;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_100062ac0,0x62b70,0x18);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000628d5;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1000628d5:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var4;
LAB_1000628d9:
  uVar2 = *(uint *)(p_Var4 + 0x20);
  uVar7 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
  p_Var8 = param_1;
  p_Var10 = p_Var4;
  if (uVar2 != 0) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             (*(long *)(p_Var4 + 8) + ((ulong)uVar7 % (ulong)uVar2) * 8);
    for (p_Var5 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var4 + 8) + ((ulong)uVar7 % (ulong)uVar2) * 8);
        (p_Var10 = p_Var4, p_Var5 != p_Var4 &&
        ((*(uint *)(p_Var5 + 8) != uVar7 || (p_Var10 = p_Var5, *param_2 != *(uint *)(p_Var5 + 0xc)))
        )); p_Var5 = *(_func_void_Node_ptr_void_ptr **)p_Var5) {
      p_Var8 = p_Var5;
    }
  }
  if (p_Var10 == p_Var4) {
    if ((int)uVar2 <= *(int *)(p_Var4 + 0x14)) {
      QHashData::rehash((int)p_Var4);
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar7 = *(uint *)(p_Var4 + 0x24) ^ *param_2;
      p_Var8 = param_1;
      if (*(uint *)(p_Var4 + 0x20) != 0) {
        uVar3 = (ulong)uVar7 % (ulong)*(uint *)(p_Var4 + 0x20);
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
        while ((p_Var5 = p_Var10, p_Var5 != p_Var4 &&
               ((*(uint *)(p_Var5 + 8) != uVar7 || (*param_2 != *(uint *)(p_Var5 + 0xc)))))) {
          p_Var8 = p_Var5;
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var5;
        }
      }
    }
    uVar6 = FUN_1000629d0(param_1,uVar7,param_2,param_3,p_Var8);
  }
  else {
    FUN_100062c30(p_Var10 + 0x10,param_3);
    uVar6 = *(undefined8 *)p_Var8;
  }
  return uVar6;
}

