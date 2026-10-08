
void FUN_1007dc250(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,undefined8 *param_3)

{
  code *pcVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  int *piVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  uint uVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_1007dc2cc;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_10002c570,0x2c4b0,0x20);
  p_Var10 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007dc2c8;
      p_Var10 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_1007dc2c8:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_1007dc2cc:
  uVar11 = *(uint *)(p_Var7 + 0x20);
  if ((int)uVar11 <= *(int *)(p_Var7 + 0x14)) {
    QHashData::rehash((int)p_Var7);
    p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar11 = *(uint *)(p_Var7 + 0x20);
  }
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var12 = param_1;
  if (uVar11 != 0) {
    p_Var4 = *(_func_void_Node_ptr_void_ptr **)
              (*(long *)(p_Var7 + 8) + ((ulong)uVar6 % (ulong)uVar11) * 8);
    p_Var12 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var7 + 8) + ((ulong)uVar6 % (ulong)uVar11) * 8);
    while (p_Var9 = p_Var4, p_Var9 != p_Var7) {
      if (*(uint *)(p_Var9 + 8) == uVar6) {
        cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
        if (cVar5 != '\0') {
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
          break;
        }
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
      }
      p_Var12 = p_Var9;
      p_Var4 = *(_func_void_Node_ptr_void_ptr **)p_Var9;
    }
  }
  puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var7);
  *puVar8 = *(undefined8 *)p_Var12;
  *(uint *)(puVar8 + 1) = uVar6;
  pQVar2 = param_2->field0_0x0;
  puVar8[2] = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  piVar3 = (int *)*param_3;
  puVar8[3] = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined8 **)p_Var12 = puVar8;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  return;
}

