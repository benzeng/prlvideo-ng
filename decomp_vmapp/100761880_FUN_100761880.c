
long FUN_100761880(long param_1,code *param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  ulong uVar5;
  long local_48;
  long local_38;
  
  local_48 = 0;
  local_38 = param_4;
  do {
    uVar5 = 0x2000000;
    if (param_5 < 0x2000000) {
      uVar5 = param_5 & 0xffffffff;
    }
    while( true ) {
      if (param_5 == 0) {
        return local_48;
      }
      pcVar3 = param_2;
      if (((ulong)param_2 & 1) != 0) {
        pcVar3 = *(code **)(param_2 + *(long *)(param_1 + param_3) + -1);
      }
      iVar1 = (*pcVar3)((long *)(param_1 + param_3),local_38,uVar5);
      if (-1 < iVar1) break;
      piVar4 = ___error();
      if (*piVar4 != 4) {
        return (long)iVar1;
      }
    }
    if (iVar1 == 0) {
      return local_48;
    }
    lVar2 = (long)iVar1;
    param_5 = param_5 - lVar2;
    local_38 = local_38 + lVar2;
    local_48 = local_48 + lVar2;
  } while( true );
}

