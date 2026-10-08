
int FUN_1005b6b10(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  _func_void_Node_ptr *p_Var9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  
  p_Var3 = (_func_void_Node_ptr_void_ptr *)*param_1;
  iVar2 = *(int *)(p_Var3 + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var3 + 0x10) < 2) goto LAB_1005b6b8f;
  lVar7 = QHashData::detach_helper(p_Var3,FUN_100287c60,0x286900,0x88);
  p_Var9 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005b6b88;
      p_Var9 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1005b6b88:
  *param_1 = lVar7;
  iVar2 = *(int *)(lVar7 + 0x14);
LAB_1005b6b8f:
  plVar8 = (long *)FUN_100287910(param_1,param_2,0);
  plVar11 = (long *)*plVar8;
  plVar10 = (long *)*param_1;
  if (plVar11 != plVar10) {
    do {
      plVar4 = (long *)*plVar11;
      if (plVar4 == plVar10) {
        FUN_100286900(plVar11);
        QHashData::freeNode((void *)*param_1);
        *plVar8 = (long)plVar10;
        plVar10 = (long *)*param_1;
        iVar6 = *(int *)((long)plVar10 + 0x14) + -1;
        *(int *)((long)plVar10 + 0x14) = iVar6;
        break;
      }
      cVar5 = operator==((QString *)(plVar4 + 2),(QString *)(plVar11 + 2));
      if (cVar5 == '\0') {
        bVar12 = false;
      }
      else {
        bVar12 = *(int *)(plVar4 + 3) == (int)plVar11[3];
      }
      FUN_100286900(*plVar8);
      QHashData::freeNode((void *)*param_1);
      *plVar8 = (long)plVar4;
      plVar10 = (long *)*param_1;
      iVar6 = *(int *)((long)plVar10 + 0x14) + -1;
      *(int *)((long)plVar10 + 0x14) = iVar6;
      plVar11 = plVar4;
    } while (bVar12);
    if ((iVar6 <= (int)plVar10[4] >> 3) &&
       (*(short *)((long)plVar10 + 0x1c) < *(short *)((long)plVar10 + 0x1e))) {
      QHashData::rehash((int)plVar10);
    }
  }
  return iVar2 - *(int *)(*param_1 + 0x14);
}

