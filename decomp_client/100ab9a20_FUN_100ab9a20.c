
undefined8 FUN_100ab9a20(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100ab9a90();
  uVar3 = 0;
  if (iVar1 != 0) {
    if (iVar1 == 8) {
      pcVar2 = "File has no custom icon, err=%i";
      uVar3 = 8;
      iVar1 = 8;
    }
    else {
      pcVar2 = "Failed to reset custom icon in file resources, err=%i";
      uVar3 = 3;
    }
    FUN_100df99c0("MACFSICON","FileIconsMac",3,pcVar2,iVar1);
  }
  return uVar3;
}

