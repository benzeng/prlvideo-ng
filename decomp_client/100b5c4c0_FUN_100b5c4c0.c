
undefined8 FUN_100b5c4c0(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100b5b710(&DAT_1023118b0);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_100b5b710(&DAT_1023118b0);
    uVar2 = FUN_100b5c500(*(undefined8 *)(lVar1 + 0x30),param_1);
  }
  return uVar2;
}

