
code * FUN_1000aa770(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  char cVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  Data *pDVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  ulong uVar14;
  long lVar15;
  Data *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var8 + 0x10)) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var8,FUN_1000abc20,0xab020,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_33 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_1000aa7e3;
        p_Var13 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_1000aa7e3:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  }
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
  uVar14 = (ulong)uVar7;
  p_Var10 = param_1;
  p_Var9 = p_Var8;
  if (uVar2 != 0) {
    uVar4 = uVar14 % (ulong)uVar2;
    p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var12 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var12 != p_Var8) {
      do {
        if (*(uint *)(p_Var12 + 8) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(p_Var12 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
          if (cVar6 != '\0') break;
        }
        p_Var10 = p_Var12;
        p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var9 = p_Var8;
      } while (p_Var12 != p_Var8);
    }
  }
  if (p_Var9 == p_Var8) {
    if (*(int *)(p_Var8 + 0x20) <= *(int *)(p_Var8 + 0x14)) {
      QHashData::rehash((int)p_Var8);
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var8 + 0x20);
      uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
      uVar14 = (ulong)uVar7;
      p_Var10 = param_1;
      if (uVar2 != 0) {
        uVar4 = uVar14 % (ulong)uVar2;
        p_Var10 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
        while (p_Var9 != p_Var8) {
          if (*(uint *)(p_Var9 + 8) == uVar7) {
            cVar6 = operator==(param_2,(QString *)(p_Var9 + 0x10));
            if (cVar6 != '\0') break;
            p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
          }
          p_Var10 = p_Var9;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        }
      }
    }
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    p_Var9 = (_func_void_Node_ptr_void_ptr *)FUN_1000abb50(param_1,uVar14,param_2,&local_40,p_Var10)
    ;
    pDVar5 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1000aa96f;
      }
      iVar3 = *(int *)(local_40 + 0xc);
      if (iVar3 != *(int *)(local_40 + 8)) {
        lVar15 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
        pDVar11 = local_40 + (long)iVar3 * 8 + 8;
        do {
          if (*(void **)pDVar11 != (void *)0x0) {
            operator_delete(*(void **)pDVar11);
          }
          pDVar11 = pDVar11 + -8;
          lVar15 = lVar15 + 8;
        } while (lVar15 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1000aa96f:
  return p_Var9 + 0x18;
}

