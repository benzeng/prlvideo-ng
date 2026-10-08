
undefined8 FUN_1006afa10(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_10018f860(*(undefined8 *)(param_1 + 0x20));
  if (iVar1 == 8) {
    uVar2 = FUN_10018f860(*(undefined8 *)(param_1 + 0x20));
    uVar3 = FUN_10018f890(*(undefined8 *)(param_1 + 0x20));
    uVar4 = FUN_100110a10(uVar2,uVar3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

