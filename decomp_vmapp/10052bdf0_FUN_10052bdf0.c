
void FUN_10052bdf0(long *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*param_1 + 8);
  uVar4 = uVar1 & 0x7fffffff;
  lVar6 = 8;
  uVar5 = param_2;
  if (((int)param_2 <= (int)uVar4) && (lVar6 = 0, uVar5 = uVar4, -1 < (int)uVar1)) {
    bVar2 = (int)param_2 < *(int *)(*param_1 + 4);
    bVar3 = (int)param_2 < (int)(uVar4 >> 1);
    if (bVar3 && bVar2) {
      uVar5 = param_2;
    }
    lVar6 = (ulong)(bVar3 && bVar2) << 3;
  }
  FUN_100032120(param_1,param_2,uVar5,lVar6);
  return;
}

