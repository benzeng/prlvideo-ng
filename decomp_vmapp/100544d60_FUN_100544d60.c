
undefined1 FUN_100544d60(int param_1,char param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 uVar6;
  
  uVar3 = 8;
  if (param_2 != '\0') {
    uVar3 = 2;
  }
  uVar5 = uVar3 | 4;
  if (param_3 == '\0') {
    uVar5 = uVar3;
  }
  iVar1 = _flock(param_1,uVar5);
  uVar6 = 1;
  if (iVar1 != 0) {
    piVar2 = ___error();
    if (*piVar2 == 0x23) {
      pcVar4 = "MmSwap::Lock(%d, %d) flock failed - already locked";
    }
    else {
      ___error();
      pcVar4 = "MmSwap::Lock(%d, %d) flock failed (%d)";
    }
    uVar6 = 0;
    FUN_1008e3970("","TransMem",0,pcVar4,param_2,param_3);
  }
  return uVar6;
}

