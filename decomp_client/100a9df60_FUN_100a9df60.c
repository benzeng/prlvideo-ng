
int FUN_100a9df60(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  int iVar9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  QArrayData *pQVar13;
  _func_void_Node_ptr_void_ptr *p_Var14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)param_1;
  iVar9 = *(int *)(p_Var8 + 0x14);
  if (iVar9 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var8 + 0x10) < 2) goto LAB_100a9dff4;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var8,FUN_10002c570,0x2c4b0,0x20);
  p_Var12 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var12 + 0x10) != -1) {
    if (*(int *)(p_Var12 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var12 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100a9dfe9;
      p_Var12 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var12);
  }
LAB_100a9dfe9:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var8;
  iVar9 = *(int *)(p_Var8 + 0x14);
LAB_100a9dff4:
  uVar2 = *(uint *)(p_Var8 + 0x20);
  p_Var14 = param_1;
  p_Var15 = p_Var8;
  if (uVar2 != 0) {
    uVar6 = qHash(param_2,*(uint *)(p_Var8 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var14 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    p_Var10 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var8 + 8) + uVar4 * 8);
    if (p_Var10 != p_Var8) {
      do {
        p_Var11 = p_Var10;
        p_Var15 = p_Var8;
        if (*(uint *)(p_Var10 + 8) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(p_Var10 + 0x10));
          p_Var11 = *(_func_void_Node_ptr_void_ptr **)p_Var14;
          p_Var8 = p_Var11;
          p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar5 != '\0') break;
        }
        p_Var8 = p_Var15;
        p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
        p_Var14 = p_Var11;
        p_Var15 = p_Var8;
      } while (p_Var10 != p_Var8);
    }
  }
  if (p_Var8 != p_Var15) {
    do {
      p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var8;
      if (p_Var10 == p_Var15) {
        pQVar13 = *(QArrayData **)(p_Var8 + 0x18);
        if (*(int *)pQVar13 != -1) {
          if (*(int *)pQVar13 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            UNLOCK();
            if (*(int *)pQVar13 != 0) goto LAB_100a9e165;
            pQVar13 = *(QArrayData **)(p_Var8 + 0x18);
          }
          QArrayData::deallocate(pQVar13,2,8);
        }
LAB_100a9e165:
        pQVar13 = *(QArrayData **)(p_Var8 + 0x10);
        if (*(int *)pQVar13 != -1) {
          if (*(int *)pQVar13 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            UNLOCK();
            if (*(int *)pQVar13 != 0) goto LAB_100a9e195;
            pQVar13 = *(QArrayData **)(p_Var8 + 0x10);
          }
          QArrayData::deallocate(pQVar13,2,8);
        }
LAB_100a9e195:
        QHashData::freeNode(*(void **)param_1);
        *(_func_void_Node_ptr_void_ptr **)p_Var14 = p_Var15;
        p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar7 = *(int *)(p_Var15 + 0x14) + -1;
        *(int *)(p_Var15 + 0x14) = iVar7;
        break;
      }
      cVar5 = operator==((QString *)(p_Var10 + 0x10),(QString *)(p_Var8 + 0x10));
      lVar3 = *(long *)p_Var14;
      pQVar13 = *(QArrayData **)(lVar3 + 0x18);
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          UNLOCK();
          if (*(int *)pQVar13 != 0) goto LAB_100a9e0d7;
          pQVar13 = *(QArrayData **)(lVar3 + 0x18);
        }
        QArrayData::deallocate(pQVar13,2,8);
      }
LAB_100a9e0d7:
      pQVar13 = *(QArrayData **)(lVar3 + 0x10);
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          UNLOCK();
          if (*(int *)pQVar13 != 0) goto LAB_100a9e107;
          pQVar13 = *(QArrayData **)(lVar3 + 0x10);
        }
        QArrayData::deallocate(pQVar13,2,8);
      }
LAB_100a9e107:
      QHashData::freeNode(*(void **)param_1);
      *(_func_void_Node_ptr_void_ptr **)p_Var14 = p_Var10;
      p_Var15 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar7 = *(int *)(p_Var15 + 0x14) + -1;
      *(int *)(p_Var15 + 0x14) = iVar7;
      p_Var8 = p_Var10;
    } while (cVar5 != '\0');
    if ((iVar7 <= *(int *)(p_Var15 + 0x20) >> 3) &&
       (*(short *)(p_Var15 + 0x1c) < *(short *)(p_Var15 + 0x1e))) {
      QHashData::rehash((int)p_Var15);
    }
  }
  return iVar9 - *(int *)(*(long *)param_1 + 0x14);
}

