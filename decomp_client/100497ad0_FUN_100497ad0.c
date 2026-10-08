
void FUN_100497ad0(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  *param_1 = &PTR_FUN_102215740;
  param_1[2] = &PTR_FUN_102215950;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  pQVar1 = (QMapNodeBase *)param_1[8];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100497b45;
      pQVar1 = (QMapNodeBase *)param_1[8];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100497b45:
  FUN_10044e270(param_1);
  return;
}

