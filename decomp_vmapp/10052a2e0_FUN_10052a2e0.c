
void FUN_10052a2e0(undefined8 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5
                  )

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_100bc4f60;
  iVar2 = FUN_100529f10();
  FUN_100529ae0(param_1,1,param_4,iVar2 + 0x10 + param_2 + param_3);
  *param_1 = &PTR_FUN_100bc4f60;
  if ((param_1[2] != 0) && (lVar1 = *(long *)(param_1[2] + 0x10), lVar1 != 0)) {
    uVar3 = FUN_100529f10();
    uVar4 = (ulong)uVar3;
    *(int *)(lVar1 + uVar4) = param_2;
    *(int *)(lVar1 + 4 + uVar4) = param_3;
    *(undefined4 *)(lVar1 + 8 + uVar4) = param_5;
    *(undefined4 *)(lVar1 + 0xc + uVar4) = 0;
  }
  return;
}

