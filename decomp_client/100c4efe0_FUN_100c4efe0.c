
uint FUN_100c4efe0(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_38;
  
  if (param_3 == (int *)0x0) {
    iVar1 = FUN_100c58a70(param_1,"\n");
    uVar2 = (uint)(0 < iVar1);
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 2);
    plVar4 = (long *)FUN_100c4d880(0,&local_38,(long)*param_3);
    if (plVar4 == (long *)0x0) {
      uVar2 = FUN_100c7eed0(param_1,param_3,param_4);
    }
    else {
      uVar2 = 0;
      if (*plVar4 != 0) {
        iVar1 = FUN_100c26610();
        uVar2 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
      }
      if (plVar4[1] != 0) {
        iVar1 = FUN_100c26610();
        uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
      }
      lVar5 = FUN_100bf3540(uVar2 + 10,"dsa_ameth.c",0x224);
      if (lVar5 == 0) {
        FUN_100c62ee0(10,0x7d,0x41,"dsa_ameth.c",0x226);
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_100c58980(param_1,"\n",1);
        uVar2 = 0;
        if (iVar1 == 1) {
          iVar1 = FUN_100c7f970(param_1,"r:   ",*plVar4,lVar5,param_4);
          if (iVar1 != 0) {
            iVar1 = FUN_100c7f970(param_1,"s:   ",plVar4[1],lVar5,param_4);
            uVar2 = (uint)(iVar1 != 0);
          }
        }
        FUN_100bf3910(lVar5);
      }
      FUN_100c4dc50(plVar4);
    }
  }
  return uVar2;
}

