
undefined1 FUN_1007782d0(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  
  cVar3 = FUN_100774d90();
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001554a0(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_10016f500(lVar2);
      cVar3 = FUN_10061b500(uVar1,2);
      if (cVar3 == '\0') {
        uVar1 = FUN_10016f500(lVar2);
        cVar3 = FUN_10061c2b0(uVar1,0xa0);
        if (cVar3 == '\0') {
          cVar3 = MessageUtils::isMessageHidden(0x3c76);
          if (cVar3 == '\0') {
            uVar4 = FUN_100d80630(1);
          }
        }
      }
    }
  }
  return uVar4;
}

