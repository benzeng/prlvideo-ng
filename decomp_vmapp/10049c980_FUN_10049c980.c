
string * FUN_10049c980(string *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  if (param_2 != 0) {
    lVar2 = _CFURLCreateFromFSRef(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0);
    if (lVar2 != 0) {
      lVar3 = _CFURLCopyFileSystemPath(lVar2,0);
      if (lVar3 != 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        lVar4 = _CFStringGetCStringPtr(lVar3,0x8000100);
        if (lVar4 == 0) {
          uVar5 = _CFStringGetLength(lVar3);
          lVar4 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
          pvVar6 = _malloc(lVar4 + 1U);
          if (pvVar6 != (void *)0x0) {
            cVar1 = _CFStringGetCString(lVar3,pvVar6,lVar4 + 1U,0x8000100);
            if (cVar1 != '\0') {
              std::string::assign((char *)&local_48);
            }
            _free(pvVar6);
          }
        }
        else {
          std::string::assign((char *)&local_48);
        }
        std::string::operator=(param_1,(string *)&local_48);
        std::string::~string((string *)&local_48);
        _CFRelease(lVar3);
      }
      _CFRelease(lVar2);
    }
  }
  return param_1;
}

