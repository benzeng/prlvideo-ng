
void FUN_1006197a0(undefined8 param_1,Data *param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  Data *pDVar4;
  _func_void_Node_ptr *p_Var5;
  long lVar6;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != *(int *)(param_2 + 8)) {
    lVar6 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar2 * -8;
    pDVar4 = param_2 + (long)iVar2 * 8 + 8;
    do {
      pvVar3 = *(void **)pDVar4;
      if (pvVar3 != (void *)0x0) {
        p_Var5 = *(_func_void_Node_ptr **)((long)pvVar3 + 0x10);
        if (*(int *)(p_Var5 + 0x10) != -1) {
          if (*(int *)(p_Var5 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var5 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            UNLOCK();
            if (*(int *)pcVar1 != 0) goto LAB_100619815;
            p_Var5 = *(_func_void_Node_ptr **)((long)pvVar3 + 0x10);
          }
          QHashData::free_helper(p_Var5);
        }
LAB_100619815:
        operator_delete(pvVar3);
      }
      pDVar4 = pDVar4 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
  }
  QListData::dispose(param_2);
  return;
}

