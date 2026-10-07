
undefined8 FUN_100850900(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      FUN_10084bbb0(param_1,0);
    }
    else {
      lVar1 = FUN_100853b90(*param_1,*param_1,(int)param_1[1],param_2);
      if (lVar1 != 0) {
        iVar3 = (int)param_1[1];
        if (*(int *)((long)param_1 + 0xc) <= iVar3) {
          lVar2 = FUN_10084b900(param_1,iVar3 + 1);
          if (lVar2 == 0) {
            return 0;
          }
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 + 1;
        *(long *)(*param_1 + (long)iVar3 * 8) = lVar1;
      }
    }
  }
  return 1;
}

