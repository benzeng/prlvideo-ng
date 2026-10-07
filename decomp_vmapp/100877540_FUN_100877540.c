
undefined8 FUN_100877540(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  int *local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  iVar1 = FUN_1008b1d10(0,local_30,&local_3c,&local_50,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10089f9e0(0,&local_40,&local_48,local_50);
  lVar5 = 0;
  if (local_40 == 0x10) {
    lVar2 = FUN_1008a81c0(0,local_30,(long)local_3c);
    lVar5 = 0;
    if (lVar2 != 0) {
      local_38 = *(undefined8 *)(local_48 + 2);
      lVar3 = FUN_1008760e0(0,&local_38,(long)*local_48);
      lVar5 = lVar2;
      if (lVar3 != 0) {
        lVar4 = FUN_10089b5b0(lVar2,0);
        *(long *)(lVar3 + 0x28) = lVar4;
        if (lVar4 == 0) {
          FUN_100887ce0(5,0x6e,0x6a,"dh_ameth.c",0xd3);
        }
        else {
          iVar1 = FUN_1008763f0(lVar3);
          if (iVar1 != 0) {
            FUN_100892130(param_1,0x1c,lVar3);
            FUN_1008afe60(lVar2);
            return 1;
          }
        }
        goto LAB_100877637;
      }
    }
  }
  FUN_100887ce0(5,0x6e,0x72,"dh_ameth.c",0xe1);
  lVar3 = 0;
LAB_100877637:
  FUN_100876b00(lVar3);
  FUN_1008afe60(lVar5);
  return 0;
}

