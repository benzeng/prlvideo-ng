
undefined ** FUN_1008e0bb0(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    ppuVar2 = &PTR_s_8192_1011b4720;
  }
  else {
    iVar1 = _strcmp(PTR_s_8192_1011b4720,param_1);
    lVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = _strcmp(PTR_s_6144_1011b4738,param_1);
      lVar3 = 1;
      if (iVar1 != 0) {
        iVar1 = _strcmp(PTR_s_4096_1011b4750,param_1);
        lVar3 = 2;
        if (iVar1 != 0) {
          iVar1 = _strcmp(PTR_s_3072_1011b4768,param_1);
          lVar3 = 3;
          if (iVar1 != 0) {
            iVar1 = _strcmp(PTR_s_2048_1011b4780,param_1);
            lVar3 = 4;
            if (iVar1 != 0) {
              iVar1 = _strcmp(PTR_s_1536_1011b4798,param_1);
              lVar3 = 5;
              if (iVar1 != 0) {
                iVar1 = _strcmp(PTR_s_1024_1011b47b0,param_1);
                lVar3 = 6;
                if (iVar1 != 0) {
                  return (undefined **)0x0;
                }
              }
            }
          }
        }
      }
    }
    ppuVar2 = &PTR_s_8192_1011b4720 + lVar3 * 3;
  }
  return ppuVar2;
}

