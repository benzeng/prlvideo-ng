
void FUN_10080e050(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if ((param_1 != 0) &&
     (iVar3 = FUN_10081d580(param_1 + 0x94,0xffffffff,0xc,"ssl_lib.c",0x795), iVar3 < 1)) {
    if (*(long *)(param_1 + 0x188) != 0) {
      FUN_1008c0f90();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1008146f0(param_1,0);
    }
    FUN_10081fa50(2,param_1,param_1 + 0xd0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_100885960();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_1008bd910();
    }
    if (*(long *)(param_1 + 8) != 0) {
      FUN_100884dd0();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_100884dd0();
    }
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_1008121f0();
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      FUN_100885590(*(long *)(param_1 + 0x110),FUN_1008a11b0);
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      FUN_100885590(*(long *)(param_1 + 0xf8),FUN_1008a17f0);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    if (*(long *)(param_1 + 0x2d8) != 0) {
      FUN_100884dd0();
    }
    if (*(long *)(param_1 + 0x208) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081b980(param_1);
    if (*(long *)(param_1 + 0x198) != 0) {
      FUN_10087a5e0();
    }
    lVar1 = *(long *)(param_1 + 0x228);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      while (puVar2 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar2;
        FUN_10081e1a0();
      }
      FUN_10081e1a0(lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x230);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      while (puVar2 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar2;
        FUN_10081e1a0();
      }
      FUN_10081e1a0(lVar1);
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

