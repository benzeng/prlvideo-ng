
void FUN_100ba37a0(long *param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  
  plVar2 = _malloc(0x48);
  if (plVar2 != (long *)0x0) {
    pcVar3 = _strdup(param_2);
    plVar2[3] = (long)pcVar3;
    if (pcVar3 != (char *)0x0) {
      plVar2[2] = 0;
      *(undefined4 *)(plVar2 + 6) = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[8] = (long)(plVar2 + 7);
      plVar2[7] = (long)(plVar2 + 7);
      if (*param_1 == 0) {
        *param_1 = (long)plVar2;
      }
      else {
        lVar1 = param_1[1];
        plVar2[2] = lVar1;
        *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
        plVar2[1] = *(long *)(lVar1 + 0x40);
        *plVar2 = lVar1 + 0x38;
        **(undefined8 **)(lVar1 + 0x40) = plVar2;
        *(long **)(lVar1 + 0x40) = plVar2;
      }
      param_1[1] = (long)plVar2;
      return;
    }
    _free(plVar2);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

