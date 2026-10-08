
void FUN_100af9030(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = param_2;
  lVar7 = 0;
  if ((*param_2 != 0) && (lVar7 = *param_2, (long *)param_2[1] != (long *)0x0)) {
    lVar7 = 0;
    plVar2 = (long *)param_2[1];
    do {
      plVar6 = plVar2;
      plVar2 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  plVar2 = plVar6 + 1;
  if (lVar7 != 0) {
    plVar2 = plVar6;
  }
  plVar2 = (long *)*plVar2;
  if (plVar2 != (long *)0x0) {
    plVar2[2] = plVar6[2];
  }
  puVar4 = (undefined8 *)plVar6[2];
  plVar3 = (long *)*puVar4;
  if (plVar3 == plVar6) {
    *puVar4 = plVar2;
    plVar3 = (long *)0x0;
    plVar5 = plVar2;
    if (plVar6 != param_1) {
      plVar3 = (long *)puVar4[1];
      plVar5 = param_1;
    }
  }
  else {
    puVar4[1] = plVar2;
    plVar5 = param_1;
  }
  lVar7 = plVar6[3];
  if (plVar6 != param_2) {
    puVar4 = (undefined8 *)param_2[2];
    plVar6[2] = (long)puVar4;
    if (*(long **)param_2[2] == param_2) {
      *puVar4 = plVar6;
    }
    else {
      puVar4[1] = plVar6;
    }
    lVar1 = *param_2;
    *plVar6 = lVar1;
    *(long **)(lVar1 + 0x10) = plVar6;
    lVar1 = param_2[1];
    plVar6[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    if (plVar5 == param_2) {
      plVar5 = plVar6;
    }
  }
  if (((char)lVar7 == '\0') || (plVar5 == (long *)0x0)) {
    return;
  }
  if (plVar2 != (long *)0x0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    return;
  }
LAB_100af9123:
  while( true ) {
    plVar6 = (long *)plVar3[2];
    if ((long *)*plVar6 != plVar3) break;
    if ((char)plVar3[3] == '\0') {
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar6 + 3) = 0;
      lVar7 = *plVar6;
      lVar1 = *(long *)(lVar7 + 8);
      *plVar6 = lVar1;
      if (lVar1 != 0) {
        *(long **)(lVar1 + 0x10) = plVar6;
      }
      *(long *)(lVar7 + 0x10) = plVar6[2];
      plVar2 = (long *)plVar6[2];
      if ((long *)*plVar2 == plVar6) {
        *plVar2 = lVar7;
      }
      else {
        plVar2[1] = lVar7;
      }
      *(long **)(lVar7 + 8) = plVar6;
      plVar6[2] = lVar7;
      if (plVar5 == (long *)plVar3[1]) {
        plVar5 = plVar3;
      }
      plVar3 = *(long **)plVar3[1];
    }
    plVar6 = (long *)*plVar3;
    if ((plVar6 != (long *)0x0) && ((char)plVar6[3] == '\0')) {
LAB_100af92ca:
      if ((char)plVar6[3] == '\0') goto LAB_100af9375;
LAB_100af92d4:
      plVar2 = (long *)plVar3[1];
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      lVar7 = *plVar2;
      plVar3[1] = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar3;
      }
      plVar2[2] = plVar3[2];
      puVar4 = (undefined8 *)plVar3[2];
      if ((long *)*puVar4 == plVar3) {
        *puVar4 = plVar2;
      }
      else {
        puVar4[1] = plVar2;
      }
      *plVar2 = (long)plVar3;
      plVar3[2] = (long)plVar2;
      plVar6 = plVar3;
      plVar3 = plVar2;
LAB_100af9375:
      plVar2 = (long *)plVar3[2];
      *(char *)(plVar3 + 3) = (char)plVar2[3];
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar6 + 3) = 1;
      lVar7 = *plVar2;
      lVar1 = *(long *)(lVar7 + 8);
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        *(long **)(lVar1 + 0x10) = plVar2;
      }
      *(long *)(lVar7 + 0x10) = plVar2[2];
      plVar6 = (long *)plVar2[2];
      if ((long *)*plVar6 == plVar2) {
        *plVar6 = lVar7;
      }
      else {
        plVar6[1] = lVar7;
      }
      *(long **)(lVar7 + 8) = plVar2;
      plVar2[2] = lVar7;
      return;
    }
    if ((plVar3[1] != 0) && (*(char *)(plVar3[1] + 0x18) == '\0')) {
      if (plVar6 != (long *)0x0) goto LAB_100af92ca;
      goto LAB_100af92d4;
    }
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar6 = (long *)plVar3[2];
    if ((plVar6 == plVar5) || ((char)plVar6[3] == '\0')) {
      *(undefined1 *)(plVar6 + 3) = 1;
      return;
    }
    puVar4 = (undefined8 *)plVar6[2];
    if ((long *)*puVar4 == plVar6) {
      puVar4 = puVar4 + 1;
    }
    plVar3 = (long *)*puVar4;
  }
  if ((char)plVar3[3] == '\0') {
    *(undefined1 *)(plVar3 + 3) = 1;
    *(undefined1 *)(plVar6 + 3) = 0;
    plVar2 = (long *)plVar6[1];
    lVar7 = *plVar2;
    plVar6[1] = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 0x10) = plVar6;
    }
    plVar2[2] = plVar6[2];
    puVar4 = (undefined8 *)plVar6[2];
    if ((long *)*puVar4 == plVar6) {
      *puVar4 = plVar2;
    }
    else {
      puVar4[1] = plVar2;
    }
    *plVar2 = (long)plVar6;
    plVar6[2] = (long)plVar2;
    if (plVar5 == (long *)*plVar3) {
      plVar5 = plVar3;
    }
    plVar3 = (long *)((long *)*plVar3)[1];
  }
  plVar6 = (long *)*plVar3;
  if ((plVar6 == (long *)0x0) || ((char)plVar6[3] != '\0')) {
    plVar2 = (long *)plVar3[1];
    if ((plVar2 == (long *)0x0) || ((char)plVar2[3] != '\0')) {
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar6 = (long *)plVar3[2];
      plVar2 = plVar5;
      if ((plVar6 == plVar5) || (plVar2 = plVar6, (char)plVar6[3] == '\0')) {
        *(undefined1 *)(plVar2 + 3) = 1;
        return;
      }
      puVar4 = (undefined8 *)plVar6[2];
      if ((long *)*puVar4 == plVar6) {
        puVar4 = puVar4 + 1;
      }
      plVar3 = (long *)*puVar4;
      goto LAB_100af9123;
    }
LAB_100af928a:
    plVar5 = plVar3;
    if ((char)plVar2[3] == '\0') goto LAB_100af931a;
  }
  else {
    plVar2 = (long *)plVar3[1];
    if (plVar2 != (long *)0x0) goto LAB_100af928a;
  }
  *(undefined1 *)(plVar6 + 3) = 1;
  *(undefined1 *)(plVar3 + 3) = 0;
  lVar7 = plVar6[1];
  *plVar3 = lVar7;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 0x10) = plVar3;
  }
  plVar6[2] = plVar3[2];
  puVar4 = (undefined8 *)plVar3[2];
  if ((long *)*puVar4 == plVar3) {
    *puVar4 = plVar6;
  }
  else {
    puVar4[1] = plVar6;
  }
  plVar6[1] = (long)plVar3;
  plVar3[2] = (long)plVar6;
  plVar5 = plVar6;
  plVar2 = plVar3;
LAB_100af931a:
  lVar7 = plVar5[2];
  *(undefined1 *)(plVar5 + 3) = *(undefined1 *)(lVar7 + 0x18);
  *(undefined1 *)(lVar7 + 0x18) = 1;
  *(undefined1 *)(plVar2 + 3) = 1;
  plVar6 = *(long **)(lVar7 + 8);
  lVar1 = *plVar6;
  *(long *)(lVar7 + 8) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = lVar7;
  }
  plVar6[2] = *(long *)(lVar7 + 0x10);
  plVar2 = *(long **)(lVar7 + 0x10);
  if (*plVar2 == lVar7) {
    *plVar2 = (long)plVar6;
  }
  else {
    plVar2[1] = (long)plVar6;
  }
  *plVar6 = lVar7;
  *(long **)(lVar7 + 0x10) = plVar6;
  return;
}

