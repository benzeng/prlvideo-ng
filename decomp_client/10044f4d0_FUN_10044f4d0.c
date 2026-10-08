
undefined8 * FUN_10044f4d0(undefined8 *param_1,long *param_2,ulong *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  puVar5 = PTR_shared_null_1021e15d0;
  local_38 = PTR_shared_null_1021e15d0;
  if (*(long *)(*param_2 + 0x10) == 0) {
LAB_10044f54f:
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*param_2 + 0x10);
    lVar10 = 0;
    do {
      while (lVar8 = lVar6, uVar11 = *(ulong *)(lVar8 + 0x18), uVar11 < *param_3) {
        lVar6 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar10 == 0) goto LAB_10044f54f;
          uVar11 = *(ulong *)(lVar10 + 0x18);
          lVar8 = lVar10;
          goto LAB_10044f54a;
        }
      }
      lVar6 = *(long *)(lVar8 + 8);
      lVar10 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_10044f54a:
    if (*param_3 < uVar11) goto LAB_10044f54f;
  }
  ppuVar9 = &local_38;
  if (lVar8 != 0) {
    ppuVar9 = (undefined **)(lVar8 + 0x20);
  }
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*ppuVar9;
  *param_1 = p_Var4;
  if (1 < *(int *)(p_Var4 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var4 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_2c = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if ((((byte)p_Var4[0x28] & 1) != 0) || (*(uint *)(p_Var4 + 0x10) < 2)) goto LAB_10044f5d6;
  uVar7 = QHashData::detach_helper(p_Var4,FUN_10044f7d0,0x44f7f0,0x10);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_2b = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_10044f5d3;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var4);
  }
LAB_10044f5d3:
  *param_1 = uVar7;
LAB_10044f5d6:
  iVar3 = *(int *)(puVar5 + 0x10);
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 0x10);
      *piVar2 = *piVar2 + -1;
      local_2a = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_2a) {
        return param_1;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
  }
  return param_1;
}

