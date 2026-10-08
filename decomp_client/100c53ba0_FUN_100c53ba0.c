
char * FUN_100c53ba0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (param_2 == (char *)0x0 && param_3 == (char *)0x0) {
    uVar5 = 0x43;
    uVar7 = 0x124;
LAB_100c53d32:
    FUN_100c62ee0(0x25,0x82,uVar5,"dso_dlfcn.c",uVar7);
    pcVar3 = (char *)0x0;
  }
  else {
    if (param_3 == (char *)0x0) {
LAB_100c53bd0:
      sVar2 = _strlen(param_2);
      pcVar3 = (char *)FUN_100bf3540((int)sVar2 + 1,"dso_dlfcn.c",300);
      pcVar6 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        uVar5 = 0x41;
        uVar7 = 0x12e;
        goto LAB_100c53d32;
      }
    }
    else if (param_2 == (char *)0x0) {
      sVar2 = _strlen(param_3);
      pcVar3 = (char *)FUN_100bf3540((int)sVar2 + 1,"dso_dlfcn.c",0x137);
      param_2 = param_3;
      pcVar6 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        uVar5 = 0x41;
        uVar7 = 0x139;
        goto LAB_100c53d32;
      }
    }
    else {
      if (*param_2 == '/') goto LAB_100c53bd0;
      sVar2 = _strlen(param_3);
      sVar4 = _strlen(param_2);
      iVar8 = (int)sVar2;
      iVar1 = (int)sVar4 + iVar8;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else if (param_3[(long)((sVar2 << 0x20) + -0x100000000) >> 0x20] == '/') {
        iVar8 = iVar8 + -1;
        iVar1 = iVar1 + -1;
      }
      pcVar3 = (char *)FUN_100bf3540(iVar1 + 2,"dso_dlfcn.c",0x14e);
      if (pcVar3 == (char *)0x0) {
        uVar5 = 0x41;
        uVar7 = 0x150;
        goto LAB_100c53d32;
      }
      _strcpy(pcVar3,param_3);
      pcVar3[iVar8] = '/';
      pcVar6 = pcVar3 + (iVar8 + 1);
    }
    _strcpy(pcVar6,param_2);
  }
  return pcVar3;
}

