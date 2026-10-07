
undefined8 FUN_1003df500(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  local_38 = in_RAX;
  iVar2 = _PMServerCreatePrinterList(0,&local_38);
  if (iVar2 == 0) {
    lVar3 = _CFArrayGetCount(local_38);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",3,"[CParallelPrinter] Got %lu printers. Search for default",
                    lVar3);
    }
    uVar6 = 0;
    if (0 < lVar3) {
      uVar6 = 0;
      lVar5 = 0;
      do {
        uVar4 = _CFArrayGetValueAtIndex(local_38,lVar5);
        cVar1 = _PMPrinterIsDefault(uVar4);
        if ((lVar3 + -1 <= lVar5) || (cVar1 != '\0')) {
          _PMRetain(uVar4);
          uVar6 = uVar4;
          break;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar3);
    }
    _CFRelease(local_38);
  }
  else {
    uVar6 = 0;
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Can\'t get printers list");
  }
  return uVar6;
}

