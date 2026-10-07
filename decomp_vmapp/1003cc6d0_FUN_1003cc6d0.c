
undefined8 FUN_1003cc6d0(uint *param_1,int *param_2,long param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *param_1;
  uVar2 = param_2[1];
  if (uVar2 < (uint)param_2[3]) {
    iVar3 = param_2[2] - *param_2;
    lVar5 = (ulong)(uint)(*(int *)(param_3 + 0xc) * param_4[1] + *param_4 * 4) +
            *(long *)(param_3 + 0x10);
    lVar4 = (ulong)((uint)(byte)(&DAT_100b3f717)[(ulong)uVar1 * 8] * *param_2 + param_1[3] * uVar2)
            + *(long *)(param_1 + 4);
    do {
      if ((ulong)uVar1 - 0x53 < 0x11) {
        FUN_1003ca660(param_1,lVar5,*param_2,uVar2,iVar3);
      }
      else {
        FUN_1003cc7b0(lVar4,*param_1,lVar5,iVar3);
      }
      lVar5 = lVar5 + (ulong)*(uint *)(param_3 + 0xc);
      lVar4 = lVar4 + (ulong)param_1[3];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_2[3]);
  }
  return 1;
}

