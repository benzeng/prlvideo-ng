
ulong FUN_100c67000(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x11) & 2) == 0) {
    iVar2 = FUN_100c62100(param_2,(int)param_1[0xd]);
    return (ulong)(0 < iVar2);
  }
  if (lVar1 == 0) {
    uVar4 = 0x83;
    uVar5 = 0x255;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar4 = 0x84;
    uVar5 = 0x25a;
  }
  else {
    uVar3 = (**(code **)(lVar1 + 0x48))(param_1,6,0,param_2);
    if ((int)uVar3 != -1) {
      return uVar3;
    }
    uVar4 = 0x85;
    uVar5 = 0x261;
  }
  FUN_100c62ee0(6,0x7c,uVar4,"evp_enc.c",uVar5);
  return 0;
}

