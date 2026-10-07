
/* WARNING: Type propagation algorithm not settling */

int * FUN_100724ff0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  int *piVar18;
  long *plVar19;
  double dVar20;
  char *local_38;
  
  if (1 < *(int *)(param_1 + 0x30)) {
    return (int *)0x0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    piVar7 = _malloc(0x30);
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7[6] = 1;
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x38);
    pcVar10 = *(char **)(lVar12 + 0x18);
    iVar6 = _strcmp(pcVar10,"struct");
    if (iVar6 == 0) {
      piVar7 = _malloc(0x30);
      if (piVar7 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar7[6] = 0;
      piVar7[7] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7[0] = 0;
      piVar7[1] = 0;
      piVar7[6] = 1;
      *piVar7 = 7;
      piVar18 = piVar7 + 8;
      *(int **)(piVar7 + 10) = piVar18;
      *(int **)(piVar7 + 8) = piVar18;
      puVar3 = *(undefined8 **)(lVar12 + 0x38);
      while( true ) {
        if (puVar3 == (undefined8 *)(lVar12 + 0x38)) {
          return piVar7;
        }
        iVar6 = _strcmp((char *)puVar3[3],"member");
        if ((iVar6 != 0) || (*(int *)(puVar3 + 6) != 2)) break;
        plVar16 = puVar3 + 7;
        plVar19 = plVar16;
        do {
          plVar19 = (long *)*plVar19;
          if (plVar19 == plVar16) goto LAB_100725487;
          iVar6 = _strcmp("name",(char *)plVar19[3]);
        } while (iVar6 != 0);
        if ((plVar19[5] == 0) || (plVar15 = plVar16, *(char *)plVar19[4] == '\0')) break;
        do {
          plVar15 = (long *)*plVar15;
          if (plVar15 == plVar16) goto LAB_100725487;
          iVar6 = _strcmp("value",(char *)plVar15[3]);
        } while (iVar6 != 0);
        lVar8 = FUN_100724ff0(plVar15);
        if (lVar8 == 0) break;
        if (*piVar7 != 7) {
          return (int *)0x0;
        }
        pcVar10 = (char *)plVar19[4];
        puVar9 = _malloc(0x20);
        if (puVar9 == (undefined8 *)0x0) break;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[1] = puVar9;
        *puVar9 = puVar9;
        pcVar10 = _strdup(pcVar10);
        puVar9[2] = pcVar10;
        puVar9[3] = lVar8;
        puVar1 = *(undefined8 **)(piVar7 + 10);
        puVar9[1] = puVar1;
        *puVar9 = piVar18;
        *puVar1 = puVar9;
        *(undefined8 **)(piVar7 + 10) = puVar9;
        puVar3 = (undefined8 *)*puVar3;
      }
LAB_100725487:
      if (*piVar7 == 7) {
        piVar5 = *(int **)piVar18;
        while (piVar5 != piVar18) {
          piVar2 = *(int **)piVar5;
          FUN_100724b70(*(undefined8 *)(piVar5 + 6));
          _free(*(void **)(piVar5 + 4));
          _free(piVar5);
          piVar5 = piVar2;
        }
        _free(piVar7);
        return (int *)0x0;
      }
      return (int *)0x0;
    }
    iVar6 = _strcmp(pcVar10,"array");
    if (iVar6 == 0) {
      plVar16 = (long *)(lVar12 + 0x38);
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)(lVar12 + 0x38)) {
          return (int *)0x0;
        }
        iVar6 = _strcmp("data",(char *)plVar16[3]);
      } while (iVar6 != 0);
      if (*(int *)(lVar12 + 0x30) != 1) {
        return (int *)0x0;
      }
      piVar7 = _malloc(0x30);
      if (piVar7 != (int *)0x0) {
        piVar7[10] = 0;
        piVar7[0xb] = 0;
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        *piVar7 = 6;
        pvVar13 = _malloc(0x200);
        *(void **)(piVar7 + 8) = pvVar13;
        if (pvVar13 == (void *)0x0) {
          _free(piVar7);
          piVar7 = (int *)0x0;
        }
        else {
          piVar7[4] = 0x40;
          piVar7[5] = 0;
        }
      }
      puVar3 = (undefined8 *)plVar16[7];
      do {
        if (puVar3 == plVar16 + 7) {
          return piVar7;
        }
        lVar12 = FUN_100724ff0(puVar3);
        if (lVar12 == 0) {
          if (*piVar7 == 6) {
            uVar11 = 0;
            if (*(long *)(piVar7 + 2) != 0) {
              do {
                FUN_100724b70(*(undefined8 *)(*(long *)(piVar7 + 8) + uVar11 * 8));
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ulong *)(piVar7 + 2));
            }
            if (*(long *)(piVar7 + 4) != 0) {
              _free(*(void **)(piVar7 + 8));
            }
            _free(piVar7);
            return (int *)0x0;
          }
          return (int *)0x0;
        }
        if (*piVar7 == 6) {
          lVar8 = *(long *)(piVar7 + 2);
          if (*(long *)(piVar7 + 4) == lVar8) {
            pvVar13 = _realloc(*(void **)(piVar7 + 8),*(long *)(piVar7 + 4) * 8 + 0x200);
            if (pvVar13 == (void *)0x0) goto LAB_10072556d;
            *(void **)(piVar7 + 8) = pvVar13;
            *(long *)(piVar7 + 4) = *(long *)(piVar7 + 4) + 0x40;
            lVar8 = *(long *)(piVar7 + 2);
          }
          else {
            pvVar13 = *(void **)(piVar7 + 8);
          }
          *(long *)(piVar7 + 2) = lVar8 + 1;
          *(long *)((long)pvVar13 + lVar8 * 8) = lVar12;
        }
LAB_10072556d:
        puVar3 = (undefined8 *)*puVar3;
      } while( true );
    }
    piVar7 = _malloc(0x30);
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7[6] = 1;
    pcVar10 = *(char **)(lVar12 + 0x18);
    iVar6 = _strcmp(pcVar10,"i4");
    if ((iVar6 == 0) || (iVar6 = _strcmp(pcVar10,"int"), iVar6 == 0)) {
      pcVar10 = *(char **)(lVar12 + 0x20);
      local_38 = (char *)0x0;
      *piVar7 = 1;
LAB_10072546d:
      uVar11 = _strtoul(pcVar10,&local_38,10);
      piVar7[8] = (int)uVar11;
      return piVar7;
    }
    iVar6 = _strcmp(pcVar10,"string");
    if (iVar6 != 0) {
      iVar6 = _strcmp(pcVar10,"boolean");
      if (iVar6 == 0) {
        pcVar10 = *(char **)(lVar12 + 0x20);
        *piVar7 = 4;
        goto LAB_10072546d;
      }
      iVar6 = _strcmp(pcVar10,"nil");
      if (iVar6 == 0) {
        *piVar7 = 8;
        return piVar7;
      }
      iVar6 = _strcmp(pcVar10,"double");
      if (iVar6 == 0) {
        pcVar10 = *(char **)(lVar12 + 0x20);
        local_38 = (char *)0x0;
        *piVar7 = 9;
        dVar20 = _strtod(pcVar10,&local_38);
        *(double *)(piVar7 + 8) = dVar20;
        return piVar7;
      }
      iVar6 = _strcmp(pcVar10,"base64");
      if (iVar6 == 0) {
        uVar17 = *(undefined8 *)(lVar12 + 0x20);
        sVar4 = *(size_t *)(lVar12 + 0x28);
        pvVar13 = _malloc(sVar4);
        if (pvVar13 != (void *)0x0) {
          *piVar7 = 5;
          iVar6 = FUN_100727b20(uVar17,sVar4 & 0xffffffff,pvVar13);
          *(void **)(piVar7 + 8) = pvVar13;
          *(long *)(piVar7 + 2) = (long)iVar6;
          return piVar7;
        }
      }
      else {
        iVar6 = _strcmp(pcVar10,"dateTime.iso8601");
        if (iVar6 == 0) {
          *piVar7 = 10;
        }
      }
      goto LAB_10072562e;
    }
    uVar17 = *(undefined8 *)(lVar12 + 0x20);
    uVar14 = *(undefined8 *)(lVar12 + 0x28);
  }
  iVar6 = FUN_1007263e0(piVar7,uVar17,uVar14);
  if (iVar6 == 0) {
    return piVar7;
  }
LAB_10072562e:
  FUN_100724b70(piVar7);
  return (int *)0x0;
}

