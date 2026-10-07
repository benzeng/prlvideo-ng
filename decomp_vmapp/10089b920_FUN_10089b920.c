
undefined8 FUN_10089b920(int *param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int *local_28;
  
  local_28 = param_1;
  if ((param_2 == 1) || (param_3 == 0)) {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_1008a5130(&local_28,0);
      param_1 = local_28;
    }
    *param_1 = param_2;
    if (param_2 == 1) {
      iVar2 = 0xff;
      if (param_3 == 0) {
        iVar2 = 0;
      }
      param_1[2] = iVar2;
      return 1;
    }
  }
  else {
    if (param_2 == 6) {
      lVar1 = FUN_100822ed0();
      if (lVar1 != 0) {
        if (*(long *)(param_1 + 2) != 0) {
          FUN_1008a5130(&local_28,0);
          param_1 = local_28;
        }
        *param_1 = 6;
        *(long *)(param_1 + 2) = lVar1;
        return 1;
      }
      return 0;
    }
    param_3 = FUN_1008afc30(param_3);
    if (param_3 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 2) != 0) {
      FUN_1008a5130(&local_28,0);
      param_1 = local_28;
    }
    *param_1 = param_2;
  }
  *(long *)(param_1 + 2) = param_3;
  return 1;
}

