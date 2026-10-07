
undefined1 FUN_1000bcd90(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 == 8) {
    cVar1 = FUN_1000a7bc0(param_1);
    uVar2 = 1;
    if (cVar1 == '\0') {
      FUN_10008f640(param_1,8,1);
      FUN_10008ec80(param_1,0xc);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

