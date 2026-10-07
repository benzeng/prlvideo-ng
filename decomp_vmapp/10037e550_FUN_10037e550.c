
undefined8 FUN_10037e550(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x8290);
  if (iVar1 == 3) {
    uVar2 = 0x1b02;
  }
  else if (iVar1 == 2) {
    uVar2 = 0x1b01;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    uVar2 = 0x1b00;
  }
  (*DAT_1011c6748)(0x408,uVar2);
  return 0;
}

