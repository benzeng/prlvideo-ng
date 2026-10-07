
code * FUN_10051d850(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  Data *pDVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  uint uVar8;
  uint uVar9;
  _func_void_Node_ptr *p_Var11;
  QArrayData *pQVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  Data *pDVar14;
  long lVar15;
  Data *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  ulong uVar10;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var5 + 0x10)) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_10051e1b0,0x51e020,0x18);
    p_Var11 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var11 + 0x10) != -1) {
      if (*(int *)(p_Var11 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var11 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_2d = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_2d) goto LAB_10051d8c1;
        p_Var11 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var11);
    }
LAB_10051d8c1:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
  }
  uVar9 = *(uint *)(p_Var5 + 0x20);
  uVar8 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
  uVar10 = (ulong)uVar8;
  p_Var7 = p_Var5;
  p_Var13 = param_1;
  if (uVar9 != 0) {
    p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + (uVar10 % (ulong)uVar9) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + (uVar10 % (ulong)uVar9) * 8);
        (p_Var7 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != uVar8 || (p_Var7 = p_Var6, *param_2 != *(uint *)(p_Var6 + 0xc))))
        ); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var13 = p_Var6;
    }
  }
  if (p_Var7 == p_Var5) {
    if ((int)uVar9 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar9 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
      uVar10 = (ulong)uVar9;
      p_Var13 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar3 = uVar10 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar3 * 8);
        p_Var13 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar3 * 8);
        while ((p_Var6 = p_Var7, p_Var6 != p_Var5 &&
               ((*(uint *)(p_Var6 + 8) != uVar9 || (*param_2 != *(uint *)(p_Var6 + 0xc)))))) {
          p_Var13 = p_Var6;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    local_38 = (Data *)PTR_shared_null_100ba2188;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)FUN_10051e0c0(param_1,uVar10,param_2,&local_38,p_Var13)
    ;
    pDVar4 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2c = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2c) goto LAB_10051da31;
      }
      iVar2 = *(int *)(local_38 + 0xc);
      if (iVar2 != *(int *)(local_38 + 8)) {
        lVar15 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar2 * -8;
        pDVar14 = local_38 + (long)iVar2 * 8 + 8;
        do {
          pQVar12 = *(QArrayData **)pDVar14;
          if (*(int *)pQVar12 == 0) {
LAB_10051da10:
            QArrayData::deallocate(pQVar12,1,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_2b = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_2b) {
              pQVar12 = *(QArrayData **)pDVar14;
              goto LAB_10051da10;
            }
          }
          pDVar14 = pDVar14 + -8;
          lVar15 = lVar15 + 8;
        } while (lVar15 != 0);
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_10051da31:
  return p_Var7 + 0x10;
}

