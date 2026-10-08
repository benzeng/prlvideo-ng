
undefined8 FUN_1003c0840(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    cVar1 = FUN_1001754c0(uVar5,0x20);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      uVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
      uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
      uVar5 = FUN_100110af0(uVar2,uVar3);
    }
  }
  return uVar5;
}

