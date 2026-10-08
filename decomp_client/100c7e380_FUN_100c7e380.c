
long FUN_100c7e380(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_38;
  
  local_38 = *param_2;
  uVar2 = FUN_100c840c0(0,&local_38);
  local_38 = *param_2;
  iVar1 = FUN_100c60800(uVar2);
  uVar5 = 0x74;
  if (iVar1 != 6) {
    iVar1 = FUN_100c60800(uVar2);
    uVar5 = 0x198;
    if (iVar1 != 4) {
      iVar1 = FUN_100c60800(uVar2);
      uVar5 = 6;
      if (iVar1 == 3) {
        lVar3 = FUN_100c8d150(0,&local_38,param_3);
        FUN_100c60790(uVar2,FUN_100c83f20);
        if (lVar3 == 0) {
          FUN_100c62ee0(0xd,0xcf,0xa7,"d2i_pr.c",0x9f);
          return 0;
        }
        lVar4 = FUN_100c6fd10(lVar3);
        FUN_100c8d1b0(lVar3);
        if (lVar4 == 0) {
          return 0;
        }
        *param_2 = local_38;
        if (param_1 == (long *)0x0) {
          return lVar4;
        }
        *param_1 = lVar4;
        return lVar4;
      }
    }
  }
  FUN_100c60790(uVar2,FUN_100c83f20);
  lVar3 = FUN_100c7e200(uVar5,param_1,param_2,param_3);
  return lVar3;
}

