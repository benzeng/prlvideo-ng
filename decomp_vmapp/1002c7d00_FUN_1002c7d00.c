
long FUN_1002c7d00(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((int)param_1[0xb] != 0) {
    uVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,uVar2 & 0xffffffff);
      if (((iVar1 != 0) && (lVar3 = param_1[uVar2 + 0xc], lVar3 != 0)) &&
         (*(int *)(lVar3 + 0x1c) == param_2)) break;
      uVar2 = uVar2 + 1;
      lVar3 = 0;
    } while ((uint)uVar2 < *(uint *)(param_1 + 0xb));
  }
  if ((int)(4 - (uint)(lVar3 == 0)) <= DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"GetUsbDevByAddress addr %d, dev 0x%p",param_2,lVar3);
  }
  return lVar3;
}

