
undefined4 *
FUN_100ca17a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char *param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_5 == (char *)0x0) {
    FUN_100c62ee0(0x22,0xa4,0x7c,"v3_alt.c",0x1b5);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_100ca0940(), puVar2 == (undefined4 *)0x0)) {
    FUN_100c62ee0(0x22,0xa4,0x41,"v3_alt.c",0x1be);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    pcVar4 = _strchr(param_5,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar6 = FUN_100ca0840();
      *(long *)(puVar2 + 2) = lVar6;
      if (lVar6 != 0) {
        FUN_100c83f20(*(undefined8 *)(lVar6 + 8));
        lVar6 = FUN_100c88c70(pcVar4 + 1,param_3);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar6;
        if (lVar6 != 0) {
          iVar1 = (int)pcVar4 - (int)param_5;
          pcVar4 = (char *)FUN_100bf3540(iVar1 + 1,"v3_alt.c",0x23f);
          _strncpy(pcVar4,param_5,(long)iVar1);
          pcVar4[iVar1] = '\0';
          uVar7 = FUN_100bf7360(pcVar4,0);
          **(undefined8 **)(puVar2 + 2) = uVar7;
          FUN_100bf3910(pcVar4);
          if (**(long **)(puVar2 + 2) != 0) goto LAB_100ca1a49;
        }
      }
    }
    uVar7 = 0x93;
    uVar8 = 0x1eb;
    break;
  case 1:
  case 2:
  case 6:
    lVar6 = FUN_100c8b370(0x16);
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
      sVar3 = _strlen(param_5);
      iVar1 = FUN_100c8b0b0(lVar6,param_5,sVar3 & 0xffffffff);
      if (iVar1 != 0) goto LAB_100ca1a49;
    }
    uVar7 = 0x41;
    uVar8 = 0x1f8;
    break;
  default:
    uVar7 = 0xa7;
    uVar8 = 0x1f0;
    break;
  case 4:
    lVar6 = FUN_100c7c710();
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = FUN_100c9d950(param_3,param_5);
      if (lVar5 == 0) {
        FUN_100c62ee0(0x22,0x90,0x96,"v3_alt.c",0x252);
        lVar5 = 0;
        FUN_100c642a0(2,"section=",param_5);
      }
      else {
        iVar1 = FUN_100ca0530(lVar6,lVar5,0x1001);
        if (iVar1 != 0) {
          *(long *)(puVar2 + 2) = lVar6;
          FUN_100c9d9c0(param_3,lVar5);
          goto LAB_100ca1a49;
        }
      }
    }
    FUN_100c7c730(lVar6);
    FUN_100c9d9c0(param_3,lVar5);
    uVar7 = 0x95;
    uVar8 = 0x1e4;
    break;
  case 7:
    if (param_6 == 0) {
      lVar6 = FUN_100ca01f0(param_5);
    }
    else {
      lVar6 = FUN_100ca0440();
    }
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
LAB_100ca1a49:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar7 = 0x76;
    uVar8 = 0x1dc;
    goto LAB_100ca1a8f;
  case 8:
    lVar6 = FUN_100bf7360(param_5,0);
    if (lVar6 != 0) {
      *(long *)(puVar2 + 2) = lVar6;
      goto LAB_100ca1a49;
    }
    uVar7 = 0x77;
    uVar8 = 0x1ce;
LAB_100ca1a8f:
    FUN_100c62ee0(0x22,0xa4,uVar7,"v3_alt.c",uVar8);
    FUN_100c642a0(2,"value=",param_5);
    goto LAB_100ca1899;
  }
  FUN_100c62ee0(0x22,0xa4,uVar7,"v3_alt.c",uVar8);
LAB_100ca1899:
  if (param_1 == (undefined4 *)0x0) {
    FUN_100ca0960(puVar2);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

