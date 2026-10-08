
int FUN_1001ae280(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr *p_Var11;
  QArrayData *pQVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  int local_44;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  local_44 = *(int *)(p_Var8 + 0x14);
  if (local_44 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_1001ae31f;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_1001ae6b0,0x191450,0x20);
  p_Var11 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var11 + 0x10) != -1) {
    if (*(int *)(p_Var11 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var11 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1001ae30b;
      p_Var11 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var11);
  }
LAB_1001ae30b:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  local_44 = *(int *)(p_Var8 + 0x14);
LAB_1001ae31f:
  uVar2 = *(uint *)(p_Var8 + 0x20);
  p_Var13 = p_Var8;
  p_Var14 = param_1;
  if (uVar2 != 0) {
    uVar6 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var9 != p_Var8) {
      do {
        p_Var10 = p_Var9;
        if (*(uint *)(p_Var9 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var9 + 0x10));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
          p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
          p_Var13 = p_Var10;
          if (cVar5 != '\0') break;
        }
        p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var10;
        p_Var13 = p_Var8;
        p_Var14 = p_Var10;
      } while (p_Var9 != p_Var8);
    }
  }
  if (p_Var13 != p_Var8) {
    do {
      p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
      if (p_Var9 == p_Var8) {
        pQVar12 = *(QArrayData **)(p_Var13 + 0x10);
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            UNLOCK();
            if (*(int *)pQVar12 != 0) goto LAB_1001ae44b;
            pQVar12 = *(QArrayData **)(p_Var13 + 0x10);
          }
          QArrayData::deallocate(pQVar12,2,8);
        }
LAB_1001ae44b:
        QHashData::freeNode(*(void **)param_1);
        *(_func_void_Node_ptr_void_ptr **)p_Var14 = p_Var8;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar7 = *(int *)(p_Var8 + 0x14) + -1;
        *(int *)(p_Var8 + 0x14) = iVar7;
        break;
      }
      cVar5 = operator==((QString *)(p_Var9 + 0x10),(QString *)(p_Var13 + 0x10));
      lVar3 = *(long *)p_Var14;
      pQVar12 = *(QArrayData **)(lVar3 + 0x10);
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          UNLOCK();
          if (*(int *)pQVar12 != 0) goto LAB_1001ae3f3;
          pQVar12 = *(QArrayData **)(lVar3 + 0x10);
        }
        QArrayData::deallocate(pQVar12,2,8);
      }
LAB_1001ae3f3:
      QHashData::freeNode(*(void **)param_1);
      *(_func_void_Node_ptr_void_ptr **)p_Var14 = p_Var9;
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar7 = *(int *)(p_Var8 + 0x14) + -1;
      *(int *)(p_Var8 + 0x14) = iVar7;
      p_Var13 = p_Var9;
    } while (cVar5 != '\0');
    if ((iVar7 <= *(int *)(p_Var8 + 0x20) >> 3) &&
       (*(short *)(p_Var8 + 0x1c) < *(short *)(p_Var8 + 0x1e))) {
      QHashData::rehash((int)p_Var8);
    }
  }
  return local_44 - *(int *)(*(long *)param_1 + 0x14);
}

