
long FUN_100cb0660(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  do {
    lVar2 = FUN_100c593f0(param_2,0x208);
    if (lVar2 == 0) {
      uVar3 = 0x6c;
      uVar4 = 699;
LAB_100cb0705:
      FUN_100c62ee0(0x21,0x7f,uVar3,"pk7_doit.c",uVar4);
      return 0;
    }
    FUN_100c58d60(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar3 = 0x44;
      uVar4 = 0x2c0;
      goto LAB_100cb0705;
    }
    uVar3 = FUN_100c6fca0();
    iVar1 = FUN_100c6fc30(uVar3);
    if (iVar1 == param_3) {
      return lVar2;
    }
    param_2 = FUN_100c59460(lVar2);
  } while( true );
}

