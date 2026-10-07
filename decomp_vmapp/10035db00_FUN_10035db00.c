
uint FUN_10035db00(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  uVar1 = *(uint *)(lVar4 + 0x9830);
  if (uVar1 == 0) {
LAB_10035db4d:
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    while( true ) {
      cVar2 = FUN_1002ad170(lVar4,uVar3,param_2,param_3);
      if (cVar2 != '\0') break;
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) goto LAB_10035db4d;
      lVar4 = *(long *)(param_1 + 0x38);
    }
  }
  return uVar3;
}

