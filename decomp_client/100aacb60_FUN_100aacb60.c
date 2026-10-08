
void FUN_100aacb60(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_100be4b30(param_1,0);
  if (lVar1 != 0) {
    iVar2 = 1;
    do {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","IOCommunication",2,"Cipher :%s");
      }
      lVar1 = FUN_100be4b30(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

