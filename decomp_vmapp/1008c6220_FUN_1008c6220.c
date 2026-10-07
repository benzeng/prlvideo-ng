
undefined4 *
FUN_1008c6220(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
    FUN_100887ce0(0x22,0xa4,0x7c,"v3_alt.c",0x1b5);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_1008c53c0(), puVar2 == (undefined4 *)0x0)) {
    FUN_100887ce0(0x22,0xa4,0x41,"v3_alt.c",0x1be);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    pcVar4 = _strchr(param_5,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar6 = FUN_1008c52c0();
      *(long *)(puVar2 + 2) = lVar6;
      if (lVar6 != 0) {
        FUN_1008a89a0(*(undefined8 *)(lVar6 + 8));
        lVar6 = FUN_1008ad6f0(pcVar4 + 1,param_3);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar6;
        if (lVar6 != 0) {
          iVar1 = (int)pcVar4 - (int)param_5;
          pcVar4 = (char *)FUN_10081ddd0(iVar1 + 1,"v3_alt.c",0x23f);
          _strncpy(pcVar4,param_5,(long)iVar1);
          pcVar4[iVar1] = '\0';
          uVar7 = FUN_100821bf0(pcVar4,0);
          **(undefined8 **)(puVar2 + 2) = uVar7;
          FUN_10081e1a0(pcVar4);
          if (**(long **)(puVar2 + 2) != 0) goto LAB_1008c64c9;
        }
      }
    }
    uVar7 = 0x93;
    uVar8 = 0x1eb;
    break;
  case 1:
  case 2:
  case 6:
    lVar6 = FUN_1008afdf0(0x16);
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
      sVar3 = _strlen(param_5);
      iVar1 = FUN_1008afb30(lVar6,param_5,sVar3 & 0xffffffff);
      if (iVar1 != 0) goto LAB_1008c64c9;
    }
    uVar7 = 0x41;
    uVar8 = 0x1f8;
    break;
  default:
    uVar7 = 0xa7;
    uVar8 = 0x1f0;
    break;
  case 4:
    lVar6 = FUN_1008a1190();
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = FUN_1008c23d0(param_3,param_5);
      if (lVar5 == 0) {
        FUN_100887ce0(0x22,0x90,0x96,"v3_alt.c",0x252);
        lVar5 = 0;
        FUN_1008890a0(2,"section=",param_5);
      }
      else {
        iVar1 = FUN_1008c4fb0(lVar6,lVar5,0x1001);
        if (iVar1 != 0) {
          *(long *)(puVar2 + 2) = lVar6;
          FUN_1008c2440(param_3,lVar5);
          goto LAB_1008c64c9;
        }
      }
    }
    FUN_1008a11b0(lVar6);
    FUN_1008c2440(param_3,lVar5);
    uVar7 = 0x95;
    uVar8 = 0x1e4;
    break;
  case 7:
    if (param_6 == 0) {
      lVar6 = FUN_1008c4c70(param_5);
    }
    else {
      lVar6 = FUN_1008c4ec0();
    }
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
LAB_1008c64c9:
      *puVar2 = param_4;
      return puVar2;
    }
    uVar7 = 0x76;
    uVar8 = 0x1dc;
    goto LAB_1008c650f;
  case 8:
    lVar6 = FUN_100821bf0(param_5,0);
    if (lVar6 != 0) {
      *(long *)(puVar2 + 2) = lVar6;
      goto LAB_1008c64c9;
    }
    uVar7 = 0x77;
    uVar8 = 0x1ce;
LAB_1008c650f:
    FUN_100887ce0(0x22,0xa4,uVar7,"v3_alt.c",uVar8);
    FUN_1008890a0(2,"value=",param_5);
    goto LAB_1008c6319;
  }
  FUN_100887ce0(0x22,0xa4,uVar7,"v3_alt.c",uVar8);
LAB_1008c6319:
  if (param_1 == (undefined4 *)0x0) {
    FUN_1008c53e0(puVar2);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

