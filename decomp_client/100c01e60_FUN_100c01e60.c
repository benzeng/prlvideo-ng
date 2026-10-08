
int FUN_100c01e60(long param_1,long *param_2)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (param_2 != (long *)0x0) {
    if ((void *)*param_2 == (void *)0x0) {
      pvVar2 = (void *)FUN_100bf3540(*piVar1,"hm_ameth.c",0x7f);
      *param_2 = (long)pvVar2;
      _memcpy(pvVar2,*(void **)(piVar1 + 2),(long)*piVar1);
    }
    else {
      _memcpy((void *)*param_2,*(void **)(piVar1 + 2),(long)*piVar1);
      *param_2 = *param_2 + (long)*piVar1;
    }
  }
  return *piVar1;
}

