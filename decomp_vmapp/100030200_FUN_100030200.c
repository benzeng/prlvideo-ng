
void FUN_100030200(QObject *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  _func_void_Node_ptr *p_Var4;
  QArrayData *pQVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9a30;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9ab0;
  if (param_1[0x40] != (QObject)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(lVar3 + 0xf0);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x284) = 0;
    if (lVar2 != 0) {
      FUN_100435fa0(lVar2,0);
      FUN_100430130(lVar2,0);
      lVar3 = *(long *)(param_1 + 0x38);
    }
    (**(code **)(**(long **)(lVar3 + 0x1a48) + 0x28))
              (*(long **)(lVar3 + 0x1a48),0xb,FUN_10002f990,param_1);
    param_1[0x40] = (QObject)0x0;
  }
  DAT_1011c35c8 = 0;
  QMutex::~QMutex((QMutex *)(param_1 + 0x278));
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x270);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000302de;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x270);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_1000302de:
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x25c] = (QObject)0x1;
  pQVar5 = *(QArrayData **)(param_1 + 0x268);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100030322;
      pQVar5 = *(QArrayData **)(param_1 + 0x268);
    }
    QArrayData::deallocate(pQVar5,1,8);
  }
LAB_100030322:
  QMutex::~QMutex((QMutex *)(param_1 + 0x48));
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

