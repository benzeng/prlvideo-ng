
void FUN_1007d2380(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_10080f3c0(param_1,0);
  if (lVar1 != 0) {
    iVar2 = 1;
    do {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","IOCommunication",2,"Cipher :%s");
      }
      lVar1 = FUN_10080f3c0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

