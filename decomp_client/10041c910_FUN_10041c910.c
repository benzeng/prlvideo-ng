
void FUN_10041c910(undefined8 param_1,Data *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *pQVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != *(int *)(param_2 + 8)) {
    lVar7 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar2 * -8;
    pDVar4 = param_2 + (long)iVar2 * 8 + 8;
    do {
      puVar3 = *(undefined8 **)pDVar4;
      if (puVar3 != (undefined8 *)0x0) {
        p_Var5 = (_func_void_Node_ptr *)puVar3[1];
        if (*(int *)(p_Var5 + 0x10) != -1) {
          if (*(int *)(p_Var5 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var5 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            UNLOCK();
            if (*(int *)pcVar1 != 0) goto LAB_10041c985;
            p_Var5 = (_func_void_Node_ptr *)puVar3[1];
          }
          QHashData::free_helper(p_Var5);
        }
LAB_10041c985:
        pQVar6 = (QArrayData *)*puVar3;
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_10041c9b5;
            pQVar6 = (QArrayData *)*puVar3;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_10041c9b5:
        operator_delete(puVar3);
      }
      pDVar4 = pDVar4 + -8;
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0);
  }
  QListData::dispose(param_2);
  return;
}

