
undefined8 FUN_100c89db0(char *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *local_30;
  
  if ((param_1 != (char *)0x0) &&
     (((uVar2 = _strtoul(param_1,&local_30,10), local_30 == (char *)0x0 || (*local_30 == '\0')) ||
      (local_30 == param_1 + param_2)))) {
    if ((long)uVar2 < 0) {
      uVar3 = 0xbb;
      uVar4 = 0x337;
    }
    else {
      iVar1 = FUN_100c751a0(param_3,uVar2 & 0xffffffff,1);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = 0x41;
      uVar4 = 0x33b;
    }
    FUN_100c62ee0(0xd,0xb4,uVar3,"asn1_gen.c",uVar4);
  }
  return 0;
}

