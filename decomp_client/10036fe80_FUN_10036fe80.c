
void FUN_10036fe80(QObject *param_1)

{
  code *pcVar1;
  QMapNodeBase *pQVar2;
  int *piVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_10220e460;
  FUN_1003700e0();
  DAT_102310950 = 0;
  piVar3 = *(int **)(param_1 + 0x30);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_10036fed7;
      piVar3 = *(int **)(param_1 + 0x30);
    }
    FUN_100376000(param_1 + 0x30,piVar3);
  }
LAB_10036fed7:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10036ff06;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10036ff06:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10036ff4e;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x20);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_1003760a0();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10036ff4e:
  piVar3 = *(int **)(param_1 + 0x18);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_10036ff77;
      piVar3 = *(int **)(param_1 + 0x18);
    }
    FUN_100376000(param_1 + 0x18,piVar3);
  }
LAB_10036ff77:
  piVar3 = *(int **)(param_1 + 0x10);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_10036ffa0;
      piVar3 = *(int **)(param_1 + 0x10);
    }
    FUN_100375f60(param_1 + 0x10,piVar3);
  }
LAB_10036ffa0:
  QObject::~QObject(param_1);
  return;
}

