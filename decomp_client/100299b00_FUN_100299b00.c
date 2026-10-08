
undefined8 FUN_100299b00(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_11;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is Null");
    uVar2 = 0x80000009;
  }
  else {
    cVar1 = FUN_100175420(lVar3);
    if ((cVar1 != '\0') && (cVar1 = FUN_1001756f0(lVar3,&local_11), cVar1 == '\0')) {
      return 0x80000009;
    }
    uVar2 = 0;
  }
  return uVar2;
}

