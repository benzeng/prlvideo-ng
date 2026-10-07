
int * FUN_1007013b0(int param_1,code *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int *piVar4;
  
  piVar1 = _calloc(1,0x20);
  piVar4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    pcVar2 = FUN_100701380;
    if (param_2 != (code *)0x0) {
      pcVar2 = param_2;
    }
    *(code **)(piVar1 + 4) = pcVar2;
    pvVar3 = _calloc((long)param_1,8);
    *(void **)(piVar1 + 2) = pvVar3;
    piVar4 = piVar1;
    if (pvVar3 == (void *)0x0) {
      _free(piVar1);
      piVar4 = (int *)0x0;
    }
  }
  return piVar4;
}

