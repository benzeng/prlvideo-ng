
int FUN_100b73760(undefined8 param_1,int param_2,long param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_2 == -10) {
    pcVar6 = "";
    if (*(char **)(param_3 + 0x10) != (char *)0x0) {
      pcVar6 = *(char **)(param_3 + 0x10);
    }
    if (*(int *)(param_3 + 8) == 0) {
      if (*pcVar6 == '\0') {
        pcVar4 = "This license does not require %s.";
      }
      else {
        pcVar4 = "%s";
        param_4 = pcVar6;
      }
      FUN_100df99c0("","License",0,pcVar4,param_4);
      iVar5 = 3;
    }
    else if (*(int *)(param_3 + 8) < 1) {
      FUN_100df99c0("","License",0,"%s failed - %s.",param_4);
      iVar5 = -1;
    }
    else {
      FUN_100df99c0("","License",0,"KA server can\'t %s this license - %s.",param_4);
      if (*(int *)(param_3 + 8) == 1) {
        iVar1 = *(int *)(param_3 + 0xc);
        iVar5 = -1;
        if (iVar1 == 0x41b) {
          iVar5 = 5;
        }
        iVar3 = 6;
        if (iVar1 != 0x402) {
          iVar3 = iVar5;
        }
        iVar5 = 7;
        if (iVar1 != 0x3f0) {
          iVar5 = iVar3;
        }
      }
      else {
        iVar5 = -1;
        if ((*(int *)(param_3 + 8) == 2) && (iVar5 = 4, *(int *)(param_3 + 0xc) != 0x7e5)) {
          iVar5 = -1;
        }
      }
    }
  }
  else {
    uVar2 = FUN_100b9d570();
    FUN_100df99c0("","License",0,"Operation failed - %d, %s.",param_2,uVar2);
    iVar5 = -1;
    if (param_2 + 0x10U < 3) {
      iVar5 = param_2;
    }
  }
  return iVar5;
}

