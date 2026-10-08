
long FUN_100c9cab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long local_38;
  
  local_38 = FUN_100c7fb90(&DAT_1022537f0);
  if (local_38 == 0) {
    FUN_100c62ee0(0x22,0x66,0x41,"v3_bcons.c",0x6f);
LAB_100c9cbfc:
    local_38 = 0;
  }
  else {
    iVar2 = FUN_100c60800(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)FUN_100c60820(param_3,iVar2);
        pcVar1 = (char *)puVar4[1];
        iVar3 = _strcmp(pcVar1,"CA");
        if (iVar3 != 0) {
          iVar3 = _strcmp(pcVar1,"pathlen");
          if (iVar3 == 0) {
            iVar3 = FUN_100c9f5e0(puVar4,local_38 + 8);
            goto LAB_100c9cb5c;
          }
          FUN_100c62ee0(0x22,0x66,0x6a,"v3_bcons.c",0x7b);
          FUN_100c642a0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
LAB_100c9cbec:
          FUN_100c801c0(local_38,&DAT_1022537f0);
          goto LAB_100c9cbfc;
        }
        iVar3 = FUN_100c9f430(puVar4,local_38);
LAB_100c9cb5c:
        if (iVar3 == 0) goto LAB_100c9cbec;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return local_38;
}

