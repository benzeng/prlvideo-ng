
long FUN_100331370(long param_1,long param_2,uint *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3[1] == 1) {
    lVar3 = (ulong)*param_3 + *(long *)(*(long *)(param_1 + 0x10) + 0x920);
  }
  else {
    lVar3 = 0;
    if (param_3[1] == 2) {
      lVar3 = 0;
      if (*param_3 < (uint)*(ushort *)(param_2 + 0x16)) {
        lVar1 = FUN_1002a6120(param_2,*param_3,0);
        uVar2 = (ulong)*(uint *)(lVar1 + 8);
        lVar3 = 0;
        if ((*(uint *)(lVar1 + 8) == param_3[2]) && (lVar3 = 0, param_3[2] != 0)) {
          lVar3 = *param_4;
          if ((ulong)(param_4[1] - lVar3) < uVar2) {
            FUN_1003324b0(param_4);
            lVar3 = *param_4;
            uVar2 = (ulong)*(uint *)(lVar1 + 8);
          }
          FUN_1002a5990(lVar1,0,lVar3,uVar2);
          lVar3 = *param_4;
        }
      }
    }
  }
  return lVar3;
}

