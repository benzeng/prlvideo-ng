
undefined8 * FUN_1007db070(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  undefined8 uVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (1 < *(uint *)(p_Var7 + 0x10)) {
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var7,FUN_1007db780,0x7db650,0x20);
    p_Var13 = *(_func_void_Node_ptr **)param_1;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1007db0e4;
        p_Var13 = *(_func_void_Node_ptr **)param_1;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_1007db0e4:
    *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
  }
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var12 = p_Var7;
  p_Var14 = param_1;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var11 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var11 != p_Var7) {
      do {
        p_Var10 = p_Var11;
        if (*(uint *)(p_Var11 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var12 = p_Var10;
          if (cVar5 != '\0') break;
        }
        p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var12 = p_Var7;
        p_Var14 = p_Var10;
      } while (p_Var11 != p_Var7);
    }
  }
  if (p_Var12 != p_Var7) {
    FUN_100283c40(p_Var12 + 0x18,param_3);
    return *(undefined8 **)p_Var14;
  }
  if (*(int *)(p_Var7 + 0x20) <= *(int *)(p_Var7 + 0x14)) {
    QHashData::rehash((int)p_Var7);
    p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar2 = *(uint *)(p_Var7 + 0x20);
    uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
    p_Var14 = param_1;
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar6 % (ulong)uVar2;
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
      p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
      while (p_Var11 = p_Var12, p_Var11 != p_Var7) {
        if (*(uint *)(p_Var11 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
          if (cVar5 != '\0') {
            p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
            break;
          }
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
        }
        p_Var14 = p_Var11;
        p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
      }
    }
  }
  puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var7);
  *puVar8 = *(undefined8 *)p_Var14;
  *(uint *)(puVar8 + 1) = uVar6;
  pQVar3 = param_2->field0_0x0;
  puVar8[2] = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  p_Var7 = (_func_void_Node_ptr_void_ptr *)*param_3;
  puVar8[3] = p_Var7;
  if (1 < *(int *)(p_Var7 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var7 + 0x10) = *(int *)(p_Var7 + 0x10) + 1;
    UNLOCK();
    p_Var7 = (_func_void_Node_ptr_void_ptr *)puVar8[3];
  }
  if ((((byte)p_Var7[0x28] & 1) != 0) || (*(uint *)(p_Var7 + 0x10) < 2)) goto LAB_1007db2b6;
  uVar9 = QHashData::detach_helper(p_Var7,FUN_10002c570,0x2c4b0,0x20);
  p_Var13 = (_func_void_Node_ptr *)puVar8[3];
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007db2b2;
      p_Var13 = (_func_void_Node_ptr *)puVar8[3];
    }
    QHashData::free_helper(p_Var13);
  }
LAB_1007db2b2:
  puVar8[3] = uVar9;
LAB_1007db2b6:
  *(undefined8 **)p_Var14 = puVar8;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  return puVar8;
}

