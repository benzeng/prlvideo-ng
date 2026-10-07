
undefined4 FUN_10022e255(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_44;
  int local_1c;
  
  if (param_3 == 0) {
    local_44 = 0xffffffff;
  }
  else {
    if (param_2[1] <= *param_2) {
      iVar1 = param_2[1];
      lVar2 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_2 + 2),(long)(iVar1 * 2) * 8);
      if (lVar2 == 0) {
        FUN_10022d41d(param_1,"adding states\n");
        return 0xffffffff;
      }
      *(long *)(param_2 + 2) = lVar2;
      param_2[1] = iVar1 * 2;
    }
    for (local_1c = 0; local_1c < *param_2; local_1c = local_1c + 1) {
      iVar1 = FUN_10022eb24(param_1,param_3,
                            *(undefined8 *)(*(long *)(param_2 + 2) + (long)local_1c * 8));
      if (iVar1 != 0) {
        FUN_10022eca1(param_1,param_3);
        return 0;
      }
    }
    iVar1 = *param_2;
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_3;
    *param_2 = iVar1 + 1;
    local_44 = 1;
  }
  return local_44;
}

