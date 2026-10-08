
void FUN_100af8200(undefined8 param_1,undefined8 *param_2)

{
  Data *pDVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_100af8200(param_1,*param_2);
  FUN_100af8200(param_1,param_2[1]);
  pDVar1 = (Data *)param_2[5];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100af8253;
      pDVar1 = (Data *)param_2[5];
    }
    QListData::dispose(pDVar1);
  }
LAB_100af8253:
  operator_delete(param_2);
  return;
}

