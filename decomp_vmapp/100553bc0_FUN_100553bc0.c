
void FUN_100553bc0(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_2 >> 0x14;
  param_3 = param_3 >> 0xc;
  lVar1 = FUN_100553300(0,param_1,0,uVar2 & 0xffffffff,0x100,param_3 & 0xffffffff,param_4,param_5);
  if (lVar1 == 0) {
    lVar1 = FUN_100553300(0,param_1,1,uVar2 & 0xffffffff,0x100,param_3 & 0xffffffff,param_4,param_5)
    ;
    if (lVar1 == 0) {
      lVar1 = FUN_100553300(0,param_1,0x201,uVar2 & 0xffffffff,0x100,param_3 & 0xffffffff,param_4,
                            param_5);
      if (lVar1 == 0) {
        FUN_100553300(0,param_1,0x201,param_2 >> 0x15,0x200,param_3 & 0xffffffff,param_4,param_5);
      }
    }
  }
  return;
}

