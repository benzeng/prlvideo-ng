
long * FUN_10041f2c0(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 local_28 [8];
  long local_20;
  
  lVar3 = *param_1;
  lVar2 = *param_2;
  if (lVar3 == lVar2) {
    return param_1;
  }
  if (1 < *(int *)(lVar2 + 0x10) + 1U) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0x10);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_20 = CONCAT71(local_20._1_7_,*piVar1 != 0);
    lVar3 = *param_1;
  }
  if (*(int *)(lVar3 + 0x10) != -1) {
    if (*(int *)(lVar3 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_20 = CONCAT71(local_20._1_7_,*piVar1 != 0);
      if (*piVar1 != 0) goto LAB_10041f318;
      lVar3 = *param_1;
    }
    FUN_10041f220(param_1,lVar3);
  }
LAB_10041f318:
  *param_1 = lVar2;
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    local_20 = lVar2;
    FUN_10041f350(local_28,param_1,&local_20);
  }
  return param_1;
}

