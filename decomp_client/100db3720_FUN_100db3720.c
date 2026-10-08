
undefined8 FUN_100db3720(long *param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_2 < 3) {
    iVar3 = *(int *)((long)param_1 + 0x2c);
    if (1 < iVar3 - 1U) {
      if (iVar3 == 4) {
        iVar3 = 1;
        if (param_3 == 0) {
          iVar3 = 1;
          if (0x1ffff < param_5) {
            iVar3 = (param_1[8] == param_4) + 1;
          }
          param_1[8] = (ulong)param_5 + param_4;
        }
      }
      else {
        if (iVar3 != 3) {
          FUN_100df99c0("","AbstractFile",0,"Unknown caching policy %u for index %u",iVar3);
          return 0x80021030;
        }
        iVar3 = (param_3 == 0) + 1;
      }
    }
    uVar2 = 0;
    if (iVar3 != *(int *)((long)param_1 + (ulong)param_2 * 4 + 0x20)) {
      iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,0,0);
      iVar1 = _fcntl(iVar1,0x30,(ulong)(iVar3 != 1));
      uVar2 = 0x80021030;
      if (-1 < iVar1) {
        *(int *)((long)param_1 + (ulong)param_2 * 4 + 0x20) = iVar3;
        uVar2 = 0;
      }
    }
  }
  else {
    FUN_100df99c0("","AbstractFile",0,"SetCachingMode: Incorrent index %u specified",param_2);
    uVar2 = 0x80000003;
  }
  return uVar2;
}

