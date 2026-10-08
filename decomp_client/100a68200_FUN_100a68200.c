
undefined8 FUN_100a68200(undefined4 *param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_4;
  uVar3 = 0xfffffffd;
  if (uVar4 + 0xc <= (ulong)param_3) {
    *(long *)(param_1 + 4) = param_2;
    param_1[6] = param_3;
    *param_1 = 0;
    param_1[1] = param_4;
    param_4 = param_4 + 0xc;
    param_1[2] = param_4;
    iVar1 = *(int *)(uVar4 + 4 + param_2);
    if ((iVar1 == -0x53234546) || (iVar1 == 0x1000)) {
      uVar2 = *(uint *)(param_2 + uVar4);
      uVar3 = 0xfffffffc;
      if ((param_4 + uVar2 <= param_3) &&
         ((uVar3 = 0xfffffff9, uVar2 != 0 && (uVar3 = 0xfffffff8, !CARRY4(param_4,uVar2))))) {
        uVar4 = (ulong)param_4;
        uVar3 = 0xfffffffb;
        if ((*(int *)(uVar4 + 8 + param_2) == 0) &&
           (uVar3 = 0xfffffffc,
           uVar4 + 0xc + (ulong)*(uint *)(param_2 + uVar4) <= (ulong)(param_4 + uVar2))) {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}

