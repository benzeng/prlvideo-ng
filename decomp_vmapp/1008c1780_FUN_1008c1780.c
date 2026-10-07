
long FUN_1008c1780(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  lVar4 = FUN_1008afdf0(3);
  if (lVar4 == 0) {
    FUN_100887ce0(0x22,0x65,0x41,"v3_bitst.c",0x74);
LAB_1008c18f2:
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_100885600(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar5 = (undefined8 *)FUN_100885620(param_3,iVar2);
        puVar6 = *(undefined4 **)(param_1 + 0x60);
        pcVar7 = *(char **)(puVar6 + 2);
        if (pcVar7 == (char *)0x0) {
LAB_1008c1895:
          FUN_100887ce0(0x22,0x65,0x6f,"v3_bitst.c",0x87);
          FUN_1008890a0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
LAB_1008c18ea:
          FUN_1008afd70(lVar4);
          goto LAB_1008c18f2;
        }
        pcVar1 = (char *)puVar5[1];
        while ((iVar3 = _strcmp(*(char **)(puVar6 + 4),pcVar1), iVar3 != 0 &&
               (iVar3 = _strcmp(pcVar7,pcVar1), iVar3 != 0))) {
          pcVar7 = *(char **)(puVar6 + 8);
          puVar6 = puVar6 + 6;
          if (pcVar7 == (char *)0x0) goto LAB_1008c1895;
        }
        iVar3 = FUN_100899c20(lVar4,*puVar6,1);
        if (iVar3 == 0) {
          FUN_100887ce0(0x22,0x65,0x41,"v3_bitst.c",0x7e);
          goto LAB_1008c18ea;
        }
        if (*(long *)(puVar6 + 2) == 0) goto LAB_1008c1895;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return lVar4;
}

