
undefined8 FUN_10035d3e0(undefined8 param_1,int *param_2,char param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int local_38;
  int local_34;
  
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 == 0) {
    return 3;
  }
  lVar2 = *(long *)(param_2 + 10);
  if (lVar2 == 0) {
    return 3;
  }
  if (param_3 == '\0') {
    if (((*(int *)(lVar9 + 0x2c) == -1) &&
        ((*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x28),0x8867,&local_38), local_38 == 0)) ||
       ((*(int *)(lVar9 + 0x34) == -1 &&
        ((*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x30),0x8867,&local_38), local_38 == 0)))) {
      return 2;
    }
    if (((*(int *)(lVar2 + 0x2c) == -1) &&
        ((*DAT_1011c6130)(*(undefined4 *)(lVar2 + 0x28),0x8867,&local_34), local_34 == 0)) ||
       ((*(int *)(lVar2 + 0x34) == -1 &&
        ((*DAT_1011c6130)(*(undefined4 *)(lVar2 + 0x30),0x8867,&local_34), local_34 == 0)))) {
      return 2;
    }
  }
  do {
    lVar3 = **(long **)(lVar9 + 8);
    if (*param_2 == 0x12) {
      if (param_2[1] == 0) {
        iVar6 = 0;
        if (*(char *)(lVar9 + 0x38) == '\0') {
          iVar6 = *(int *)(lVar9 + 0x2c);
          if (iVar6 == -1) {
            (*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x28),0x8866,lVar9 + 0x2c);
            iVar6 = *(int *)(lVar9 + 0x2c);
          }
          iVar7 = *(int *)(lVar9 + 0x34);
          if (iVar7 == -1) {
            (*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x30),0x8866,lVar9 + 0x34);
            iVar7 = *(int *)(lVar9 + 0x34);
          }
          if (iVar6 == iVar7) goto LAB_10035d5c9;
          iVar6 = param_2[1];
        }
        param_2[1] = iVar6 + 1;
      }
    }
    else if (*param_2 == 0x11) {
      iVar6 = *(int *)(lVar9 + 0x2c);
      if (iVar6 == -1) {
        (*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x28),0x8866,lVar9 + 0x2c);
        iVar6 = *(int *)(lVar9 + 0x2c);
      }
      param_2[1] = param_2[1] + iVar6;
      iVar6 = *(int *)(lVar9 + 0x34);
      if (iVar6 == -1) {
        (*DAT_1011c6130)(*(undefined4 *)(lVar9 + 0x30),0x8866,lVar9 + 0x34);
        iVar6 = *(int *)(lVar9 + 0x34);
      }
      param_2[2] = param_2[2] + iVar6;
    }
LAB_10035d5c9:
    piVar1 = (int *)(lVar9 + 0x20);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      plVar8 = *(long **)(lVar9 + 0x18);
      pvVar4 = (void *)*plVar8;
      if (pvVar4 != (void *)0x0) {
        (*DAT_1011c5b50)(1,(long)pvVar4 + 0x28);
        (*DAT_1011c5b50)(1,(long)pvVar4 + 0x30);
        operator_delete(pvVar4);
        plVar8 = *(long **)(lVar9 + 0x18);
      }
      lVar5 = *(long *)(lVar9 + 0x10);
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar9 + 8);
      *(long *)(*(long *)(lVar9 + 8) + 0x10) = lVar5;
      *(long *)(lVar9 + 8) = lVar9;
      *(long *)(lVar9 + 0x10) = lVar9;
      *plVar8 = lVar9;
    }
    if ((lVar9 == lVar2) || (lVar9 = lVar3, lVar3 == 0)) {
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      return 0;
    }
  } while( true );
}

