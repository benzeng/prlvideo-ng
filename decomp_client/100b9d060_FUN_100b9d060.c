
undefined8 FUN_100b9d060(undefined8 *param_1,long *param_2,int param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)*param_1;
  while( true ) {
    while( true ) {
      if (puVar11 == param_1) {
        return 0;
      }
      uVar5 = FUN_100b93860();
      if ((((uVar5 & 4) == 0) || (iVar4 = FUN_100ba1610(puVar11[2]), iVar4 == 0)) &&
         ((uVar5 = FUN_100b93860(), (uVar5 & 8) != 0 ||
          (iVar4 = FUN_100ba15c0(puVar11[2]), iVar4 == 0)))) break;
      puVar11 = (undefined8 *)*puVar11;
    }
    puVar6 = _malloc(0x28);
    if (puVar6 == (undefined8 *)0x0) break;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    pcVar8 = (char *)puVar11[2];
    sVar7 = _strlen(pcVar8);
    pcVar8 = (char *)FUN_100ba17c0(pcVar8,sVar7 & 0xffffffff);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)puVar11[2];
    }
    pcVar8 = _strdup(pcVar8);
    puVar6[2] = pcVar8;
    pcVar8 = _strdup((char *)puVar11[3]);
    puVar6[3] = pcVar8;
    pvVar1 = (void *)puVar6[2];
    if ((pcVar8 == (char *)0x0) || (pvVar1 == (void *)0x0)) {
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
        pcVar8 = (char *)puVar6[3];
      }
      if (pcVar8 != (char *)0x0) {
        _free(pcVar8);
      }
      if ((void *)puVar6[4] != (void *)0x0) {
        _free((void *)puVar6[4]);
      }
      _free(puVar6);
      break;
    }
    if (param_3 != 0) {
      uVar9 = FUN_100b97120(param_4);
      puVar6[4] = uVar9;
    }
    puVar2 = (undefined8 *)param_2[1];
    puVar6[1] = puVar2;
    *puVar6 = param_2;
    *puVar2 = puVar6;
    param_2[1] = (long)puVar6;
    puVar11 = (undefined8 *)*puVar11;
  }
  plVar10 = (long *)*param_2;
  if (plVar10 != param_2) {
    do {
      plVar3 = (long *)*plVar10;
      if ((void *)plVar10[2] != (void *)0x0) {
        _free((void *)plVar10[2]);
      }
      if ((void *)plVar10[3] != (void *)0x0) {
        _free((void *)plVar10[3]);
      }
      if ((void *)plVar10[4] != (void *)0x0) {
        _free((void *)plVar10[4]);
      }
      _free(plVar10);
      plVar10 = plVar3;
    } while (plVar3 != param_2);
    param_2[1] = (long)param_2;
    *param_2 = (long)param_2;
  }
  uVar9 = FUN_100b9d470(0xfffffffe,0);
  return uVar9;
}

