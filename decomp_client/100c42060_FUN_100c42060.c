
bool FUN_100c42060(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  iVar1 = FUN_100c426a0(&local_3c,&local_48,uVar5);
  if (iVar1 == 0) {
    uVar5 = 0x8e;
    uVar6 = 0x133;
  }
  else {
    uVar2 = FUN_100c3fb80(uVar5);
    FUN_100c3fb90(uVar5,uVar2 | 1);
    iVar1 = FUN_100c3e8f0(uVar5,0);
    if (iVar1 == 0) {
      FUN_100c3fb90(uVar5,uVar2);
      FUN_100c62ee0(0x10,0xd6,0x10,"ec_ameth.c",0x143);
      return false;
    }
    lVar4 = FUN_100bf3540(iVar1,"ec_ameth.c",0x146);
    if (lVar4 == 0) {
      FUN_100c3fb90(uVar5,uVar2);
      uVar5 = 0x41;
      uVar6 = 0x149;
    }
    else {
      local_38 = lVar4;
      iVar3 = FUN_100c3e8f0(uVar5,&local_38);
      FUN_100c3fb90(uVar5,uVar2);
      if (iVar3 != 0) {
        uVar5 = FUN_100bf6fe0(0x198);
        iVar1 = FUN_100c8d1d0(param_1,uVar5,0,local_3c,local_48,lVar4,iVar1);
        return iVar1 != 0;
      }
      FUN_100bf3910(lVar4);
      uVar5 = 0x10;
      uVar6 = 0x150;
    }
  }
  FUN_100c62ee0(0x10,0xd6,uVar5,"ec_ameth.c",uVar6);
  return false;
}

