
long FUN_10021cc05(double param_1,int *param_2)

{
  long lVar1;
  long local_30;
  
  if (param_2 == (int *)0x0) {
    local_30 = 0;
  }
  else if ((((*param_2 == 4) || (*param_2 == 0xb)) || (*param_2 == 10)) &&
          ((*(ulong *)(param_2 + 10) & 0x1ffe) != 0)) {
    lVar1 = FUN_1002145ad(0xc);
    if (lVar1 == 0) {
      local_30 = 0;
    }
    else {
      *(double *)(lVar1 + 0x20) = *(double *)(lVar1 + 0x20) - param_1;
      local_30 = FUN_10021bc79(param_2,lVar1);
      if (local_30 == 0) {
        local_30 = 0;
      }
      else {
        _xmlSchemaFreeValue(lVar1);
      }
    }
  }
  else {
    local_30 = FUN_10021b97a(param_2);
  }
  return local_30;
}

