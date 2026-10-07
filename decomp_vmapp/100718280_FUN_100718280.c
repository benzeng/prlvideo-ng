
undefined8 FUN_100718280(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_100714a30();
  if (iVar1 == 8) {
    pcVar3 = "parallels-desktop-enterprise-for-mac";
  }
  else if (iVar1 == 7) {
    pcVar3 = "parallels-workstation";
  }
  else if (iVar1 == 5) {
    pcVar3 = "parallels-server-mac";
  }
  else {
    pcVar3 = "parallels-server-bare-metal-unix";
  }
  pcVar3 = _strdup(pcVar3);
  *param_2 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    pcVar3 = (char *)FUN_100715ba0();
    pcVar3 = _strdup(pcVar3);
    param_2[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar3 = _strdup(*(char **)(param_1 + 8));
        param_2[3] = pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_100718321;
      }
      if ((*param_1 == 2) && (*(char **)(param_1 + 6) != (char *)0x0)) {
        pcVar3 = _strdup(*(char **)(param_1 + 6));
        param_2[2] = pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_100718321;
      }
      return 0;
    }
  }
LAB_100718321:
  uVar2 = FUN_10071e690(0xfffffffe,0);
  return uVar2;
}

