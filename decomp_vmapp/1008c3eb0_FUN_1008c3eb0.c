
undefined8 FUN_1008c3eb0(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)param_1[2];
  if (pcVar1 != (char *)0x0) {
    iVar2 = _strcmp(pcVar1,"TRUE");
    if ((((iVar2 == 0) || (iVar2 = _strcmp(pcVar1,"true"), iVar2 == 0)) ||
        (iVar2 = _strcmp(pcVar1,"Y"), iVar2 == 0)) ||
       (((iVar2 = _strcmp(pcVar1,"y"), iVar2 == 0 || (iVar2 = _strcmp(pcVar1,"YES"), iVar2 == 0)) ||
        (iVar2 = _strcmp(pcVar1,"yes"), iVar2 == 0)))) {
      *param_2 = 0xff;
      return 1;
    }
    iVar2 = _strcmp(pcVar1,"FALSE");
    if (((iVar2 == 0) || (iVar2 = _strcmp(pcVar1,"false"), iVar2 == 0)) ||
       ((iVar2 = _strcmp(pcVar1,"N"), iVar2 == 0 ||
        (((iVar2 = _strcmp(pcVar1,"n"), iVar2 == 0 || (iVar2 = _strcmp(pcVar1,"NO"), iVar2 == 0)) ||
         (iVar2 = _strcmp(pcVar1,"no"), iVar2 == 0)))))) {
      *param_2 = 0;
      return 1;
    }
  }
  FUN_100887ce0(0x22,0x6e,0x68,"v3_utl.c",0x100);
  FUN_1008890a0(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  return 0;
}

