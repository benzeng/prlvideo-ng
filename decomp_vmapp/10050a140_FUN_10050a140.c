
undefined8 FUN_10050a140(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10050a1b0();
  uVar3 = 0;
  if (iVar1 != 0) {
    if (iVar1 == 8) {
      pcVar2 = "File has no custom icon, err=%i";
      uVar3 = 8;
      iVar1 = 8;
    }
    else {
      pcVar2 = "Failed to get custom icon from file resources, err=%i";
      uVar3 = 3;
    }
    FUN_1008e3970("MACFSICON","FileIconsMac",3,pcVar2,iVar1);
  }
  return uVar3;
}

