
void FUN_10007f300(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if ((param_3 & 0x10) == 0) {
    pcVar2 = "TIS Guest os record does not contain information!";
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x48);
    if ((0x13b < *(uint *)(lVar1 + *(long *)(lVar1 + 0x10))) && (0x13b < *(int *)(lVar1 + 4))) {
      FUN_10007de50(param_1,lVar1 + *(long *)(lVar1 + 0x10));
      FUN_100106e30();
      return;
    }
    if (DAT_1011b55f8 < 1) {
      return;
    }
    pcVar2 = "old guest tools: contains no OS version details";
    uVar3 = 1;
  }
  FUN_1008e3970("","vm",uVar3,pcVar2);
  return;
}

