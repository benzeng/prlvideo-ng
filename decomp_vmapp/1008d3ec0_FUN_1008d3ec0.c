
undefined8 FUN_1008d3ec0(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_100892700();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0x21,0x7d,0x20,"pk7_doit.c",0x6d);
  }
  else {
    uVar1 = FUN_100821ab0(*param_2);
    uVar2 = FUN_100821930(uVar1);
    lVar4 = FUN_100890b60(uVar2);
    if (lVar4 == 0) {
      uVar2 = 0x6d;
      uVar5 = 0x73;
    }
    else {
      FUN_10087db60(lVar3,0x6f,0,lVar4);
      if (*param_1 == 0) {
        *param_1 = lVar3;
        return 1;
      }
      lVar4 = FUN_10087dfb0(*param_1,lVar3);
      if (lVar4 != 0) {
        return 1;
      }
      uVar2 = 0x20;
      uVar5 = 0x7b;
    }
    FUN_100887ce0(0x21,0x7d,uVar2,"pk7_doit.c",uVar5);
    FUN_10087d4e0(lVar3);
  }
  return 0;
}

