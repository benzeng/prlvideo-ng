
undefined8 FUN_100bdcd80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_100bcd1c0();
  if ((iVar1 != 0) && (lVar2 = FUN_100bf3540(0x380,"d1_lib.c",0x67), lVar2 != 0)) {
    ___bzero(lVar2,0x380);
    uVar3 = FUN_100cbc4e0();
    *(undefined8 *)(lVar2 + 0x248) = uVar3;
    uVar3 = FUN_100cbc4e0();
    *(undefined8 *)(lVar2 + 600) = uVar3;
    uVar3 = FUN_100cbc4e0();
    *(undefined8 *)(lVar2 + 0x260) = uVar3;
    uVar3 = FUN_100cbc4e0();
    *(undefined8 *)(lVar2 + 0x268) = uVar3;
    lVar4 = FUN_100cbc4e0();
    *(long *)(lVar2 + 0x278) = lVar4;
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(lVar2 + 0x204) = 0x100;
    }
    *(undefined8 *)(lVar2 + 0x284) = 0;
    if (*(long *)(lVar2 + 0x248) != 0) {
      if ((((*(long *)(lVar2 + 600) != 0) && (*(long *)(lVar2 + 0x260) != 0)) &&
          (*(long *)(lVar2 + 0x268) != 0)) && (lVar4 != 0)) {
        *(long *)(param_1 + 0x88) = lVar2;
        (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1);
        return 1;
      }
      FUN_100cbc520();
    }
    if (*(long *)(lVar2 + 600) != 0) {
      FUN_100cbc520();
    }
    if (*(long *)(lVar2 + 0x260) != 0) {
      FUN_100cbc520();
    }
    if (*(long *)(lVar2 + 0x268) != 0) {
      FUN_100cbc520();
    }
    if (*(long *)(lVar2 + 0x278) != 0) {
      FUN_100cbc520();
    }
    FUN_100bf3910(lVar2);
  }
  return 0;
}

