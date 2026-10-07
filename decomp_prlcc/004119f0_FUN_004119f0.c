
void FUN_004119f0(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  long local_88;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 *local_48;
  size_t local_40;
  long local_38;
  
  if (param_1 == (long *)0x0) {
    local_38 = 0;
    local_40 = 0x400;
    local_48 = malloc(0x400);
    *local_48 = 0;
  }
  else {
    lVar6 = param_1[6];
    lVar5 = param_1[8];
    local_38 = 0;
    local_40 = 0x400;
    local_48 = malloc(0x400);
    *local_48 = 0;
    if (*param_1 != 0) {
      plVar10 = (long *)param_1[8];
      plVar3 = param_1;
      while (plVar2 = plVar10, plVar2 != (long *)0x0) {
        plVar3 = plVar2;
        plVar10 = (long *)plVar2[8];
      }
      if (lVar5 == 0) {
        plVar10 = (long *)plVar3[0x12];
        local_70 = 8;
        lVar5 = *plVar10;
        lVar12 = 0;
        while (lVar5 != 0) {
          local_88 = 0x10;
          if (*(long *)(lVar5 + 8) != 0) {
            lVar11 = 0;
            do {
              local_88 = lVar11;
              lVar11 = local_88 + 8;
            } while (*(long *)(local_88 + 0x10 + lVar5) != 0);
            local_88 = local_88 + 0x18;
          }
          lVar5 = *(long *)(lVar12 + (long)plVar10);
          pcVar13 = *(char **)(lVar5 + 8);
          if (pcVar13 != (char *)0x0) {
            local_68 = 2;
            lVar11 = 1;
            do {
              if (*(char *)(*(long *)(local_88 + lVar5) + -1 + lVar11) != '>') {
                while( true ) {
                  pcVar1 = (char *)**(undefined8 **)(lVar12 + (long)plVar10);
                  sVar7 = strlen(pcVar1);
                  lVar5 = local_38;
                  sVar8 = strlen(pcVar13);
                  if (sVar7 + 7 + lVar5 + sVar8 <= local_40) break;
                  local_40 = local_40 + 0x400;
                  local_48 = realloc(local_48,local_40);
                  plVar10 = (long *)plVar3[0x12];
                }
                puVar9 = &DAT_0041919a;
                if (*pcVar13 == '\0') {
                  puVar9 = &DAT_0041913e;
                }
                iVar4 = sprintf(local_48 + lVar5,"<?%s%s%s?>\n",pcVar1,puVar9,pcVar13);
                local_38 = local_38 + iVar4;
                plVar10 = (long *)plVar3[0x12];
              }
              lVar5 = *(long *)(lVar12 + (long)plVar10);
              pcVar13 = *(char **)(lVar5 + local_68 * 8);
              lVar11 = local_68;
              local_68 = local_68 + 1;
            } while (pcVar13 != (char *)0x0);
          }
          lVar5 = *(long *)((long)plVar10 + local_70);
          lVar12 = local_70;
          local_70 = local_70 + 8;
        }
        lVar5 = plVar3[0x11];
        param_1[6] = 0;
        param_1[8] = 0;
        local_48 = (undefined1 *)FUN_00411590(param_1,&local_48,&local_38,&local_40,0,lVar5);
        local_78 = 8;
        param_1[8] = 0;
        param_1[6] = lVar6;
        plVar10 = (long *)plVar3[0x12];
        lVar6 = *plVar10;
        lVar5 = 0;
        while (lVar6 != 0) {
          local_58 = 0x10;
          if (*(long *)(lVar6 + 8) != 0) {
            lVar12 = 0;
            do {
              local_58 = lVar12;
              lVar12 = local_58 + 8;
            } while (*(long *)(local_58 + 0x10 + lVar6) != 0);
            local_58 = local_58 + 0x18;
          }
          lVar6 = *(long *)(lVar5 + (long)plVar10);
          pcVar13 = *(char **)(lVar6 + 8);
          if (pcVar13 != (char *)0x0) {
            local_60 = 2;
            lVar12 = 1;
            do {
              if (*(char *)(*(long *)(local_58 + lVar6) + -1 + lVar12) != '<') {
                while( true ) {
                  pcVar1 = (char *)**(undefined8 **)(lVar5 + (long)plVar10);
                  sVar7 = strlen(pcVar1);
                  lVar6 = local_38;
                  sVar8 = strlen(pcVar13);
                  if (sVar7 + 7 + lVar6 + sVar8 <= local_40) break;
                  local_40 = local_40 + 0x400;
                  local_48 = realloc(local_48,local_40);
                  plVar10 = (long *)plVar3[0x12];
                }
                puVar9 = &DAT_0041919a;
                if (*pcVar13 == '\0') {
                  puVar9 = &DAT_0041913e;
                }
                iVar4 = sprintf(local_48 + lVar6,"\n<?%s%s%s?>",pcVar1,puVar9,pcVar13);
                local_38 = local_38 + iVar4;
                plVar10 = (long *)plVar3[0x12];
              }
              lVar6 = *(long *)(lVar5 + (long)plVar10);
              pcVar13 = *(char **)(lVar6 + local_60 * 8);
              lVar12 = local_60;
              local_60 = local_60 + 1;
            } while (pcVar13 != (char *)0x0);
          }
          lVar6 = *(long *)((long)plVar10 + local_78);
          lVar5 = local_78;
          local_78 = local_78 + 8;
        }
      }
      else {
        lVar12 = plVar3[0x11];
        param_1[6] = 0;
        param_1[8] = 0;
        local_48 = (undefined1 *)FUN_00411590(param_1,&local_48,&local_38,&local_40,0,lVar12);
        param_1[8] = lVar5;
        param_1[6] = lVar6;
      }
      realloc(local_48,local_38 + 1);
      return;
    }
  }
  realloc(local_48,local_38 + 1);
  return;
}

