
long FUN_100a33ec0(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_RCX;
  
  lVar2 = FUN_100a33d30();
  if (lVar2 != 0) {
    lVar3 = _CFDataCreateMutable(0,0);
    if (lVar3 != 0) {
      lVar4 = _CGImageDestinationCreateWithData(lVar3,in_RCX,1,0);
      if (lVar4 != 0) {
        _CGImageDestinationAddImage(lVar4,lVar2,0);
        cVar1 = _CGImageDestinationFinalize(lVar4);
        if (cVar1 != '\0') {
          return lVar3;
        }
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
    }
    _CFRelease(lVar2);
  }
  return 0;
}

