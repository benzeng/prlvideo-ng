
int FUN_1000f7790(_func_void_Node_ptr_void_ptr *param_1,QString *param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  QArrayData *pQVar15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  _func_void_Node_ptr_void_ptr *p_Var17;
  int local_44;
  
  p_Var11 = *(_func_void_Node_ptr_void_ptr **)param_1;
  local_44 = *(int *)(p_Var11 + 0x14);
  if (local_44 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var11 + 0x10) < 2) goto LAB_1000f782c;
  p_Var11 = (_func_void_Node_ptr_void_ptr *)
            QHashData::detach_helper(p_Var11,FUN_1000f81e0,0xf8050,0x20);
  p_Var14 = *(_func_void_Node_ptr **)param_1;
  if (*(int *)(p_Var14 + 0x10) != -1) {
    if (*(int *)(p_Var14 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var14 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000f7819;
      p_Var14 = *(_func_void_Node_ptr **)param_1;
    }
    QHashData::free_helper(p_Var14);
  }
LAB_1000f7819:
  *(_func_void_Node_ptr_void_ptr **)param_1 = p_Var11;
  local_44 = *(int *)(p_Var11 + 0x14);
LAB_1000f782c:
  uVar3 = *(uint *)(p_Var11 + 0x20);
  p_Var16 = param_1;
  p_Var17 = p_Var11;
  if (uVar3 != 0) {
    uVar9 = qHash(param_2,*(uint *)(p_Var11 + 0x24));
    uVar6 = (ulong)uVar9 % (ulong)uVar3;
    p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var11 + 8) + uVar6 * 8);
    p_Var12 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var11 + 8) + uVar6 * 8);
    if (p_Var12 != p_Var11) {
      do {
        p_Var13 = p_Var12;
        p_Var17 = p_Var11;
        if (*(uint *)(p_Var12 + 8) == uVar9) {
          cVar8 = operator==(param_2,(QString *)(p_Var12 + 0x10));
          p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
          p_Var11 = p_Var13;
          p_Var17 = *(_func_void_Node_ptr_void_ptr **)param_1;
          if (cVar8 != '\0') break;
        }
        p_Var11 = p_Var17;
        p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var13;
        p_Var16 = p_Var13;
        p_Var17 = p_Var11;
      } while (p_Var12 != p_Var11);
    }
  }
  if (p_Var11 != p_Var17) {
    do {
      p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var11;
      if (p_Var12 == p_Var17) {
        plVar5 = *(long **)(p_Var11 + 0x18);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        pQVar15 = *(QArrayData **)(p_Var11 + 0x10);
        if (*(int *)pQVar15 != -1) {
          if (*(int *)pQVar15 != 0) {
            LOCK();
            *(int *)pQVar15 = *(int *)pQVar15 + -1;
            UNLOCK();
            if (*(int *)pQVar15 != 0) goto LAB_1000f79a4;
            pQVar15 = *(QArrayData **)(p_Var11 + 0x10);
          }
          QArrayData::deallocate(pQVar15,2,8);
        }
LAB_1000f79a4:
        QHashData::freeNode(*(void **)param_1);
        *(_func_void_Node_ptr_void_ptr **)p_Var16 = p_Var17;
        p_Var17 = *(_func_void_Node_ptr_void_ptr **)param_1;
        iVar10 = *(int *)(p_Var17 + 0x14) + -1;
        *(int *)(p_Var17 + 0x14) = iVar10;
        break;
      }
      cVar8 = operator==((QString *)(p_Var12 + 0x10),(QString *)(p_Var11 + 0x10));
      lVar4 = *(long *)p_Var16;
      plVar5 = *(long **)(lVar4 + 0x18);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      pQVar15 = *(QArrayData **)(lVar4 + 0x10);
      if (*(int *)pQVar15 != -1) {
        if (*(int *)pQVar15 != 0) {
          LOCK();
          *(int *)pQVar15 = *(int *)pQVar15 + -1;
          UNLOCK();
          if (*(int *)pQVar15 != 0) goto LAB_1000f7928;
          pQVar15 = *(QArrayData **)(lVar4 + 0x10);
        }
        QArrayData::deallocate(pQVar15,2,8);
      }
LAB_1000f7928:
      QHashData::freeNode(*(void **)param_1);
      *(_func_void_Node_ptr_void_ptr **)p_Var16 = p_Var12;
      p_Var17 = *(_func_void_Node_ptr_void_ptr **)param_1;
      iVar10 = *(int *)(p_Var17 + 0x14) + -1;
      *(int *)(p_Var17 + 0x14) = iVar10;
      p_Var11 = p_Var12;
    } while (cVar8 != '\0');
    if ((iVar10 <= *(int *)(p_Var17 + 0x20) >> 3) &&
       (*(short *)(p_Var17 + 0x1c) < *(short *)(p_Var17 + 0x1e))) {
      QHashData::rehash((int)p_Var17);
    }
  }
  return local_44 - *(int *)(*(long *)param_1 + 0x14);
}

