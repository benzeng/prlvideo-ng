
undefined8 FUN_100ca4b50(long *param_1,undefined8 param_2,long param_3)

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
    lVar6 = FUN_100ca4f90(param_2,*(undefined8 *)(param_3 + 0x10));
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
    plVar3 = (long *)FUN_100c7c710();
    if (plVar3 == (long *)0x0) {
      return 0xffffffff;
    }
    lVar4 = FUN_100c9d950(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar4 == 0) {
      FUN_100c62ee0(0x22,0x9e,0x96,"v3_crld.c",0x84);
      return 0xffffffff;
    }
    iVar2 = FUN_100ca0530(plVar3,lVar4,0x1001);
    FUN_100c9d9c0(param_2,lVar4);
    lVar4 = *plVar3;
    *plVar3 = 0;
    FUN_100c7c730(plVar3);
    if ((iVar2 == 0) || (iVar2 = FUN_100c60800(lVar4), iVar2 < 1)) goto LAB_100ca4cec;
    iVar2 = FUN_100c60800(lVar4);
    lVar5 = FUN_100c60820(lVar4,iVar2 + -1);
    lVar6 = 0;
    if (*(int *)(lVar5 + 0x10) != 0) {
      FUN_100c62ee0(0x22,0x9e,0xa1,"v3_crld.c",0x94);
      goto LAB_100ca4cec;
    }
  }
  if (*param_1 == 0) {
    puVar7 = (undefined4 *)FUN_100c7fb90(&DAT_102254cb8);
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
    FUN_100c62ee0(0x22,0x9e,0xa0,"v3_crld.c",0x9c);
  }
  if (lVar6 != 0) {
    FUN_100c60790(lVar6,FUN_100ca0960);
  }
LAB_100ca4cec:
  if (lVar4 != 0) {
    FUN_100c60790(lVar4,FUN_100c7c190);
  }
  return 0xffffffff;
}

