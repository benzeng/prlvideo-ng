
void FUN_100707fd0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,undefined4 *param_3)

{
  code *pcVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  char cVar4;
  uint uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 *puVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  uint uVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  
  p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var6 + 0x10) < 2) goto LAB_10070804c;
  p_Var6 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var6,FUN_1001ae6b0,0x191450,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100708048;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_100708048:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var6;
LAB_10070804c:
  uVar10 = *(uint *)(p_Var6 + 0x20);
  if ((int)uVar10 <= *(int *)(p_Var6 + 0x14)) {
    QHashData::rehash((int)p_Var6);
    p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
    uVar10 = *(uint *)(p_Var6 + 0x20);
  }
  uVar5 = qHash(param_2,*(uint *)(p_Var6 + 0x24));
  p_Var11 = param_1;
  if (uVar10 != 0) {
    p_Var3 = *(_func_void_Node_ptr_void_ptr **)
              (*(long *)(p_Var6 + 8) + ((ulong)uVar5 % (ulong)uVar10) * 8);
    p_Var11 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var6 + 8) + ((ulong)uVar5 % (ulong)uVar10) * 8);
    while (p_Var8 = p_Var3, p_Var8 != p_Var6) {
      if (*(uint *)(p_Var8 + 8) == uVar5) {
        cVar4 = operator==(param_2,(QString *)(p_Var8 + 0x10));
        if (cVar4 != '\0') {
          p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
          break;
        }
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)param_1;
      }
      p_Var11 = p_Var8;
      p_Var3 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
    }
  }
  puVar7 = (undefined8 *)QHashData::allocateNode((int)p_Var6);
  *puVar7 = *(undefined8 *)p_Var11;
  *(uint *)(puVar7 + 1) = uVar5;
  pQVar2 = param_2->field0_0x0;
  puVar7[2] = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar7 + 3) = *param_3;
  *(undefined8 **)p_Var11 = puVar7;
  *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  return;
}

