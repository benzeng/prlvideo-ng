
bool FUN_100a75430(long param_1,long param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_100aad010(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (((*(int *)(lVar2 + 0x68) == 2) && (*(char *)(lVar2 + 0x370) != '\0')) &&
     (uVar5 = FUN_100be45f0(*(undefined8 *)(lVar2 + 0x328)), (uVar5 & 0x3000) == 0)) {
    iVar4 = FUN_100aa39b0(lVar2 + 400,uVar1,*(undefined4 *)(lVar2 + 0x2e8),param_2,param_3,uVar3,0);
  }
  else {
    iVar4 = FUN_100aa2360(lVar2 + 400,uVar1,*(undefined4 *)(lVar2 + 0x2e8),param_2,param_3,uVar3,0);
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  if (param_4 != (int *)0x0) {
    iVar6 = 0;
    if (iVar4 == 0) {
      iVar6 = param_3;
    }
    *param_4 = iVar6;
  }
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  }
  return iVar4 == 0;
}

