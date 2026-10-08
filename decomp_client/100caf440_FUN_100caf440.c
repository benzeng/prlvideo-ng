
undefined8 FUN_100caf440(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_100c6dae0();
  lVar3 = FUN_100c58530(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x21,0x7d,0x20,"pk7_doit.c",0x6d);
  }
  else {
    uVar1 = FUN_100bf7220(*param_2);
    uVar2 = FUN_100bf70a0(uVar1);
    lVar4 = FUN_100c6bd60(uVar2);
    if (lVar4 == 0) {
      uVar2 = 0x6d;
      uVar5 = 0x73;
    }
    else {
      FUN_100c58d60(lVar3,0x6f,0,lVar4);
      if (*param_1 == 0) {
        *param_1 = lVar3;
        return 1;
      }
      lVar4 = FUN_100c591b0(*param_1,lVar3);
      if (lVar4 != 0) {
        return 1;
      }
      uVar2 = 0x20;
      uVar5 = 0x7b;
    }
    FUN_100c62ee0(0x21,0x7d,uVar2,"pk7_doit.c",uVar5);
    FUN_100c586e0(lVar3);
  }
  return 0;
}

