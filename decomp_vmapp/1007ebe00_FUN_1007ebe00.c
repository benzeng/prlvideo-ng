
undefined1 FUN_1007ebe00(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined1 uVar5;
  void *local_38;
  
  uVar5 = 0;
  if ((param_2 != (undefined8 *)0x0) && (param_3 != (int *)0x0)) {
    lVar3 = FUN_100812e70();
    uVar5 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_100818970(lVar3,0);
      if (iVar1 != 0) {
        pvVar4 = _malloc((long)iVar1);
        if (pvVar4 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          local_38 = pvVar4;
          iVar2 = FUN_100818970(lVar3,&local_38);
          if (iVar1 == iVar2) {
            *param_3 = iVar1;
            *param_2 = pvVar4;
            uVar5 = 1;
          }
          else {
            _free(pvVar4);
            uVar5 = 0;
          }
        }
      }
    }
  }
  return uVar5;
}

