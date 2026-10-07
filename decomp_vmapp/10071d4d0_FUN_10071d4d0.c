
undefined8 FUN_10071d4d0(long param_1,char *param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  plVar2 = _malloc(0x28);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    pcVar3 = _strdup(param_2);
    plVar2[2] = (long)pcVar3;
    pcVar4 = _strdup(param_3);
    plVar2[3] = (long)pcVar4;
    pcVar4 = (char *)0x0;
    if (param_4 != (char *)0x0) {
      pcVar4 = _strdup(param_4);
      plVar2[4] = (long)pcVar4;
      pcVar3 = (char *)plVar2[2];
    }
    if (pcVar3 != (char *)0x0) {
      if ((plVar2[3] != 0) && (param_4 == (char *)0x0 || pcVar4 != (char *)0x0)) {
        puVar1 = *(undefined8 **)(param_1 + 8);
        plVar2[1] = (long)puVar1;
        *plVar2 = param_1;
        *puVar1 = plVar2;
        *(long **)(param_1 + 8) = plVar2;
        return 0;
      }
      _free(pcVar3);
    }
    if ((void *)plVar2[3] != (void *)0x0) {
      _free((void *)plVar2[3]);
    }
    if ((void *)plVar2[4] != (void *)0x0) {
      _free((void *)plVar2[4]);
    }
    _free(plVar2);
  }
  uVar5 = FUN_10071e690(0xfffffffe,0);
  return uVar5;
}

