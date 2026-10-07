
long FUN_1008c1530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long local_38;
  
  local_38 = FUN_1008a4610(&DAT_100be31e0);
  if (local_38 == 0) {
    FUN_100887ce0(0x22,0x66,0x41,"v3_bcons.c",0x6f);
LAB_1008c167c:
    local_38 = 0;
  }
  else {
    iVar2 = FUN_100885600(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100885620(param_3,iVar2);
        pcVar1 = (char *)puVar4[1];
        iVar3 = _strcmp(pcVar1,"CA");
        if (iVar3 != 0) {
          iVar3 = _strcmp(pcVar1,"pathlen");
          if (iVar3 == 0) {
            iVar3 = FUN_1008c4060(puVar4,local_38 + 8);
            goto LAB_1008c15dc;
          }
          FUN_100887ce0(0x22,0x66,0x6a,"v3_bcons.c",0x7b);
          FUN_1008890a0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
LAB_1008c166c:
          FUN_1008a4c40(local_38,&DAT_100be31e0);
          goto LAB_1008c167c;
        }
        iVar3 = FUN_1008c3eb0(puVar4,local_38);
LAB_1008c15dc:
        if (iVar3 == 0) goto LAB_1008c166c;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return local_38;
}

