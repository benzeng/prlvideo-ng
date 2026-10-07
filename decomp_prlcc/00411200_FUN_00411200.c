
void FUN_00411200(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  void *__ptr;
  size_t __len;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_00411200(param_1[7]);
    FUN_00411200(param_1[6]);
    if (param_1[8] == 0) {
      pvVar6 = (void *)param_1[0x10];
      if (*(long *)((long)pvVar6 + 0x50) != 0) {
        lVar9 = 0x50;
        lVar5 = 0x60;
        do {
          pvVar3 = *(void **)((long)pvVar6 + lVar9 + 8);
          if ((pvVar3 < (void *)param_1[0xe]) || ((void *)param_1[0xf] < pvVar3)) {
            free(pvVar3);
            pvVar6 = (void *)param_1[0x10];
          }
          plVar1 = (long *)((long)pvVar6 + lVar5);
          lVar9 = lVar5;
          lVar5 = lVar5 + 0x10;
        } while (*plVar1 != 0);
      }
      lVar9 = 8;
      free(pvVar6);
      pvVar6 = *(void **)param_1[0x11];
      if (pvVar6 != (void *)0x0) {
        do {
          lVar5 = *(long *)((long)pvVar6 + 8);
          pvVar3 = pvVar6;
          while (lVar5 != 0) {
            __ptr = *(void **)((long)pvVar3 + 0x10);
            if ((__ptr != (void *)0x0) &&
               ((__ptr < (void *)param_1[0xe] || ((void *)param_1[0xf] < __ptr)))) {
              free(__ptr);
            }
            lVar5 = *(long *)((long)pvVar3 + 0x20);
            pvVar3 = (void *)((long)pvVar3 + 0x18);
          }
          free(pvVar6);
          plVar1 = (long *)param_1[0x11];
          pvVar6 = *(void **)((long)plVar1 + lVar9);
          lVar9 = lVar9 + 8;
        } while (pvVar6 != (void *)0x0);
        if (*plVar1 != 0) {
          free(plVar1);
        }
      }
      lVar9 = *(long *)param_1[0x12];
      lVar5 = 8;
      lVar8 = 0;
      if (lVar9 != 0) {
        do {
          lVar7 = lVar5;
          lVar5 = 8;
          if (*(long *)(lVar9 + 8) != 0) {
            lVar4 = 0;
            do {
              lVar5 = lVar4;
              lVar4 = lVar5 + 8;
            } while (*(long *)(lVar5 + 0x10 + lVar9) != 0);
            lVar5 = lVar5 + 0x10;
          }
          free(*(void **)(lVar9 + 8 + lVar5));
          free(*(void **)(lVar8 + param_1[0x12]));
          plVar1 = (long *)param_1[0x12];
          lVar9 = *(long *)((long)plVar1 + lVar7);
          lVar5 = lVar7 + 8;
          lVar8 = lVar7;
        } while (lVar9 != 0);
        if (*plVar1 != 0) {
          free(plVar1);
        }
      }
      __len = param_1[0xc];
      if (__len == 0xffffffffffffffff) {
        free((void *)param_1[0xb]);
      }
      else if (__len != 0) {
        munmap((void *)param_1[0xb],__len);
      }
      if ((void *)param_1[0xd] != (void *)0x0) {
        free((void *)param_1[0xd]);
      }
    }
    FUN_00410c50(param_1[1]);
    if ((*(byte *)(param_1 + 9) & 0x40) == 0) {
      cVar2 = *(char *)(param_1 + 9);
    }
    else {
      free((void *)param_1[2]);
      cVar2 = *(char *)(param_1 + 9);
    }
    if (cVar2 < '\0') {
      free((void *)*param_1);
    }
    free(param_1);
    return;
  }
  return;
}

