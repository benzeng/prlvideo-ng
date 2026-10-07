
code * FUN_100479340(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var8 + 0x10)) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var8,FUN_100479fd0,0x471cc0,0x20);
    p_Var11 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var11 + 0x10) != -1) {
      if (*(int *)(p_Var11 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var11 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1004793b3;
        p_Var11 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var11);
    }
LAB_1004793b3:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  }
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
  p_Var12 = p_Var8;
  p_Var13 = param_1;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar7 % (ulong)uVar2;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var10 != p_Var8) {
      do {
        p_Var9 = p_Var10;
        p_Var12 = p_Var8;
        if (*(uint *)(p_Var10 + 8) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(p_Var10 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
          p_Var9 = p_Var8;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar6 != '\0') break;
        }
        p_Var8 = p_Var12;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        p_Var12 = p_Var8;
        p_Var13 = p_Var9;
      } while (p_Var10 != p_Var8);
    }
  }
  if (p_Var8 == p_Var12) {
    if (*(int *)(p_Var12 + 0x20) <= *(int *)(p_Var12 + 0x14)) {
      QHashData::rehash((int)p_Var12);
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var12 + 0x20);
      uVar7 = qHash(param_2,*(uint *)(p_Var12 + 0x24));
      p_Var13 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar7 % (ulong)uVar2;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var12 + 8) + uVar4 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var12 + 8) + uVar4 * 8);
        while (p_Var10 = p_Var8, p_Var10 != p_Var12) {
          if (*(uint *)(p_Var10 + 8) == uVar7) {
            cVar6 = operator==(param_2,(QString *)(p_Var10 + 0x10));
            if (cVar6 != '\0') {
              p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var13 = p_Var10;
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        }
      }
    }
    p_Var8 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var12);
    *(undefined8 *)p_Var8 = *(undefined8 *)p_Var13;
    *(uint *)(p_Var8 + 8) = uVar7;
    pQVar3 = param_2->field0_0x0;
    *(QTypedArrayData<unsigned_short> **)(p_Var8 + 0x10) = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    puVar5 = PTR_shared_null_100ba20d0;
    *(undefined **)(p_Var8 + 0x18) = PTR_shared_null_100ba20d0;
    if (1 < *(int *)puVar5 + 1U) {
      LOCK();
      *(int *)puVar5 = *(int *)puVar5 + 1;
      UNLOCK();
    }
    *(_func_void_Node_ptr_void_ptr **)p_Var13 = p_Var8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    if (*(int *)puVar5 != -1) {
      if (*(int *)puVar5 != 0) {
        LOCK();
        *(int *)puVar5 = *(int *)puVar5 + -1;
        UNLOCK();
        if (*(int *)puVar5 != 0) goto LAB_10047953c;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
    }
  }
LAB_10047953c:
  return p_Var8 + 0x18;
}

