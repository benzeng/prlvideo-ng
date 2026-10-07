
uint FUN_100727230(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (0x10a < param_2) {
    iVar1 = FUN_1007278c0(param_1,param_2,&DAT_10116e7c0,0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_100726d80(param_1,param_2);
      uVar2 = ~-(uint)(iVar1 == 0) | 0x101;
    }
  }
  return uVar2;
}

