
void FUN_100d322e0(undefined8 param_1,undefined1 *param_2,char param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int local_34;
  
  *param_2 = 0;
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
  lVar5 = _IOBSDNameMatching(uVar1,0,param_1);
  if (((lVar5 != 0) && (iVar3 = _IOServiceGetMatchingServices(uVar1,lVar5,&local_34), iVar3 == 0))
     && (local_34 != 0)) {
    iVar3 = _IOIteratorNext();
    _IOObjectRelease(local_34);
    if (iVar3 != 0) {
      iVar4 = _IORegistryEntryCreateIterator(iVar3,"IOService",3,&local_34);
      if ((iVar4 == 0) && (local_34 != 0)) {
        _IOObjectRetain(iVar3);
        iVar4 = iVar3;
        do {
          iVar3 = iVar4;
          cVar2 = FUN_100d321d0(iVar3,param_3,param_4);
          if (cVar2 == '\0' && param_3 == '\x01') {
            iVar4 = _IOObjectConformsTo(iVar3,"IODVDMedia");
            if (iVar4 == 0) {
              _IOObjectConformsTo(iVar3,"IOCDMedia");
            }
          }
          else if (cVar2 != '\0') {
            lVar5 = _IORegistryEntryCreateCFProperty
                              (iVar3,&cf_BSDName,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0
                              );
            if (lVar5 != 0) {
              _CFStringGetCString(lVar5,param_2,0x400,0x600);
              _CFRelease(lVar5);
            }
            _IOObjectRelease(iVar3);
            break;
          }
          _IOObjectRelease(iVar3);
          iVar4 = _IOIteratorNext(local_34);
          iVar3 = 0;
        } while (iVar4 != 0);
        _IOObjectRelease(local_34);
      }
      _IOObjectRelease(iVar3);
    }
  }
  return;
}

