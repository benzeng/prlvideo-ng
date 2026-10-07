
undefined8 FUN_100724da0(int *param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  if (*param_1 == 7) {
    plVar3 = _malloc(0x20);
    uVar2 = 0xfffffffe;
    if (plVar3 != (long *)0x0) {
      plVar3[3] = 0;
      plVar3[2] = 0;
      plVar3[1] = 0;
      *plVar3 = 0;
      plVar3[1] = (long)plVar3;
      *plVar3 = (long)plVar3;
      pcVar4 = _strdup(param_2);
      plVar3[2] = (long)pcVar4;
      plVar3[3] = param_3;
      puVar1 = *(undefined8 **)(param_1 + 10);
      plVar3[1] = (long)puVar1;
      *plVar3 = (long)(param_1 + 8);
      *puVar1 = plVar3;
      *(long **)(param_1 + 10) = plVar3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

