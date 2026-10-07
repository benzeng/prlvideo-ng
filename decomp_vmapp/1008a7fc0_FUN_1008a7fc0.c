
undefined8 FUN_1008a7fc0(long *param_1,void *param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = 1;
  if ((((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
      (lVar4 = *(long *)(param_4 + 0x20), lVar4 != 0)) && ((*(byte *)(lVar4 + 8) & 2) != 0)) {
    lVar4 = (long)*(int *)(lVar4 + 0x20);
    plVar5 = (long *)(lVar1 + lVar4);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != 0) {
        FUN_10081e1a0();
      }
      pvVar3 = (void *)FUN_10081ddd0(param_3,"tasn_utl.c",0xae);
      *plVar5 = (long)pvVar3;
      uVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        _memcpy(pvVar3,param_2,(long)param_3);
        *(long *)(lVar4 + 8 + lVar1) = (long)param_3;
        *(undefined4 *)(lVar4 + 0x10 + lVar1) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

