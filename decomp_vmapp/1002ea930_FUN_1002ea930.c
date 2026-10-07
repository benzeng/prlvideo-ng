
void FUN_1002ea930(undefined8 *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  void *pvVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *local_38;
  
  *param_1 = &PTR_FUN_100bb5250;
  if (-1 < DAT_1011c568c) {
    pQVar2 = *(QArrayData **)(param_1[1] + 0x20);
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] Virtual BT destroyed <%s>",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1002ea9dc;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1002ea9dc:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        UNLOCK();
        if (*(int *)pQVar2 != 0) goto LAB_1002eaa0c;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1002eaa0c:
  lVar4 = 0;
  do {
    pvVar3 = (void *)param_1[lVar4 + 0xd];
    if (pvVar3 != (void *)0x0) {
      FUN_1002ec910(pvVar3);
      operator_delete(pvVar3);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < 0x20);
  FUN_100252960(param_1 + 8);
  p_Var5 = (_func_void_Node_ptr *)param_1[0xb];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002eaa6e;
      p_Var5 = (_func_void_Node_ptr *)param_1[0xb];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1002eaa6e:
  p_Var5 = (_func_void_Node_ptr *)param_1[10];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002eaa9d;
      p_Var5 = (_func_void_Node_ptr *)param_1[10];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_1002eaa9d:
  FUN_100252920(param_1 + 8);
  FUN_1002dc020(param_1);
  return;
}

