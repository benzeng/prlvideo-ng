
undefined ** FUN_100cbd3f0(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    ppuVar2 = &PTR_s_8192_10230e4f0;
  }
  else {
    iVar1 = _strcmp(PTR_s_8192_10230e4f0,param_1);
    lVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = _strcmp(PTR_s_6144_10230e508,param_1);
      lVar3 = 1;
      if (iVar1 != 0) {
        iVar1 = _strcmp(PTR_s_4096_10230e520,param_1);
        lVar3 = 2;
        if (iVar1 != 0) {
          iVar1 = _strcmp(PTR_s_3072_10230e538,param_1);
          lVar3 = 3;
          if (iVar1 != 0) {
            iVar1 = _strcmp(PTR_s_2048_10230e550,param_1);
            lVar3 = 4;
            if (iVar1 != 0) {
              iVar1 = _strcmp(PTR_s_1536_10230e568,param_1);
              lVar3 = 5;
              if (iVar1 != 0) {
                iVar1 = _strcmp(PTR_s_1024_10230e580,param_1);
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
    ppuVar2 = &PTR_s_8192_10230e4f0 + lVar3 * 3;
  }
  return ppuVar2;
}

