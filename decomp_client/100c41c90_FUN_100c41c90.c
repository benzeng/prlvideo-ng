
undefined8 FUN_100c41c90(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_40;
  int local_34;
  undefined8 local_30;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  local_30 = 0;
  iVar1 = FUN_100c426a0(&local_34,&local_30,uVar3);
  if (iVar1 == 0) {
    FUN_100c62ee0(0x10,0xd8,0x10,"ec_ameth.c",0x6e);
  }
  else {
    iVar1 = FUN_100c3ef20(uVar3,0);
    lVar4 = 0;
    if (0 < iVar1) {
      lVar2 = FUN_100bf3540(iVar1,"ec_ameth.c",0x74);
      lVar4 = 0;
      if ((lVar2 != 0) &&
         (local_40 = lVar2, iVar1 = FUN_100c3ef20(uVar3,&local_40), lVar4 = lVar2, 0 < iVar1)) {
        uVar3 = FUN_100bf6fe0(0x198);
        iVar1 = FUN_100c7b960(param_1,uVar3,local_34,local_30,lVar2,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    if (local_34 == 6) {
      FUN_100c74e10();
    }
    else {
      FUN_100c8b2f0(local_30);
    }
    if (lVar4 != 0) {
      FUN_100bf3910(lVar4);
    }
  }
  return 0;
}

