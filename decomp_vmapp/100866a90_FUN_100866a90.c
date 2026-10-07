
undefined8 FUN_100866a90(undefined8 param_1,long param_2)

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
  iVar1 = FUN_1008674a0(&local_34,&local_30,uVar3);
  if (iVar1 == 0) {
    FUN_100887ce0(0x10,0xd8,0x10,"ec_ameth.c",0x6e);
  }
  else {
    iVar1 = FUN_100863d20(uVar3,0);
    lVar4 = 0;
    if (0 < iVar1) {
      lVar2 = FUN_10081ddd0(iVar1,"ec_ameth.c",0x74);
      lVar4 = 0;
      if ((lVar2 != 0) &&
         (local_40 = lVar2, iVar1 = FUN_100863d20(uVar3,&local_40), lVar4 = lVar2, 0 < iVar1)) {
        uVar3 = FUN_100821870(0x198);
        iVar1 = FUN_1008a03e0(param_1,uVar3,local_34,local_30,lVar2,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    if (local_34 == 6) {
      FUN_100899890();
    }
    else {
      FUN_1008afd70(local_30);
    }
    if (lVar4 != 0) {
      FUN_10081e1a0(lVar4);
    }
  }
  return 0;
}

