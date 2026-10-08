
int FUN_1007392c0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *pQVar10;
  long *plVar11;
  int iVar12;
  
  p_Var2 = (_func_void_Node_ptr_void_ptr *)*param_1;
  iVar12 = *(int *)(p_Var2 + 0x14);
  if (iVar12 == 0) {
    return 0;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) goto LAB_100739344;
  lVar6 = QHashData::detach_helper(p_Var2,FUN_100739040,0x738cf0,0x20);
  p_Var9 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10073933d;
      p_Var9 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var9);
  }
LAB_10073933d:
  *param_1 = lVar6;
  iVar12 = *(int *)(lVar6 + 0x14);
LAB_100739344:
  plVar7 = (long *)FUN_100738f50(param_1,param_2,0);
  plVar8 = (long *)*plVar7;
  plVar11 = (long *)*param_1;
  if (plVar8 != plVar11) {
    do {
      plVar3 = (long *)*plVar8;
      if (plVar3 == plVar11) {
        pQVar10 = (QArrayData *)plVar8[3];
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            UNLOCK();
            if (*(int *)pQVar10 != 0) goto LAB_100739472;
            pQVar10 = (QArrayData *)plVar8[3];
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_100739472:
        pQVar10 = (QArrayData *)plVar8[2];
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            UNLOCK();
            if (*(int *)pQVar10 != 0) goto LAB_1007394a2;
            pQVar10 = (QArrayData *)plVar8[2];
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_1007394a2:
        QHashData::freeNode((void *)*param_1);
        *plVar7 = (long)plVar11;
        plVar11 = (long *)*param_1;
        iVar5 = *(int *)((long)plVar11 + 0x14) + -1;
        *(int *)((long)plVar11 + 0x14) = iVar5;
        break;
      }
      cVar4 = operator==((QString *)(plVar3 + 2),(QString *)(plVar8 + 2));
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = operator==((QString *)(plVar3 + 3),(QString *)(plVar8 + 3));
      }
      lVar6 = *plVar7;
      pQVar10 = *(QArrayData **)(lVar6 + 0x18);
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          UNLOCK();
          if (*(int *)pQVar10 != 0) goto LAB_1007393e8;
          pQVar10 = *(QArrayData **)(lVar6 + 0x18);
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_1007393e8:
      pQVar10 = *(QArrayData **)(lVar6 + 0x10);
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          UNLOCK();
          if (*(int *)pQVar10 != 0) goto LAB_10073941a;
          pQVar10 = *(QArrayData **)(lVar6 + 0x10);
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_10073941a:
      QHashData::freeNode((void *)*param_1);
      *plVar7 = (long)plVar3;
      plVar11 = (long *)*param_1;
      iVar5 = *(int *)((long)plVar11 + 0x14) + -1;
      *(int *)((long)plVar11 + 0x14) = iVar5;
      plVar8 = plVar3;
    } while (cVar4 != '\0');
    if ((iVar5 <= (int)plVar11[4] >> 3) &&
       (*(short *)((long)plVar11 + 0x1c) < *(short *)((long)plVar11 + 0x1e))) {
      QHashData::rehash((int)plVar11);
    }
  }
  return iVar12 - *(int *)(*param_1 + 0x14);
}

