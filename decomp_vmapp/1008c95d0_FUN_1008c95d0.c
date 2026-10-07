
undefined8 FUN_1008c95d0(long *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  pcVar1 = *(char **)(param_3 + 8);
  iVar2 = _strncmp(pcVar1,"fullname",9);
  if (iVar2 == 0) {
    lVar6 = FUN_1008c9a10(param_2,*(undefined8 *)(param_3 + 0x10));
    lVar4 = 0;
    if (lVar6 == 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = _strcmp(pcVar1,"relativename");
    if (iVar2 != 0) {
      return 0;
    }
    plVar3 = (long *)FUN_1008a1190();
    if (plVar3 == (long *)0x0) {
      return 0xffffffff;
    }
    lVar4 = FUN_1008c23d0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      FUN_100887ce0(0x22,0x9e,0x96,"v3_crld.c",0x84);
      return 0xffffffff;
    }
    iVar2 = FUN_1008c4fb0(plVar3,lVar4,0x1001);
    FUN_1008c2440(param_2,lVar4);
    lVar4 = *plVar3;
    *plVar3 = 0;
    FUN_1008a11b0(plVar3);
    if ((iVar2 == 0) || (iVar2 = FUN_100885600(lVar4), iVar2 < 1)) goto LAB_1008c976c;
    iVar2 = FUN_100885600(lVar4);
    lVar5 = FUN_100885620(lVar4,iVar2 + -1);
    lVar6 = 0;
    if (*(int *)(lVar5 + 0x10) != 0) {
      FUN_100887ce0(0x22,0x9e,0xa1,"v3_crld.c",0x94);
      goto LAB_1008c976c;
    }
  }
  if (*param_1 == 0) {
    puVar7 = (undefined4 *)FUN_1008a4610(&DAT_100be46a8);
    *param_1 = (long)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      if (lVar6 == 0) {
        *puVar7 = 1;
        *(long *)(puVar7 + 2) = lVar4;
      }
      else {
        *puVar7 = 0;
        *(long *)(puVar7 + 2) = lVar6;
      }
      return 1;
    }
  }
  else {
    FUN_100887ce0(0x22,0x9e,0xa0,"v3_crld.c",0x9c);
  }
  if (lVar6 != 0) {
    FUN_100885590(lVar6,FUN_1008c53e0);
  }
LAB_1008c976c:
  if (lVar4 != 0) {
    FUN_100885590(lVar4,FUN_1008a0c10);
  }
  return 0xffffffff;
}

