
undefined8 * FUN_10010c970(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,QString *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  undefined8 *puVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  
  p_Var7 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var7 + 0x10) < 2) goto LAB_10010c9f7;
  p_Var7 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var7,FUN_10010d2b0,0x10d150,0x28);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10010c9e9;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_10010c9e9:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var7;
LAB_10010c9f7:
  uVar2 = *(uint *)(p_Var7 + 0x20);
  uVar6 = qHash(param_2,*(uint *)(p_Var7 + 0x24));
  p_Var11 = param_1;
  p_Var13 = p_Var7;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var11 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var7 + 8) + uVar4 * 8);
    if (p_Var9 != p_Var7) {
      do {
        p_Var10 = p_Var9;
        p_Var13 = p_Var7;
        if (*(uint *)(p_Var9 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var7 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
          p_Var10 = p_Var7;
          p_Var13 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar5 != '\0') break;
        }
        p_Var7 = p_Var13;
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var11 = p_Var10;
        p_Var13 = p_Var7;
      } while (p_Var9 != p_Var7);
    }
  }
  if (p_Var7 == p_Var13) {
    if (*(int *)(p_Var13 + 0x20) <= *(int *)(p_Var13 + 0x14)) {
      QHashData::rehash((int)p_Var13);
      p_Var13 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var13 + 0x20);
      uVar6 = qHash(param_2,*(uint *)(p_Var13 + 0x24));
      p_Var11 = param_1;
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar6 % (ulong)uVar2;
        p_Var7 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var13 + 8) + uVar4 * 8);
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var13 + 8) + uVar4 * 8);
        p_Var11 = p_Var7;
        if (p_Var9 != p_Var13) {
          do {
            p_Var11 = p_Var9;
            if (*(uint *)(p_Var11 + 8) == uVar6) {
              cVar5 = operator==(param_2,(QString *)(p_Var11 + 0x10));
              if (cVar5 != '\0') {
                p_Var13 = *(_func_void_Node_ptr_void_ptr **)param_1;
                p_Var11 = p_Var7;
                break;
              }
              p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var7;
              p_Var13 = *(_func_void_Node_ptr_void_ptr **)param_1;
            }
            p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
            p_Var7 = p_Var11;
          } while (*(_func_void_Node_ptr_void_ptr **)p_Var11 != p_Var13);
        }
      }
    }
    puVar8 = (undefined8 *)QHashData::allocateNode((int)p_Var13);
    *puVar8 = *(undefined8 *)p_Var11;
    *(uint *)(puVar8 + 1) = uVar6;
    pQVar3 = param_2->field0_0x0;
    puVar8[2] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    pQVar3 = param_3->field0_0x0;
    puVar8[3] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    *(undefined1 *)((long)puVar8 + 0x24) = *(undefined1 *)((long)&param_3[1].field0_0x0 + 4);
    *(undefined4 *)(puVar8 + 4) = *(undefined4 *)&param_3[1].field0_0x0;
    *(undefined8 **)p_Var11 = puVar8;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    QString::operator=((QString *)(p_Var7 + 0x18),param_3);
    p_Var7[0x24] = *(code *)((long)&param_3[1].field0_0x0 + 4);
    *(undefined4 *)(p_Var7 + 0x20) = *(undefined4 *)&param_3[1].field0_0x0;
    puVar8 = *(undefined8 **)p_Var11;
  }
  return puVar8;
}

