
int FUN_100424140(ulong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *local_40;
  ulong local_38;
  
  *param_3 = 0;
  uVar3 = param_1;
  uVar4 = param_1 + 1;
  local_40 = param_3;
  do {
    local_38 = param_1;
    iVar1 = FUN_100423150(&local_38,uVar4,&local_40,param_3 + 2,0);
    if (iVar1 == 0) {
      return (int)local_38 - (int)param_1;
    }
    uVar2 = uVar3 + 2;
    uVar3 = uVar4;
    uVar4 = uVar2;
  } while (uVar2 <= (long)param_2 + param_1);
  return 0;
}

