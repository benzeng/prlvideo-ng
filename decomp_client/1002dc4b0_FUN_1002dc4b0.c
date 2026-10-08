
undefined8 * FUN_1002dc4b0(_func_void_Node_ptr_void_ptr *param_1,QString *param_2,code *param_3)

{
  code *pcVar1;
  uint uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  undefined8 *puVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_1002dc534;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_1002dc8c0,0x2dc9b0,0x58);
  p_Var13 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var13 + 0x10) != -1) {
    if (*(int *)(p_Var13 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var13 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002dc52a;
      p_Var13 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var13);
  }
LAB_1002dc52a:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
LAB_1002dc534:
  uVar2 = *(uint *)(p_Var8 + 0x20);
  uVar7 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
  p_Var12 = param_1;
  p_Var14 = p_Var8;
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar7 % (ulong)uVar2;
    p_Var12 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar5 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar5 * 8);
    if (p_Var10 != p_Var8) {
      do {
        p_Var11 = p_Var10;
        p_Var14 = p_Var8;
        if (*(uint *)(p_Var10 + 8) == uVar7) {
          cVar6 = operator==(param_2,(QString *)(p_Var10 + 0x10));
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          p_Var11 = p_Var8;
          p_Var14 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar6 != '\0') break;
        }
        p_Var8 = p_Var14;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        p_Var12 = p_Var11;
        p_Var14 = p_Var8;
      } while (p_Var10 != p_Var8);
    }
  }
  if (p_Var8 == p_Var14) {
    if (*(int *)(p_Var14 + 0x20) <= *(int *)(p_Var14 + 0x14)) {
      QHashData::rehash((int)p_Var14);
      p_Var14 = *(_func_void_Node_ptr_void_ptr **)param_1;
      uVar2 = *(uint *)(p_Var14 + 0x20);
      uVar7 = qHash(param_2,*(uint *)(p_Var14 + 0x24));
      p_Var12 = param_1;
      if (uVar2 != 0) {
        uVar5 = (ulong)uVar7 % (ulong)uVar2;
        p_Var8 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var14 + 8) + uVar5 * 8);
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var14 + 8) + uVar5 * 8);
        p_Var12 = p_Var8;
        if (p_Var10 != p_Var14) {
          do {
            p_Var12 = p_Var10;
            if (*(uint *)(p_Var12 + 8) == uVar7) {
              cVar6 = operator==(param_2,(QString *)(p_Var12 + 0x10));
              if (cVar6 != '\0') {
                p_Var14 = *(_func_void_Node_ptr_void_ptr **)param_1;
                p_Var12 = p_Var8;
                break;
              }
              p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
              p_Var14 = *(_func_void_Node_ptr_void_ptr **)param_1;
            }
            p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
            p_Var8 = p_Var12;
          } while (*(_func_void_Node_ptr_void_ptr **)p_Var12 != p_Var14);
        }
      }
    }
    puVar9 = (undefined8 *)QHashData::allocateNode((int)p_Var14);
    *puVar9 = *(undefined8 *)p_Var12;
    *(uint *)(puVar9 + 1) = uVar7;
    pQVar3 = param_2->field0_0x0;
    puVar9[2] = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 8);
    puVar9[4] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 0x10);
    puVar9[5] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 0x18);
    puVar9[6] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 0x20);
    puVar9[7] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 0x28);
    puVar9[8] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(code *)(puVar9 + 3) = *param_3;
    piVar4 = *(int **)(param_3 + 0x30);
    puVar9[9] = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(param_3 + 0x38);
    *(undefined8 **)p_Var12 = puVar9;
    *(int *)(*(long *)param_1 + 0x14) = *(int *)(*(long *)param_1 + 0x14) + 1;
  }
  else {
    p_Var8[0x18] = *param_3;
    QString::operator=((QString *)(p_Var8 + 0x20),(QString *)(param_3 + 8));
    QString::operator=((QString *)(p_Var8 + 0x28),(QString *)(param_3 + 0x10));
    QString::operator=((QString *)(p_Var8 + 0x30),(QString *)(param_3 + 0x18));
    QString::operator=((QString *)(p_Var8 + 0x38),(QString *)(param_3 + 0x20));
    QString::operator=((QString *)(p_Var8 + 0x40),(QString *)(param_3 + 0x28));
    QString::operator=((QString *)(p_Var8 + 0x48),(QString *)(param_3 + 0x30));
    *(undefined4 *)(p_Var8 + 0x50) = *(undefined4 *)(param_3 + 0x38);
    puVar9 = *(undefined8 **)p_Var12;
  }
  return puVar9;
}

