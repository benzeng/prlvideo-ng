
void FUN_100252e70(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  QArrayData *pQVar3;
  
  p_Var2 = (_func_void_Node_ptr *)param_1[10];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100252ead;
      p_Var2 = (_func_void_Node_ptr *)param_1[10];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100252ead:
  pQVar3 = (QArrayData *)param_1[9];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252edd;
      pQVar3 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252edd:
  pQVar3 = (QArrayData *)param_1[8];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252f0d;
      pQVar3 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252f0d:
  pQVar3 = (QArrayData *)param_1[7];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252f3d;
      pQVar3 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252f3d:
  pQVar3 = (QArrayData *)param_1[6];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252f6d;
      pQVar3 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252f6d:
  pQVar3 = (QArrayData *)param_1[5];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252f9d;
      pQVar3 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252f9d:
  pQVar3 = (QArrayData *)param_1[4];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252fcd;
      pQVar3 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252fcd:
  pQVar3 = (QArrayData *)param_1[3];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100252ffd;
      pQVar3 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100252ffd:
  pQVar3 = (QArrayData *)param_1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10025302d;
      pQVar3 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10025302d:
  pQVar3 = (QArrayData *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10025305d;
      pQVar3 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10025305d:
  pQVar3 = (QArrayData *)*param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

