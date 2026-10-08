
long FUN_100ca4680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar5 = FUN_100c7fb90(&DAT_102254ec0);
  if (lVar5 == 0) {
    FUN_100c62ee0(0x22,0x9d,0x41,"v3_crld.c",0x1cb);
LAB_100ca4804:
    FUN_100c801c0(lVar5,&DAT_102254ec0);
    lVar5 = 0;
  }
  else {
    iVar3 = FUN_100c60800(param_3);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_100c60820(param_3,iVar3);
        pcVar1 = (char *)puVar6[1];
        uVar2 = puVar6[2];
        iVar4 = FUN_100ca4b50(lVar5,param_2,puVar6);
        if (iVar4 < 1) {
          if (iVar4 < 0) goto LAB_100ca4804;
          iVar4 = _strcmp(pcVar1,"onlyuser");
          lVar7 = lVar5 + 8;
          if ((((iVar4 == 0) || (iVar4 = _strcmp(pcVar1,"onlyCA"), lVar7 = lVar5 + 0xc, iVar4 == 0))
              || (iVar4 = _strcmp(pcVar1,"onlyAA"), lVar7 = lVar5 + 0x1c, iVar4 == 0)) ||
             (iVar4 = _strcmp(pcVar1,"indirectCRL"), lVar7 = lVar5 + 0x18, iVar4 == 0)) {
            iVar4 = FUN_100c9f430(puVar6,lVar7);
          }
          else {
            iVar4 = _strcmp(pcVar1,"onlysomereasons");
            if (iVar4 != 0) {
              FUN_100c62ee0(0x22,0x9d,0x6a,"v3_crld.c",0x1c3);
              FUN_100c642a0(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
              goto LAB_100ca4804;
            }
            iVar4 = FUN_100ca4d50(lVar5 + 0x10,uVar2);
          }
          if (iVar4 == 0) goto LAB_100ca4804;
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_100c60800(param_3);
      } while (iVar3 < iVar4);
    }
  }
  return lVar5;
}

