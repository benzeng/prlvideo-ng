
ulong FUN_100be1340(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  if ((int)param_2 < 1) {
    iVar1 = FUN_100bdd6a0(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_100be45f0(param_1);
      if (((uVar2 & 0x3000) != 0) || (*(int *)(param_1 + 0x29c) != 0)) {
        uVar4 = FUN_100bdd400(param_1);
        return uVar4;
      }
      uVar3 = FUN_100be39f0(param_1);
      FUN_100c58830(uVar3,1);
    }
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_1021e1848,"invalid state reached %s:%d","d1_both.c",0x498);
    uVar4 = 1;
  }
  return uVar4;
}

