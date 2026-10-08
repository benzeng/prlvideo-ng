
undefined8 FUN_100c7ff70(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x300) == 0) {
      if ((uVar1 & 6) == 0) {
        uVar3 = FUN_100c7fbe0(param_1,param_2[4],(uint)uVar1 & 0x400);
        return uVar3;
      }
      lVar2 = FUN_100c60010();
      if (lVar2 == 0) {
        FUN_100c62ee0(0xd,0x85,0x41,"tasn_new.c",0x115);
        return 0;
      }
      *param_1 = lVar2;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    FUN_100c80000(param_1);
  }
  return 1;
}

