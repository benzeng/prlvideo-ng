
long * FUN_100ba1d80(long param_1,char *param_2,char *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  
  plVar3 = _malloc(0x20);
  plVar5 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[1] = 0;
    *plVar3 = 0;
    pcVar4 = _strdup(param_2);
    plVar3[2] = (long)pcVar4;
    pcVar4 = _strdup(param_3);
    plVar3[3] = (long)pcVar4;
    pvVar1 = (void *)plVar3[2];
    if ((pcVar4 == (char *)0x0) || (pvVar1 == (void *)0x0)) {
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
        pcVar4 = (char *)plVar3[3];
      }
      if (pcVar4 != (char *)0x0) {
        _free(pcVar4);
      }
      _free(plVar3);
      plVar5 = (long *)0x0;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      plVar3[1] = (long)puVar2;
      *plVar3 = param_1;
      *puVar2 = plVar3;
      *(long **)(param_1 + 8) = plVar3;
      plVar5 = plVar3;
    }
  }
  return plVar5;
}

