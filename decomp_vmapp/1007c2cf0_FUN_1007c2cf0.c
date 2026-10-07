
undefined8 * FUN_1007c2cf0(_func_void_Node_ptr_void_ptr *param_1,uint *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 *puVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  uint uVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var5 + 0x10) < 2) goto LAB_1007c2d68;
  p_Var5 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var5,FUN_1007c46f0,0x7c4630,0x20);
  p_Var9 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007c2d65;
      p_Var9 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1007c2d65:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var5;
LAB_1007c2d68:
  uVar2 = *(uint *)(p_Var5 + 0x20);
  uVar10 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
  p_Var8 = p_Var5;
  p_Var11 = param_1;
  if (uVar2 != 0) {
    p_Var11 = (_func_void_Node_ptr_void_ptr *)
              (*(long *)(p_Var5 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) + ((ulong)uVar10 % (ulong)uVar2) * 8);
        (p_Var8 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != uVar10 || (p_Var8 = p_Var6, *param_2 != *(uint *)(p_Var6 + 0xc)))
        )); p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
      p_Var11 = p_Var6;
    }
  }
  if (p_Var8 == p_Var5) {
    if ((int)uVar2 <= *(int *)(p_Var5 + 0x14)) {
      QHashData::rehash((int)p_Var5);
      p_Var5 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar10 = *(uint *)(p_Var5 + 0x24) ^ *param_2;
      p_Var11 = param_1;
      if (*(uint *)(p_Var5 + 0x20) != 0) {
        uVar4 = (ulong)uVar10 % (ulong)*(uint *)(p_Var5 + 0x20);
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        while ((p_Var6 = p_Var8, p_Var6 != p_Var5 &&
               ((*(uint *)(p_Var6 + 8) != uVar10 || (*param_2 != *(uint *)(p_Var6 + 0xc)))))) {
          p_Var11 = p_Var6;
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var6;
        }
      }
    }
    puVar7 = (undefined8 *)QHashData::allocateNode((int)p_Var5);
    *puVar7 = *(undefined8 *)p_Var11;
    *(uint *)(puVar7 + 1) = uVar10;
    *(uint *)((long)puVar7 + 0xc) = *param_2;
    pQVar3 = param_3->field0_0x0;
    puVar7[2] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    *(undefined2 *)(puVar7 + 3) = *(undefined2 *)&param_3[1].field0_0x0;
    *(undefined8 **)p_Var11 = puVar7;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    QString::operator=((QString *)(p_Var8 + 0x10),param_3);
    *(undefined2 *)(p_Var8 + 0x18) = *(undefined2 *)&param_3[1].field0_0x0;
    puVar7 = *(undefined8 **)p_Var11;
  }
  return puVar7;
}

