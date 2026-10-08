
undefined1 FUN_100d321d0(ulong param_1,char param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar7 = param_1 & 0xffffffff;
  iVar3 = _IOObjectConformsTo(param_1,"IODVDMedia");
  if (iVar3 == 0) {
    iVar4 = _IOObjectConformsTo(uVar7,"IOCDMedia");
    bVar8 = iVar4 != 0;
  }
  else {
    bVar8 = true;
  }
  uVar6 = 0;
  if ((bVar8) && (param_2 != '\0')) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
    uVar6 = 0;
    lVar5 = _IORegistryEntryCreateCFProperty(uVar7,&cf_Whole,uVar1,0);
    if (lVar5 != 0) {
      cVar2 = _CFBooleanGetValue(lVar5);
      _CFRelease(lVar5);
      if (cVar2 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar5 = _IORegistryEntryCreateCFProperty(uVar7,&cf_Ejectable,uVar1,0);
        if (lVar5 != 0) {
          cVar2 = _CFBooleanGetValue(lVar5);
          _CFRelease(lVar5);
          if (cVar2 == '\0') {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
            if (param_3 != 0) {
              *(bool *)param_3 = iVar3 != 0;
            }
          }
        }
      }
    }
  }
  return uVar6;
}

