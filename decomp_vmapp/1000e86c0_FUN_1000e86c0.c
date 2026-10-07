
void FUN_1000e86c0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = param_2;
  lVar6 = 0;
  if ((*param_2 != 0) && (lVar6 = *param_2, (long *)param_2[1] != (long *)0x0)) {
    lVar6 = 0;
    plVar1 = (long *)param_2[1];
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  plVar1 = plVar4 + 1;
  if (lVar6 != 0) {
    plVar1 = plVar4;
  }
  plVar1 = (long *)*plVar1;
  if (plVar1 != (long *)0x0) {
    plVar1[2] = plVar4[2];
  }
  puVar3 = (undefined8 *)plVar4[2];
  if ((long *)*puVar3 == plVar4) {
    *puVar3 = plVar1;
    plVar2 = (long *)0x0;
    plVar7 = plVar1;
    if (plVar4 != param_1) {
      plVar2 = *(long **)(plVar4[2] + 8);
      plVar7 = param_1;
    }
  }
  else {
    puVar3[1] = plVar1;
    plVar2 = *(long **)plVar4[2];
    plVar7 = param_1;
  }
  lVar6 = plVar4[3];
  if (plVar4 != param_2) {
    puVar3 = (undefined8 *)param_2[2];
    plVar4[2] = (long)puVar3;
    if (*(long **)param_2[2] == param_2) {
      *puVar3 = plVar4;
    }
    else {
      puVar3[1] = plVar4;
    }
    lVar5 = *param_2;
    *plVar4 = lVar5;
    *(long **)(lVar5 + 0x10) = plVar4;
    lVar5 = param_2[1];
    plVar4[1] = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = plVar4;
    }
    *(char *)(plVar4 + 3) = (char)param_2[3];
    if (plVar7 == param_2) {
      plVar7 = plVar4;
    }
  }
  if (((char)lVar6 == '\0') || (plVar7 == (long *)0x0)) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    return;
  }
LAB_1000e87b3:
  while( true ) {
    puVar3 = (undefined8 *)plVar2[2];
    if ((long *)*puVar3 != plVar2) break;
    if ((char)plVar2[3] == '\0') {
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(puVar3 + 3) = 0;
      plVar4 = (long *)plVar2[2];
      lVar6 = *plVar4;
      lVar5 = *(long *)(lVar6 + 8);
      *plVar4 = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar4;
      }
      *(long *)(lVar6 + 0x10) = plVar4[2];
      plVar1 = (long *)plVar4[2];
      if ((long *)*plVar1 == plVar4) {
        *plVar1 = lVar6;
      }
      else {
        plVar1[1] = lVar6;
      }
      *(long **)(lVar6 + 8) = plVar4;
      plVar4[2] = lVar6;
      if (plVar7 == (long *)plVar2[1]) {
        plVar7 = plVar2;
      }
      plVar2 = *(long **)plVar2[1];
    }
    lVar6 = *plVar2;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) == '\0')) {
LAB_1000e8961:
      if (*(char *)(lVar6 + 0x18) != '\0') {
LAB_1000e896b:
        *(undefined1 *)(plVar2[1] + 0x18) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        plVar4 = (long *)plVar2[1];
        lVar6 = *plVar4;
        plVar2[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar2;
        }
        plVar4[2] = plVar2[2];
        puVar3 = (undefined8 *)plVar2[2];
        if ((long *)*puVar3 == plVar2) {
          *puVar3 = plVar4;
        }
        else {
          puVar3[1] = plVar4;
        }
        *plVar4 = (long)plVar2;
        plVar2[2] = (long)plVar4;
        plVar2 = plVar4;
      }
      *(undefined1 *)(plVar2 + 3) = *(undefined1 *)(plVar2[2] + 0x18);
      *(undefined1 *)(plVar2[2] + 0x18) = 1;
      *(undefined1 *)(*plVar2 + 0x18) = 1;
      plVar4 = (long *)plVar2[2];
      plVar1 = (long *)*plVar4;
      lVar6 = plVar1[1];
      *plVar4 = lVar6;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar4;
      }
      plVar1[2] = plVar4[2];
      puVar3 = (undefined8 *)plVar4[2];
      if ((long *)*puVar3 == plVar4) {
        *puVar3 = plVar1;
      }
      else {
        puVar3[1] = plVar1;
      }
      plVar1[1] = (long)plVar4;
      goto LAB_1000e8a5b;
    }
    if ((plVar2[1] != 0) && (*(char *)(plVar2[1] + 0x18) == '\0')) {
      if (lVar6 != 0) goto LAB_1000e8961;
      goto LAB_1000e896b;
    }
    *(undefined1 *)(plVar2 + 3) = 0;
    plVar4 = (long *)plVar2[2];
    if ((plVar4 == plVar7) || ((char)plVar4[3] == '\0')) {
      *(undefined1 *)(plVar4 + 3) = 1;
      return;
    }
    puVar3 = (undefined8 *)plVar4[2];
    if ((long *)*puVar3 == plVar4) {
      puVar3 = puVar3 + 1;
    }
    plVar2 = (long *)*puVar3;
  }
  if ((char)plVar2[3] == '\0') {
    *(undefined1 *)(plVar2 + 3) = 1;
    *(undefined1 *)(puVar3 + 3) = 0;
    lVar6 = plVar2[2];
    plVar4 = *(long **)(lVar6 + 8);
    lVar5 = *plVar4;
    *(long *)(lVar6 + 8) = lVar5;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar6;
    }
    plVar4[2] = *(long *)(lVar6 + 0x10);
    plVar1 = *(long **)(lVar6 + 0x10);
    if (*plVar1 == lVar6) {
      *plVar1 = (long)plVar4;
    }
    else {
      plVar1[1] = (long)plVar4;
    }
    *plVar4 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar4;
    if (plVar7 == (long *)*plVar2) {
      plVar7 = plVar2;
    }
    plVar2 = (long *)((long *)*plVar2)[1];
  }
  lVar6 = *plVar2;
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) != '\0')) {
    lVar5 = plVar2[1];
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x18) != '\0')) {
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar4 = (long *)plVar2[2];
      plVar1 = plVar7;
      if ((plVar4 == plVar7) || (plVar1 = plVar4, (char)plVar4[3] == '\0')) {
        *(undefined1 *)(plVar1 + 3) = 1;
        return;
      }
      puVar3 = (undefined8 *)plVar4[2];
      if ((long *)*puVar3 == plVar4) {
        puVar3 = puVar3 + 1;
      }
      plVar2 = (long *)*puVar3;
      goto LAB_1000e87b3;
    }
LAB_1000e891e:
    if (*(char *)(lVar5 + 0x18) != '\0') goto LAB_1000e8924;
  }
  else {
    lVar5 = plVar2[1];
    if (lVar5 != 0) goto LAB_1000e891e;
LAB_1000e8924:
    *(undefined1 *)(lVar6 + 0x18) = 1;
    *(undefined1 *)(plVar2 + 3) = 0;
    plVar4 = (long *)*plVar2;
    lVar6 = plVar4[1];
    *plVar2 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 0x10) = plVar2;
    }
    plVar4[2] = plVar2[2];
    puVar3 = (undefined8 *)plVar2[2];
    if ((long *)*puVar3 == plVar2) {
      *puVar3 = plVar4;
    }
    else {
      puVar3[1] = plVar4;
    }
    plVar4[1] = (long)plVar2;
    plVar2[2] = (long)plVar4;
    plVar2 = plVar4;
  }
  *(undefined1 *)(plVar2 + 3) = *(undefined1 *)(plVar2[2] + 0x18);
  *(undefined1 *)(plVar2[2] + 0x18) = 1;
  *(undefined1 *)(plVar2[1] + 0x18) = 1;
  plVar4 = (long *)plVar2[2];
  plVar1 = (long *)plVar4[1];
  lVar6 = *plVar1;
  plVar4[1] = lVar6;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 0x10) = plVar4;
  }
  plVar1[2] = plVar4[2];
  plVar2 = (long *)plVar4[2];
  if ((long *)*plVar2 == plVar4) {
    *plVar2 = (long)plVar1;
    *plVar1 = (long)plVar4;
  }
  else {
    plVar2[1] = (long)plVar1;
    *plVar1 = (long)plVar4;
  }
LAB_1000e8a5b:
  plVar4[2] = (long)plVar1;
  return;
}

