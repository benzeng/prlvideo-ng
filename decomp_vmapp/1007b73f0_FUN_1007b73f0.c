
int FUN_1007b73f0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  
  p_Var2 = (_func_void_Node_ptr_void_ptr *)*param_1;
  iVar10 = *(int *)(p_Var2 + 0x14);
  if (iVar10 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) goto LAB_1007b7477;
  lVar6 = QHashData::detach_helper(p_Var2,FUN_1007b7c60,0x7b7a50,0x28);
  p_Var8 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007b7470;
      p_Var8 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_1007b7470:
  *param_1 = lVar6;
  iVar10 = *(int *)(lVar6 + 0x14);
LAB_1007b7477:
  plVar7 = (long *)FUN_1007b7a80(param_1,param_2,0);
  plVar11 = (long *)*plVar7;
  plVar9 = (long *)*param_1;
  if (plVar11 != plVar9) {
    do {
      plVar3 = (long *)*plVar11;
      if (plVar3 == plVar9) {
        plVar11 = (long *)plVar11[4];
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar3 = plVar11 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        QHashData::freeNode((void *)*param_1);
        *plVar7 = (long)plVar9;
        plVar9 = (long *)*param_1;
        iVar5 = *(int *)((long)plVar9 + 0x14) + -1;
        *(int *)((long)plVar9 + 0x14) = iVar5;
        break;
      }
      iVar4 = FUN_1007ea6f0((long)plVar3 + 0xc,(long)plVar11 + 0xc);
      plVar11 = *(long **)(*plVar7 + 0x20);
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar9 = plVar11 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      QHashData::freeNode((void *)*param_1);
      *plVar7 = (long)plVar3;
      plVar9 = (long *)*param_1;
      iVar5 = *(int *)((long)plVar9 + 0x14) + -1;
      *(int *)((long)plVar9 + 0x14) = iVar5;
      plVar11 = plVar3;
    } while (iVar4 == 0);
    if ((iVar5 <= (int)plVar9[4] >> 3) &&
       (*(short *)((long)plVar9 + 0x1c) < *(short *)((long)plVar9 + 0x1e))) {
      QHashData::rehash((int)plVar9);
    }
  }
  return iVar10 - *(int *)(*param_1 + 0x14);
}

