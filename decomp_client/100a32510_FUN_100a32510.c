
int FUN_100a32510(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  pcVar6 = *(char **)(param_1 + 0x170);
  if (*(char **)(param_1 + 0x178) == pcVar6) {
    pcVar6 = "addNextPathToPasteboard: conv data empty";
  }
  else {
    if (*pcVar6 != '\0') {
      sVar3 = _strlen(pcVar6);
      lVar7 = (long)((sVar3 << 0x20) + 0x100000000) >> 0x20;
      lVar4 = _CFStringCreateWithBytes(0,pcVar6,lVar7,0x8000100,0);
      if (lVar4 != 0) {
        if (lVar7 != 0) {
          pvVar1 = *(void **)(param_1 + 0x170);
          sVar3 = *(long *)(param_1 + 0x178) - (lVar7 + (long)pvVar1);
          _memmove(pvVar1,(void *)(lVar7 + (long)pvVar1),sVar3);
          lVar7 = sVar3 + (long)pvVar1;
          if (*(long *)(param_1 + 0x178) != lVar7) {
            *(long *)(param_1 + 0x178) = lVar7;
          }
        }
        lVar7 = _CFURLCreateWithFileSystemPath(0,lVar4,0,0);
        if (lVar7 == 0) {
          iVar2 = -0x622c;
          FUN_100df99c0("CPTOOL","CPInterceptor",0,"addNextPathToPasteboard: no path");
        }
        else {
          lVar5 = _CFURLCreateData(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,lVar7,0x8000100
                                   ,1);
          if (lVar5 == 0) {
            iVar2 = -0x6c;
            FUN_100df99c0("CPTOOL","CPInterceptor",0,"addNextPathToPasteboard: no memory");
          }
          else {
            iVar2 = _PasteboardPutItemFlavor
                              (param_2,param_3,*(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8,lVar5,0)
            ;
            if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
              FUN_100df99c0("CPTOOL","CPInterceptor",1,
                            "PasteboardPutItemFlavor(item = %p) status = %d",param_3,iVar2);
            }
            _CFRelease(lVar5);
          }
          _CFRelease(lVar7);
        }
        _CFRelease(lVar4);
        return iVar2;
      }
      FUN_100df99c0("CPTOOL","CPInterceptor",0,"addNextPathToPasteboard: can\'t create string");
      return -0x622c;
    }
    *(char **)(param_1 + 0x178) = pcVar6;
    pcVar6 = "addNextPathToPasteboard: empty string";
  }
  FUN_100df99c0("CPTOOL","CPInterceptor",0,pcVar6);
  return -0x622c;
}

