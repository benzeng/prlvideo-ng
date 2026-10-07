
void FUN_100060d00(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = DAT_1011c3698;
  if (param_2 != '\0') {
    iVar3 = 0;
    do {
      lVar2 = FUN_1000915d0(uVar1,iVar3);
      if (lVar2 != 0) {
        FUN_100276270(lVar2,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  return;
}

