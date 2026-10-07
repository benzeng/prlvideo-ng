
uint FUN_10044de20(int *param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_4 != 0) {
    iVar1 = param_1[0x12];
    iVar2 = *param_1;
    iVar3 = param_1[0x14];
    uVar5 = 0;
    do {
      if ((ulong)(uint)param_1[8] + *(long *)(param_1 + 10) <
          *(long *)(param_1 + 0x1c) + (ulong)(iVar1 * iVar2 * iVar3 + 0x27U >> 3)) {
        return uVar5;
      }
      iVar4 = (**(code **)(param_1 + 0x10))(param_1,param_2,param_3);
      if (iVar4 == 0) {
        return uVar5;
      }
      param_1[2] = param_1[2] + iVar4;
      uVar5 = uVar5 + iVar4;
      param_2 = param_2 + (ulong)(uint)(iVar4 * param_3);
    } while (uVar5 < param_4);
  }
  return uVar5;
}

