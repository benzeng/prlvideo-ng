
void FUN_1004e13f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_1004dcd30();
  if (lVar1 != 0) {
    uVar2 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x40));
    uVar4 = FUN_1004da2c0(lVar1);
    uVar5 = FUN_1004da2d0(lVar1);
    cVar3 = FUN_1003e5e60(uVar2,uVar4,uVar5);
    if (cVar3 != '\0') {
      uVar2 = FUN_1003b0b00(*(undefined8 *)(param_1 + 0x40));
      uVar4 = FUN_1004da2c0(lVar1);
      uVar4 = FUN_1003b1cd0(uVar4);
      uVar5 = FUN_1004da2d0(lVar1);
      FUN_1003adb40(uVar2,uVar4,uVar5);
      return;
    }
  }
  return;
}

