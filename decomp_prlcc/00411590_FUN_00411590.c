
void FUN_00411590(undefined8 *param_1,long *param_2,long *param_3,size_t *param_4,long param_5,
                 long *param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  char *pcVar10;
  long local_50;
  char *local_48;
  long local_40;
  long local_38;
  
LAB_004115b4:
  local_48 = "";
  if (param_1[8] != 0) {
    local_48 = *(char **)(param_1[8] + 0x10);
  }
  lVar3 = FUN_00411410(local_48 + param_5,param_1[3] - param_5,param_2,param_3,param_4,0);
  *param_2 = lVar3;
  while( true ) {
    pcVar10 = (char *)*param_1;
    lVar3 = *param_3;
    sVar4 = strlen(pcVar10);
    if (sVar4 + 4 + lVar3 <= *param_4) break;
    sVar4 = *param_4 + 0x400;
    pvVar8 = (void *)*param_2;
    *param_4 = sVar4;
    pvVar8 = realloc(pvVar8,sVar4);
    *param_2 = (long)pvVar8;
  }
  iVar2 = sprintf((char *)(lVar3 + *param_2),"<%s",pcVar10);
  *param_3 = iVar2 + lVar3;
  if (*(long *)param_1[1] != 0) {
    local_38 = 0x10;
    lVar3 = 0;
    do {
      lVar5 = FUN_004107b0(param_1);
      lVar7 = param_1[1];
      if (lVar5 == *(long *)(lVar7 + 8 + lVar3)) {
        while( true ) {
          pcVar10 = *(char **)(lVar3 + lVar7);
          lVar7 = *param_3;
          sVar4 = strlen(pcVar10);
          if (sVar4 + 7 + lVar7 <= *param_4) break;
          sVar4 = *param_4 + 0x400;
          pvVar8 = (void *)*param_2;
          *param_4 = sVar4;
          pvVar8 = realloc(pvVar8,sVar4);
          lVar7 = param_1[1];
          *param_2 = (long)pvVar8;
        }
        iVar2 = sprintf((char *)(lVar7 + *param_2)," %s=\"",pcVar10);
        *param_3 = iVar2 + lVar7;
        FUN_00411410(*(undefined8 *)(param_1[1] + 8 + lVar3),0xffffffffffffffff,param_2,param_3,
                     param_4,1);
        *(undefined2 *)(*param_3 + *param_2) = 0x22;
        *param_3 = *param_3 + 1;
        lVar7 = param_1[1];
      }
      plVar9 = (long *)(lVar7 + local_38);
      lVar3 = local_38;
      local_38 = local_38 + 0x10;
    } while (*plVar9 != 0);
  }
  puVar6 = (undefined8 *)*param_6;
  if (puVar6 != (undefined8 *)0x0) {
    pcVar10 = (char *)*param_1;
    plVar9 = param_6;
    do {
      iVar2 = strcmp((char *)*puVar6,pcVar10);
      if (iVar2 == 0) {
        lVar3 = *plVar9;
        if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
          local_50 = 8;
          local_40 = 0x20;
          goto LAB_004117d6;
        }
        break;
      }
      puVar6 = (undefined8 *)plVar9[1];
      plVar9 = plVar9 + 1;
    } while (puVar6 != (undefined8 *)0x0);
  }
  goto LAB_00411803;
  while( true ) {
    plVar1 = (long *)(lVar3 + local_40);
    local_50 = local_40;
    local_40 = local_40 + 0x18;
    if (*plVar1 == 0) break;
LAB_004117d6:
    if (*(long *)(lVar3 + 8 + local_50) != 0) {
      lVar7 = FUN_004107b0(param_1);
      lVar3 = *plVar9;
      if (lVar7 == *(long *)(lVar3 + 8 + local_50)) {
        while( true ) {
          pcVar10 = *(char **)(local_50 + lVar3);
          lVar3 = *param_3;
          sVar4 = strlen(pcVar10);
          if (sVar4 + 7 + lVar3 <= *param_4) break;
          sVar4 = *param_4 + 0x400;
          pvVar8 = (void *)*param_2;
          *param_4 = sVar4;
          pvVar8 = realloc(pvVar8,sVar4);
          lVar3 = *plVar9;
          *param_2 = (long)pvVar8;
        }
        iVar2 = sprintf((char *)(lVar3 + *param_2)," %s=\"",pcVar10);
        *param_3 = iVar2 + lVar3;
        FUN_00411410(*(undefined8 *)(*plVar9 + 8 + local_50),0xffffffffffffffff,param_2,param_3,
                     param_4,1);
        *(undefined2 *)(*param_3 + *param_2) = 0x22;
        *param_3 = *param_3 + 1;
        lVar3 = *plVar9;
      }
    }
    if (lVar3 == 0) break;
  }
LAB_00411803:
  *(undefined2 *)(*param_3 + *param_2) = 0x3e;
  lVar3 = param_1[7];
  *param_3 = *param_3 + 1;
  if (lVar3 == 0) {
    pvVar8 = (void *)FUN_00411410(param_1[2],0xffffffffffffffff,param_2,param_3,param_4,0);
  }
  else {
    pvVar8 = (void *)FUN_00411590(lVar3,param_2,param_3,param_4,0);
  }
  while( true ) {
    *param_2 = (long)pvVar8;
    pcVar10 = (char *)*param_1;
    lVar3 = *param_3;
    sVar4 = strlen(pcVar10);
    if (sVar4 + 4 + lVar3 <= *param_4) break;
    sVar4 = *param_4 + 0x400;
    pvVar8 = (void *)*param_2;
    *param_4 = sVar4;
    pvVar8 = realloc(pvVar8,sVar4);
  }
  iVar2 = sprintf((char *)(lVar3 + *param_2),"</%s>",pcVar10);
  *param_3 = iVar2 + lVar3;
  if ((*local_48 == '\0') || (param_1[3] == 0)) {
    param_5 = 0;
    pcVar10 = local_48;
  }
  else {
    param_5 = 0;
    do {
      param_5 = param_5 + 1;
      pcVar10 = local_48 + param_5;
      if (*pcVar10 == '\0') break;
    } while (param_5 != param_1[3]);
  }
  param_1 = (undefined8 *)param_1[6];
  if (param_1 == (undefined8 *)0x0) {
    FUN_00411410(pcVar10,0xffffffffffffffff,param_2,param_3,param_4,0);
    return;
  }
  goto LAB_004115b4;
}

