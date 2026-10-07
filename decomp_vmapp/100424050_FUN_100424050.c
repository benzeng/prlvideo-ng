
void FUN_100424050(char *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_30;
  undefined2 local_22;
  char *local_20;
  
  sVar2 = _strlen(param_1);
  lVar4 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != lVar4) {
    param_2[1] = (~((lVar3 + -2) - lVar4) & 0xfffffffffffffffeU) + lVar3;
  }
  local_22 = 0;
  local_20 = param_1;
  FUN_1004244d0(param_2,lVar4,sVar2,&local_22);
  local_30 = *param_2;
  iVar1 = FUN_100423150(&local_20,param_1 + sVar2,&local_30,local_30 + (param_2[2] - local_30) * 2,0
                       );
  if (iVar1 == 0) {
    lVar4 = *param_2;
    lVar3 = param_2[1];
    uVar5 = (local_30 - lVar4 >> 1) + 1;
    uVar6 = lVar3 - lVar4 >> 1;
    if (uVar6 < uVar5) {
      FUN_100424830(param_2);
      return;
    }
  }
  else {
    lVar4 = *param_2;
    lVar3 = param_2[1];
    uVar6 = lVar3 - lVar4 >> 1;
    uVar5 = 0;
  }
  if ((uVar5 < uVar6) && (lVar4 = lVar4 + uVar5 * 2, lVar3 != lVar4)) {
    param_2[1] = (~((lVar3 + -2) - lVar4) & 0xfffffffffffffffeU) + lVar3;
  }
  return;
}

