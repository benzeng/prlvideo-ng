
undefined4
FUN_10027be70(long param_1,int param_2,uint param_3,int param_4,uint param_5,long *param_6)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_34;
  
  uVar3 = (ulong)param_3;
  local_34 = 0;
  while ((int)uVar3 != param_4) {
    lVar4 = uVar3 * 0x10;
    uVar2 = (int)uVar3 + 1;
    if (uVar2 == param_5) {
      uVar2 = 0;
    }
    uVar3 = (ulong)uVar2;
    cVar1 = FUN_10027baa0(param_1 + 0x160 + (long)param_2 * 0x2850,lVar4 + *param_6,uVar3);
    if (cVar1 != '\0') {
      FUN_10027bd00(param_1,param_2);
      local_34 = 1;
    }
  }
  return local_34;
}

