
long * FUN_10008d1d0(long *param_1,ulong *param_2,int *param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  FUN_10008df70(param_1,(int)(*param_2 >> 0xc) + 0x1fU >> 5);
  uVar6 = param_2[0x1c];
  iVar5 = 0;
  iVar3 = (int)param_2[0x1d] - (int)uVar6;
  if (iVar3 != 0) {
    lVar2 = *param_1;
    uVar4 = 0;
    iVar5 = 0;
    iVar7 = 0;
    while( true ) {
      if (*(char *)(uVar6 + uVar4) != '\0') {
        iVar7 = iVar7 + (uint)(*(char *)(uVar6 + uVar4) == -1);
        puVar1 = (uint *)(lVar2 + (uVar4 >> 3 & 0x1ffffffc));
        *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
        iVar5 = iVar5 + 1;
      }
      if ((int)uVar4 == iVar3 + -1) break;
      uVar4 = uVar4 + 1;
      uVar6 = param_2[0x1c];
    }
    if (iVar7 != 0) {
      FUN_1008e3970("","vm",0,"%u pages with fixed reference counter");
    }
  }
  *param_3 = iVar5;
  return param_1;
}

