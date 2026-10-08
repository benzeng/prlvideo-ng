
/* WARNING: Removing unreachable block (ram,0x0001006aa2ae) */
/* WARNING: Removing unreachable block (ram,0x0001006aa2bc) */
/* WARNING: Removing unreachable block (ram,0x0001006aa267) */
/* WARNING: Removing unreachable block (ram,0x0001006aa2c5) */

code * FUN_1006aa080(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  uint uStack_5c;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_31;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1006aa0f6;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_1006aa4e0,0x6aa5d0,0x50);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006aa0f3;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_1006aa0f3:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_1006aa0f6:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var11 = p_Var7;
  p_Var12 = param_1;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var9 != p_Var7) {
      do {
        p_Var8 = p_Var9;
        p_Var11 = p_Var7;
        if (*(uint *)(p_Var9 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          p_Var8 = p_Var7;
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar5 != '\0') break;
        }
        p_Var7 = p_Var11;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
        p_Var11 = p_Var7;
        p_Var12 = p_Var8;
      } while (p_Var9 != p_Var7);
    }
  }
  if (p_Var7 == p_Var11) {
    if (*(int *)(p_Var11 + 0x20) <= *(int *)(p_Var11 + 0x14)) {
      QHashData::rehash((int)p_Var11);
      p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var11 + 0x20);
      uVar6 = qHash(param_2,*(uint *)(p_Var11 + 0x24));
      p_Var12 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar6 % (ulong)uVar2;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var11 + 8) + uVar4 * 8);
        p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var11 + 8) + uVar4 * 8);
        while (p_Var9 = p_Var7, p_Var9 != p_Var11) {
          if (*(uint *)(p_Var9 + 8) == uVar6) {
            cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
            if (cVar5 != '\0') {
              p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
              break;
            }
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
            p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
          }
          p_Var12 = p_Var9;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
        }
      }
    }
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = (code)0x1;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)QHashData::allocateNode((int)p_Var11);
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var12;
    *(uint *)(p_Var7 + 8) = uVar6;
    pQVar3 = param_2->field0_0x0;
    *(QTypedArrayData<unsigned_short> **)(p_Var7 + 0x10) = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    *(undefined8 *)(p_Var7 + 0x18) = 0;
    *(undefined8 *)(p_Var7 + 0x20) = 0;
    *(ulong *)(p_Var7 + 0x30) = (ulong)uStack_5c << 0x20;
    *(undefined8 *)(p_Var7 + 0x28) = 0;
    QVariant::QVariant((QVariant *)(p_Var7 + 0x38),(QVariant *)&local_58);
    p_Var7[0x48] = local_48;
    *(_func_void_Node_ptr_void_ptr **)p_Var12 = p_Var7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
    QVariant::~QVariant((QVariant *)&local_58);
  }
  return p_Var7 + 0x18;
}

