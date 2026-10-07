
undefined8 FUN_100877360(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long local_30;
  
  local_30 = 0;
  lVar3 = *(long *)(param_2 + 0x20);
  piVar2 = (int *)FUN_1008afd00();
  if (piVar2 == (int *)0x0) {
    FUN_100887ce0(5,0x6d,0x41,"dh_ameth.c",0x8b);
  }
  else {
    iVar1 = FUN_100876100(lVar3,piVar2 + 2);
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      FUN_100887ce0(5,0x6d,0x41,"dh_ameth.c",0x90);
    }
    else {
      lVar3 = FUN_10089b490(*(undefined8 *)(lVar3 + 0x20),0);
      if (lVar3 != 0) {
        iVar1 = FUN_1008a81e0(lVar3,&local_30);
        FUN_1008a8220(lVar3);
        if (iVar1 < 1) {
          FUN_100887ce0(5,0x6d,0x41,"dh_ameth.c",0x9e);
        }
        else {
          uVar4 = FUN_100821870(0x1c);
          iVar1 = FUN_1008a03e0(param_1,uVar4,0x10,piVar2,local_30,iVar1);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  if (local_30 != 0) {
    FUN_10081e1a0();
  }
  if (piVar2 != (int *)0x0) {
    FUN_1008afd70(piVar2);
  }
  return 0;
}

