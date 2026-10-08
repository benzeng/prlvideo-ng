
undefined8 FUN_100c66f00(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  if ((*(ulong *)(lVar1 + 0x10) & 0x80) == 0) {
    if ((int)param_1[0xd] == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(ulong *)(lVar1 + 0x10) & 8) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    uVar3 = 0x7a;
    uVar2 = 0x82;
    uVar4 = 0x244;
  }
  else if (lVar1 == 0) {
    uVar3 = 0x7c;
    uVar2 = 0x83;
    uVar4 = 0x255;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar3 = 0x7c;
    uVar2 = 0x84;
    uVar4 = 0x25a;
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,1,param_2,0);
    if ((int)uVar2 != -1) {
      return uVar2;
    }
    uVar3 = 0x7c;
    uVar2 = 0x85;
    uVar4 = 0x261;
  }
  FUN_100c62ee0(6,uVar3,uVar2,"evp_enc.c",uVar4);
  return 0;
}

