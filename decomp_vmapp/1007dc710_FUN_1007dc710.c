
undefined1 FUN_1007dc710(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_1007d8840();
  if (iVar1 != 1000) {
    FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","PrlGetTicksPerSecond() == 1000",
                  "pollset_mac.cpp",0x27,"pollset_init");
  }
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = _kqueue();
  *param_1 = iVar1;
  if (iVar1 < 0) {
    piVar3 = ___error();
    uVar4 = 0;
    FUN_1008e3970("","Std",0,"Failed to open kqueue(): %d",*piVar3);
  }
  else {
    pvVar2 = _malloc((long)param_1[1] << 5);
    *(void **)(param_1 + 4) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      _close(iVar1);
      *param_1 = -1;
      uVar4 = 0;
    }
    else {
      *(int **)(param_1 + 10) = param_1 + 10;
      *(int **)(param_1 + 0xc) = param_1 + 10;
      FUN_1007d9ed0(param_1);
      uVar4 = 1;
    }
  }
  return uVar4;
}

