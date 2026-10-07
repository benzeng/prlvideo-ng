
long FUN_1008d50e0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  do {
    lVar2 = FUN_10087e1f0(param_2,0x208);
    if (lVar2 == 0) {
      uVar3 = 0x6c;
      uVar4 = 699;
LAB_1008d5185:
      FUN_100887ce0(0x21,0x7f,uVar3,"pk7_doit.c",uVar4);
      return 0;
    }
    FUN_10087db60(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar3 = 0x44;
      uVar4 = 0x2c0;
      goto LAB_1008d5185;
    }
    uVar3 = FUN_100894720();
    iVar1 = FUN_1008946b0(uVar3);
    if (iVar1 == param_3) {
      return lVar2;
    }
    param_2 = FUN_10087e260(lVar2);
  } while( true );
}

