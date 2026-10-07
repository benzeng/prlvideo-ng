
long FUN_00410d30(long param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  void *pvVar10;
  void *__dest;
  long *__ptr;
  long lVar11;
  int iVar12;
  
  if (param_1 == 0) {
    return 0;
  }
  __ptr = *(long **)(param_1 + 8);
  pcVar9 = (char *)*__ptr;
  if (pcVar9 == (char *)0x0) {
    iVar12 = 0;
    lVar8 = 0;
  }
  else {
    iVar12 = 0;
    lVar11 = 0x10;
    lVar3 = 0;
    do {
      lVar8 = lVar11;
      iVar2 = strcmp(pcVar9,param_2);
      if (iVar2 == 0) {
        lVar8 = lVar3;
        if ((*(byte *)(param_1 + 0x48) & 0x20) != 0) {
          free(param_2);
          __ptr = *(long **)(param_1 + 8);
        }
        goto LAB_00410d9f;
      }
      pcVar9 = *(char **)(lVar8 + (long)__ptr);
      iVar12 = iVar12 + 2;
      lVar11 = lVar8 + 0x10;
      lVar3 = lVar8;
    } while (pcVar9 != (char *)0x0);
  }
  if (param_3 == 0) {
    return param_1;
  }
  if (__ptr == (long *)PTR_EZXML_NIL_0061bd80) {
    pvVar10 = malloc(0x20);
    *(void **)(param_1 + 8) = pvVar10;
    if (DAT_0041913e == '\0') {
      puVar6 = calloc(1,1);
    }
    else {
      puVar6 = malloc(1);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
    }
    *(undefined1 **)((long)pvVar10 + 8) = puVar6;
  }
  else {
    pvVar10 = realloc(__ptr,(long)(iVar12 + 4) << 3);
    *(void **)(param_1 + 8) = pvVar10;
  }
  lVar11 = *(long *)(param_1 + 8);
  pcVar9 = *(char **)(lVar11 + 8 + lVar8);
  *(char **)(lVar8 + lVar11) = param_2;
  *(undefined8 *)(lVar11 + 0x10 + lVar8) = 0;
  sVar5 = strlen(pcVar9);
  iVar2 = (int)sVar5;
  pvVar10 = realloc(pcVar9,(long)(iVar2 + 2));
  *(void **)(lVar11 + 0x18 + lVar8) = pvVar10;
  *(undefined2 *)((long)iVar2 + *(long *)(*(long *)(param_1 + 8) + 0x18 + lVar8)) = 0x20;
  if ((*(byte *)(param_1 + 0x48) & 0x20) == 0) {
    __ptr = *(long **)(param_1 + 8);
  }
  else {
    *(undefined1 *)((long)iVar2 + *(long *)(*(long *)(param_1 + 8) + 0x18 + lVar8)) = 0x80;
    __ptr = *(long **)(param_1 + 8);
  }
LAB_00410d9f:
  lVar11 = (long)iVar12 * 8;
  iVar2 = iVar12;
  if (__ptr[iVar12] != 0) {
    plVar7 = __ptr + (iVar12 + 2);
    lVar3 = (long)(iVar12 + 2) * 8;
    do {
      lVar11 = lVar3;
      lVar1 = *plVar7;
      iVar2 = iVar2 + 2;
      plVar7 = plVar7 + 2;
      lVar3 = lVar11 + 0x10;
    } while (lVar1 != 0);
  }
  lVar3 = (long)(iVar12 / 2);
  if ((*(byte *)(*(long *)((long)__ptr + lVar11 + 8) + lVar3) & 0x40) != 0) {
    free(*(void **)((long)__ptr + lVar8 + 8));
    __ptr = *(long **)(param_1 + 8);
  }
  if ((*(byte *)(param_1 + 0x48) & 0x20) == 0) {
    pbVar4 = (byte *)(lVar3 + *(long *)((long)__ptr + lVar11 + 8));
    *pbVar4 = *pbVar4 & 0xbf;
  }
  else {
    pbVar4 = (byte *)(lVar3 + *(long *)((long)__ptr + lVar11 + 8));
    *pbVar4 = *pbVar4 | 0x40;
  }
  if (param_3 == 0) {
    if (*(char *)(lVar3 + *(long *)(*(long *)(param_1 + 8) + 8 + lVar11)) < '\0') {
      free(*(void **)(lVar8 + *(long *)(param_1 + 8)));
    }
    pvVar10 = (void *)(lVar8 + *(long *)(param_1 + 8));
    memmove(pvVar10,(void *)((long)pvVar10 + 0x10),(long)((2 - iVar12) + iVar2) << 3);
    pvVar10 = realloc(*(void **)(param_1 + 8),(long)(iVar2 + 2) << 3);
    __dest = (void *)(lVar3 + *(long *)((long)pvVar10 + lVar11 + 8));
    *(void **)(param_1 + 8) = pvVar10;
    memmove(__dest,(void *)((long)__dest + 1),(long)(iVar2 / 2 - iVar12 / 2));
  }
  else {
    *(long *)(*(long *)(param_1 + 8) + 8 + lVar8) = param_3;
  }
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xffdf;
  return param_1;
}

