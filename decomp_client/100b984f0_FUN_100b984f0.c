
undefined8 FUN_100b984f0(long *param_1,int *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  if (param_3 != (long *)0x0) {
    lVar4 = 0;
    if (*param_3 == 0) {
      *param_2 = 0;
    }
    else {
      do {
        iVar2 = FUN_100b98460();
        if (iVar2 == 0) {
          uVar5 = 2;
          goto LAB_100b985d8;
        }
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (param_3[lVar1] != 0);
      iVar2 = (int)lVar4;
      *param_2 = iVar2;
      if (iVar2 != 0) {
        pvVar3 = _malloc((long)(iVar2 << 4));
        *param_1 = (long)pvVar3;
        if (pvVar3 != (void *)0x0) {
          if (*param_3 != 0) {
            FUN_100b9ed80(pvVar3,*param_3,0x27);
            lVar4 = param_3[1];
            if (lVar4 != 0) {
              param_3 = param_3 + 2;
              iVar2 = 0x10;
              do {
                FUN_100b9ed80(*param_1 + (long)iVar2,lVar4,0x27);
                lVar4 = *param_3;
                param_3 = param_3 + 1;
                iVar2 = iVar2 + 0x10;
              } while (lVar4 != 0);
            }
          }
          return 0;
        }
        uVar5 = 0xfffffffe;
        goto LAB_100b985d8;
      }
    }
  }
  uVar5 = 100;
LAB_100b985d8:
  uVar5 = FUN_100b9d470(uVar5,0);
  return uVar5;
}

