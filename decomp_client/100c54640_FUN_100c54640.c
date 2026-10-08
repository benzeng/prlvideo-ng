
long FUN_100c54640(long *param_1,char *param_2)

{
  code *pcVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    uVar4 = 0x43;
    uVar5 = 0x186;
  }
  else if ((param_2 == (char *)0x0) && (param_2 = (char *)param_1[7], param_2 == (char *)0x0)) {
    uVar4 = 0x6f;
    uVar5 = 0x18c;
  }
  else {
    if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) &&
       (((pcVar1 = (code *)param_1[5], pcVar1 != (code *)0x0 ||
         (pcVar1 = *(code **)(*param_1 + 0x30), pcVar1 != (code *)0x0)) &&
        (lVar2 = (*pcVar1)(param_1,param_2), lVar2 != 0)))) {
      return lVar2;
    }
    sVar3 = _strlen(param_2);
    lVar2 = FUN_100bf3540((int)sVar3 + 1,"dso_lib.c",0x196);
    if (lVar2 != 0) {
      sVar3 = _strlen(param_2);
      FUN_100c583f0(lVar2,param_2,sVar3 + 1);
      return lVar2;
    }
    uVar4 = 0x41;
    uVar5 = 0x198;
  }
  FUN_100c62ee0(0x25,0x7e,uVar4,"dso_lib.c",uVar5);
  return 0;
}

