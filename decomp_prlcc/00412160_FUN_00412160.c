
void FUN_00412160(long *param_1,char *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined1 *puVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  size_t sVar18;
  undefined1 uVar19;
  
  param_2[param_3] = '\0';
  cVar2 = DAT_00419197;
  if (DAT_00419197 == '\0') {
    sVar12 = strlen(param_2);
  }
  else if (DAT_00419198 == '\0') {
    if ((*param_2 == '\0') || (*param_2 == DAT_00419197)) {
LAB_004125dd:
      sVar12 = 0;
    }
    else {
      sVar12 = 0;
      do {
        sVar12 = sVar12 + 1;
        if (param_2[sVar12] == '\0') break;
      } while (DAT_00419197 != param_2[sVar12]);
    }
  }
  else if (DAT_00419199 == '\0') {
    cVar1 = *param_2;
    if (((cVar1 == '\0') || (DAT_00419197 == cVar1)) || (DAT_00419198 == cVar1)) goto LAB_004125dd;
    sVar12 = 0;
    do {
      sVar12 = sVar12 + 1;
      cVar1 = param_2[sVar12];
      if ((cVar1 == '\0') || (DAT_00419197 == cVar1)) break;
    } while (DAT_00419198 != cVar1);
  }
  else if (DAT_0041919a == '\0') {
    cVar1 = *param_2;
    if (((cVar1 == '\0') || (DAT_00419197 == cVar1)) ||
       ((DAT_00419198 == cVar1 || (DAT_00419199 == cVar1)))) goto LAB_004125dd;
    sVar12 = 0;
    do {
      sVar12 = sVar12 + 1;
      cVar1 = param_2[sVar12];
      if (((cVar1 == '\0') || (DAT_00419197 == cVar1)) || (DAT_00419198 == cVar1)) break;
    } while (DAT_00419199 != cVar1);
  }
  else {
    sVar12 = strcspn(param_2,"\t\r\n ");
  }
  pcVar8 = param_2 + sVar12;
  if (*pcVar8 != '\0') {
    *pcVar8 = '\0';
    if (cVar2 == '\0') {
LAB_004122a0:
      sVar12 = 0;
    }
    else if (DAT_00419198 == '\0') {
      if (pcVar8[1] != cVar2) goto LAB_004122a0;
      sVar18 = 0;
      do {
        sVar12 = sVar18 + 1;
        lVar11 = sVar18 + 2;
        sVar18 = sVar12;
      } while (cVar2 == pcVar8[lVar11]);
    }
    else if (DAT_00419199 == '\0') {
      for (sVar12 = 0; (cVar2 == pcVar8[sVar12 + 1] || (DAT_00419198 == pcVar8[sVar12 + 1]));
          sVar12 = sVar12 + 1) {
      }
    }
    else if (DAT_0041919a == '\0') {
      for (sVar12 = 0;
          ((cVar1 = pcVar8[sVar12 + 1], cVar2 == cVar1 || (DAT_00419198 == cVar1)) ||
          (DAT_00419199 == cVar1)); sVar12 = sVar12 + 1) {
      }
    }
    else {
      sVar12 = strspn(pcVar8 + 1,"\t\r\n ");
    }
    pcVar8 = pcVar8 + 1 + sVar12;
  }
  if ((((s__s__config_monitors_xml_00417930[0x14] != *param_2) ||
       (s__s__config_monitors_xml_00417930[0x15] != param_2[1])) ||
      (s__s__config_monitors_xml_00417930[0x16] != param_2[2])) ||
     (s__s__config_monitors_xml_00417930[0x17] != param_2[3])) {
    plVar9 = (long *)param_1[0x12];
    puVar4 = (undefined8 *)*plVar9;
    if (puVar4 == (undefined8 *)0x0) {
      lVar11 = 0;
      plVar9 = malloc(8);
      sVar12 = 0x10;
      *plVar9 = 0;
      param_1[0x12] = (long)plVar9;
    }
    else {
      lVar16 = 8;
      lVar17 = 0;
      iVar3 = 0;
      do {
        iVar14 = iVar3;
        lVar11 = lVar16;
        iVar3 = strcmp(param_2,(char *)*puVar4);
        if (iVar3 == 0) goto LAB_0041231a;
        puVar4 = *(undefined8 **)(lVar11 + (long)plVar9);
        lVar16 = lVar11 + 8;
        lVar17 = lVar11;
        iVar3 = iVar14 + 1;
      } while (puVar4 != (undefined8 *)0x0);
      sVar12 = (long)(iVar14 + 3) * 8;
    }
    pvVar5 = realloc(plVar9,sVar12);
    param_1[0x12] = (long)pvVar5;
    pvVar6 = malloc(0x18);
    *(void **)(lVar11 + (long)pvVar5) = pvVar6;
    puVar4 = *(undefined8 **)(lVar11 + param_1[0x12]);
    *(undefined8 *)(param_1[0x12] + 8 + lVar11) = 0;
    *puVar4 = param_2;
    puVar4[1] = 0;
    if (DAT_0041913e == '\0') {
      puVar7 = calloc(1,1);
    }
    else {
      puVar7 = malloc(1);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
      }
    }
    puVar4[2] = puVar7;
    lVar17 = lVar11;
LAB_0041231a:
    lVar11 = param_1[0x12];
    pvVar5 = *(void **)(lVar17 + lVar11);
    lVar16 = 0;
    pvVar6 = pvVar5;
    if (*(long *)((long)pvVar5 + 8) == 0) {
      lVar15 = 8;
      sVar12 = 0x20;
      sVar18 = 2;
      lVar16 = 1;
    }
    else {
      do {
        lVar10 = lVar16;
        plVar9 = (long *)((long)pvVar6 + 0x10);
        lVar16 = lVar10 + 1;
        pvVar6 = (void *)((long)pvVar6 + 8);
      } while (*plVar9 != 0);
      lVar15 = (lVar10 + 1) * 8 + 8;
      lVar16 = lVar10 + 2;
      sVar12 = (long)((int)lVar10 + 5) * 8;
      sVar18 = (size_t)((int)lVar10 + 3);
    }
    pvVar5 = realloc(pvVar5,sVar12);
    *(void **)(lVar17 + lVar11) = pvVar5;
    lVar11 = *(long *)(lVar17 + param_1[0x12]);
    pvVar5 = realloc(*(void **)(lVar11 + 8 + lVar15),sVar18);
    *(void **)(lVar11 + 0x10 + lVar15) = pvVar5;
    pcVar13 = ">";
    if (*param_1 == 0) {
      pcVar13 = "<";
    }
    *(undefined2 *)(lVar16 + *(long *)(*(long *)(lVar17 + param_1[0x12]) + 0x10 + lVar15) + -1) =
         *(undefined2 *)pcVar13;
    lVar11 = *(long *)(lVar17 + param_1[0x12]);
    *(undefined8 *)(lVar11 + 8 + lVar15) = 0;
    *(char **)(lVar15 + lVar11) = pcVar8;
    return;
  }
  pcVar8 = strstr(pcVar8,"standalone");
  if (pcVar8 == (char *)0x0) {
    return;
  }
  if (DAT_004191a7 != '\0') {
    if (DAT_004191a8 != '\0') {
      if (DAT_004191a9 == '\0') {
        for (sVar12 = 0;
            (DAT_004191a7 == pcVar8[sVar12 + 10] || (DAT_004191a8 == pcVar8[sVar12 + 10]));
            sVar12 = sVar12 + 1) {
        }
        uVar19 = 0;
      }
      else {
        uVar19 = DAT_004191aa == '\0';
        if ((bool)uVar19) {
          for (sVar12 = 0;
              ((cVar2 = pcVar8[sVar12 + 10], DAT_004191a7 == cVar2 || (DAT_004191a8 == cVar2)) ||
              (DAT_004191a9 == cVar2)); sVar12 = sVar12 + 1) {
          }
          uVar19 = 0;
        }
        else {
          sVar12 = strspn(pcVar8 + 10,"\t\r\n =\'\"");
        }
      }
      goto LAB_00412544;
    }
    if (pcVar8[10] == DAT_004191a7) {
      sVar18 = 0;
      do {
        sVar12 = sVar18 + 1;
        lVar11 = sVar18 + 0xb;
        sVar18 = sVar12;
      } while (DAT_004191a7 == pcVar8[lVar11]);
      uVar19 = 0;
      goto LAB_00412544;
    }
  }
  sVar12 = 0;
  uVar19 = 1;
LAB_00412544:
  lVar11 = 3;
  pcVar8 = pcVar8 + sVar12 + 10;
  pcVar13 = "yes";
  do {
    if (lVar11 == 0) break;
    lVar11 = lVar11 + -1;
    uVar19 = *pcVar8 == *pcVar13;
    pcVar8 = pcVar8 + 1;
    pcVar13 = pcVar13 + 1;
  } while ((bool)uVar19);
  if ((bool)uVar19) {
    *(undefined2 *)(param_1 + 0x13) = 1;
  }
  return;
}

