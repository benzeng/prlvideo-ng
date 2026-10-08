
int FUN_10073d260(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  _func_void_Node_ptr *p_Var10;
  long *plVar11;
  char local_38;
  
  p_Var3 = (_func_void_Node_ptr_void_ptr *)*param_1;
  iVar2 = *(int *)(p_Var3 + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_10073d2e5;
  lVar7 = QHashData::detach_helper(p_Var3,FUN_10073d6a0,0x73d410,0x28);
  p_Var10 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var10 + 0x10) != -1) {
    if (*(int *)(p_Var10 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var10 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10073d2de;
      p_Var10 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var10);
  }
LAB_10073d2de:
  *param_1 = lVar7;
  iVar2 = *(int *)(lVar7 + 0x14);
LAB_10073d2e5:
  plVar8 = (long *)FUN_10073d5b0(param_1,param_2,0);
  plVar11 = (long *)*param_1;
  plVar9 = (long *)*plVar8;
  if ((long *)*plVar8 != plVar11) {
    do {
      plVar4 = (long *)*plVar9;
      if (plVar4 == plVar11) {
        FUN_10073d420(plVar9);
        QHashData::freeNode((void *)*param_1);
        *plVar8 = (long)plVar11;
        plVar11 = (long *)*param_1;
        iVar6 = *(int *)((long)plVar11 + 0x14) + -1;
        *(int *)((long)plVar11 + 0x14) = iVar6;
        break;
      }
      cVar5 = operator==((QString *)(plVar4 + 2),(QString *)(plVar9 + 2));
      if (cVar5 == '\0') {
        local_38 = '\0';
      }
      else {
        local_38 = operator==((QString *)(plVar4 + 3),(QString *)(plVar9 + 3));
      }
      FUN_10073d420(*plVar8);
      QHashData::freeNode((void *)*param_1);
      *plVar8 = (long)plVar4;
      plVar11 = (long *)*param_1;
      iVar6 = *(int *)((long)plVar11 + 0x14) + -1;
      *(int *)((long)plVar11 + 0x14) = iVar6;
      plVar9 = plVar4;
    } while (local_38 != '\0');
    if ((iVar6 <= (int)plVar11[4] >> 3) &&
       (*(short *)((long)plVar11 + 0x1c) < *(short *)((long)plVar11 + 0x1e))) {
      QHashData::rehash((int)plVar11);
    }
  }
  return iVar2 - *(int *)(*param_1 + 0x14);
}

