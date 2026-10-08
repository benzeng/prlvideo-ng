
int * FUN_100ba4a20(undefined8 *param_1)

{
  char *pcVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 *puVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  int *piVar8;
  
  piVar2 = _malloc(0x30);
  piVar8 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[0] = 0;
    piVar2[1] = 0;
    *piVar2 = 6;
    pvVar3 = _malloc(0x200);
    *(void **)(piVar2 + 8) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      _free(piVar2);
LAB_100ba4bac:
      piVar8 = (int *)0x0;
    }
    else {
      piVar2[4] = 0x40;
      piVar2[5] = 0;
      pcVar1 = (char *)*param_1;
      while (piVar8 = piVar2, pcVar1 != (char *)0x0) {
        param_1 = param_1 + 1;
        puVar4 = _malloc(0x30);
        if (puVar4 == (undefined8 *)0x0) {
LAB_100ba4ba4:
          FUN_100ba3950(piVar2);
          goto LAB_100ba4bac;
        }
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 3) = 1;
        *(undefined4 *)puVar4 = 3;
        pcVar5 = _strdup(pcVar1);
        puVar4[4] = pcVar5;
        if (pcVar5 == (char *)0x0) {
          FUN_100ba3950(puVar4);
        }
        else {
          sVar6 = _strlen(pcVar1);
          puVar4[1] = sVar6;
        }
        if (*piVar2 != 6) {
LAB_100ba4b9c:
          FUN_100ba3950(puVar4);
          goto LAB_100ba4ba4;
        }
        lVar7 = *(long *)(piVar2 + 2);
        if (*(long *)(piVar2 + 4) == lVar7) {
          pvVar3 = _realloc(*(void **)(piVar2 + 8),*(long *)(piVar2 + 4) * 8 + 0x200);
          if (pvVar3 == (void *)0x0) goto LAB_100ba4b9c;
          *(void **)(piVar2 + 8) = pvVar3;
          *(long *)(piVar2 + 4) = *(long *)(piVar2 + 4) + 0x40;
          lVar7 = *(long *)(piVar2 + 2);
        }
        else {
          pvVar3 = *(void **)(piVar2 + 8);
        }
        *(long *)(piVar2 + 2) = lVar7 + 1;
        *(undefined8 **)((long)pvVar3 + lVar7 * 8) = puVar4;
        pcVar1 = (char *)*param_1;
      }
    }
  }
  return piVar8;
}

