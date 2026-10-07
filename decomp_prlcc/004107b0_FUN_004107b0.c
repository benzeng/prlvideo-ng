
undefined8 FUN_004107b0(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)param_1[1], puVar9 != (undefined8 *)0x0)) {
    pcVar1 = (char *)*puVar9;
    lVar6 = 0x10;
    lVar4 = 0;
    while (lVar3 = lVar6, pcVar1 != (char *)0x0) {
      iVar7 = strcmp(param_2,pcVar1);
      if (iVar7 == 0) {
        return *(undefined8 *)((long)puVar9 + lVar4 + 8);
      }
      lVar6 = lVar3 + 0x10;
      lVar4 = lVar3;
      pcVar1 = *(char **)(lVar3 + (long)puVar9);
    }
    puVar5 = (undefined8 *)param_1[8];
    puVar9 = param_1;
    while (puVar2 = puVar5, puVar2 != (undefined8 *)0x0) {
      puVar9 = puVar2;
      puVar5 = (undefined8 *)puVar2[8];
    }
    plVar8 = (long *)puVar9[0x11];
    puVar9 = (undefined8 *)*plVar8;
    if (puVar9 != (undefined8 *)0x0) {
      pcVar1 = (char *)*param_1;
      do {
        iVar7 = strcmp(pcVar1,(char *)*puVar9);
        if (iVar7 == 0) {
          pcVar1 = (char *)puVar9[1];
          lVar4 = 8;
          lVar6 = 0x20;
          while( true ) {
            if (pcVar1 == (char *)0x0) {
              return 0;
            }
            iVar7 = strcmp(param_2,pcVar1);
            if (iVar7 == 0) break;
            pcVar1 = *(char **)(lVar6 + (long)puVar9);
            lVar4 = lVar6;
            lVar6 = lVar6 + 0x18;
          }
          return *(undefined8 *)((long)puVar9 + lVar4 + 8);
        }
        puVar9 = (undefined8 *)plVar8[1];
        plVar8 = plVar8 + 1;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return 0;
}

