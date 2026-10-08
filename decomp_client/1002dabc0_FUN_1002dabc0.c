
byte FUN_1002dabc0(void)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  bVar2 = 0;
  if (lVar4 != 0) {
    uVar3 = FUN_10016f500(lVar4);
    cVar1 = FUN_10061b4d0(uVar3,2);
    bVar2 = 0;
    if (cVar1 != '\0') {
      uVar3 = FUN_10016f500(lVar4);
      cVar1 = FUN_10061b4d0(uVar3,0x80);
      bVar2 = 4;
      if (cVar1 == '\0') {
        uVar3 = FUN_10016f500(lVar4);
        bVar2 = FUN_10061b4d0(uVar3,0x10000);
        bVar2 = bVar2 | 2;
      }
    }
  }
  return bVar2;
}

