
code * FUN_100721670(_func_void_Node_ptr_void_ptr *param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  QKeySequence *this;
  _func_void_Node_ptr *p_Var9;
  uint uVar10;
  long lVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  Data *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var6 + 0x10)) {
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var6,FUN_100722210,0x722190,0x18);
    p_Var9 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var9 + 0x10) != -1) {
      if (*(int *)(p_Var9 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var9 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_33 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_1007216e2;
        p_Var9 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var9);
    }
LAB_1007216e2:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
  }
  uVar2 = *(uint *)(p_Var6 + 0x20);
  uVar10 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
  p_Var12 = param_1;
  p_Var8 = p_Var6;
  if (uVar2 != 0) {
    p_Var12 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var6 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
    for (p_Var7 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var6 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
        (p_Var8 = p_Var6, p_Var7 != p_Var6 &&
        ((*(uint *)(p_Var7 + 8) != uVar10 || (p_Var8 = p_Var7, *param_2 != *(uint *)(p_Var7 + 0xc)))
        )); p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var7) {
      p_Var12 = p_Var7;
    }
  }
  if (p_Var8 == p_Var6) {
    if ((int)uVar2 <= *(int *)(p_Var6 + 0x14)) {
      QHashData::rehash((int)p_Var6);
      p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar10 = *(uint *)(p_Var6 + 0x24) ^ *param_2;
      p_Var12 = param_1;
      if (*(uint *)(p_Var6 + 0x20) != 0) {
        uVar4 = (ulong)uVar10 % (ulong)*(uint *)(p_Var6 + 0x20);
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar4 * 8);
        p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar4 * 8);
        while ((p_Var7 = p_Var8, p_Var7 != p_Var6 &&
               ((*(uint *)(p_Var7 + 8) != uVar10 || (*param_2 != *(uint *)(p_Var7 + 0xc)))))) {
          p_Var12 = p_Var7;
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
        }
      }
    }
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    p_Var8 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var6);
    *(undefined8 *)p_Var8 = *(undefined8 *)p_Var12;
    *(uint *)(p_Var8 + 8) = uVar10;
    *(uint *)(p_Var8 + 0xc) = *param_2;
    FUN_1005607f0(p_Var8 + 0x10,&local_40);
    pDVar5 = local_40;
    *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_10072185a;
      }
      iVar3 = *(int *)(local_40 + 0xc);
      if (iVar3 != *(int *)(local_40 + 8)) {
        lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
        this = (QKeySequence *)(local_40 + (long)iVar3 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_10072185a:
  return p_Var8 + 0x10;
}

