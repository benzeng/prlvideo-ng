
void FUN_100062d00(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_100062d72;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_100062bb0,0x62be0,0x18);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100062d6f;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_100062d6f:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_100062d72:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var9 = param_1;
  p_Var12 = p_Var7;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var9 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var10 != p_Var7) {
      do {
        p_Var12 = p_Var7;
        if (*(uint *)(p_Var10 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var10 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
          p_Var10 = p_Var7;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar5 != '\0') break;
        }
        p_Var7 = p_Var12;
        p_Var9 = p_Var10;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        p_Var12 = p_Var7;
      } while (p_Var10 != p_Var7);
    }
  }
  if (p_Var7 == p_Var12) {
    if (*(int *)(p_Var12 + 0x20) <= *(int *)(p_Var12 + 0x14)) {
      QHashData::rehash((int)p_Var12);
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var12 + 0x20);
      uVar6 = qHash(param_2,*(uint *)(p_Var12 + 0x24));
      p_Var9 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar6 % (ulong)uVar2;
        p_Var9 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var12 + 8) + uVar4 * 8);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var12 + 8) + uVar4 * 8);
        while (p_Var7 != p_Var12) {
          if (*(uint *)(p_Var7 + 8) == uVar6) {
            cVar5 = operator==(param_2,(QString *)(p_Var7 + 0x10));
            if (cVar5 != '\0') {
              p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
            p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
          }
          p_Var9 = p_Var7;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        }
      }
    }
    puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var12);
    *puVar8 = *(undefined8 *)p_Var9;
    *(uint *)(puVar8 + 1) = uVar6;
    pQVar3 = param_2->field0_0x0;
    puVar8[2] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    *(undefined8 **)p_Var9 = puVar8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  return;
}

