
undefined8 FUN_100809c20(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_10080ee80();
  if (((uVar1 & 0x3000) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      uVar2 = 0xe5;
      uVar3 = 0x590;
      goto LAB_100809c78;
    }
  }
  if (param_4 < 0x4001) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar2 = FUN_100809d30(param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  uVar2 = 0x14e;
  uVar3 = 0x596;
LAB_100809c78:
  FUN_100887ce0(0x14,0x10c,uVar2,"d1_pkt.c",uVar3);
  return 0xffffffff;
}

