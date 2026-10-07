
void FUN_1004241d0(wchar_t *param_1,long *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_38;
  undefined2 local_2a;
  wchar_t *local_28;
  
  sVar2 = _wcslen(param_1);
  lVar4 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != lVar4) {
    param_2[1] = (~((lVar3 + -2) - lVar4) & 0xfffffffffffffffeU) + lVar3;
  }
  local_2a = 0;
  local_28 = param_1;
  FUN_1004244d0(param_2,lVar4,sVar2,&local_2a);
  local_38 = *param_2;
  iVar1 = FUN_100422c10(&local_28,param_1 + sVar2 * 2,&local_38,
                        local_38 + (param_2[2] - local_38) * 2,0);
  if (iVar1 == 0) {
    lVar4 = *param_2;
    lVar3 = param_2[1];
    uVar5 = (local_38 - lVar4 >> 1) + 1;
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

