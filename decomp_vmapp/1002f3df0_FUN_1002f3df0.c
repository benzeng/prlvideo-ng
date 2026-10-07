
int FUN_1002f3df0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  int local_3c;
  long *local_38;
  
  iVar3 = _IOCreatePlugInInterfaceForService();
  cVar2 = FUN_1006d81f0(1);
  if ((cVar2 == '\0') && ((iVar3 == -0x1ffffd44 || (iVar3 == -0x1ffffd39)))) {
    local_3c = 0;
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    lVar5 = _IORegistryEntryCreateCFProperty(param_1,&cf_PrlHiddenInterface,uVar7,0);
    if (lVar5 != 0) {
      cVar2 = _CFNumberGetValue(lVar5,9,&local_3c);
      _CFRelease(lVar5);
      if ((cVar2 != '\0') && (local_3c != 0)) {
        lVar5 = _CFStringCreateMutable(uVar7,0);
        iVar3 = -0x1ffffd42;
        if (lVar5 != 0) {
          _CFStringAppendCString
                    (lVar5,
                     "/System/Library/Extensions/IOUSBFamily.kext/Contents/PlugIns/IOUSBLib.bundle",
                     0);
          lVar6 = _CFURLCreateWithFileSystemPath(0,lVar5,0,1);
          _CFRelease(lVar5);
          if (lVar6 != 0) {
            _CFPlugInCreate(0,lVar6);
            _CFRelease(lVar6);
            uVar7 = _CFUUIDGetConstantUUIDWithBytes
                              (0,0x45,0x47,0xa8,0xaa,0x9e,0xf3,0x11,0xd4,0xa9,0xbd,0,10,0x27,5,0x28,
                               0x61);
            plVar8 = (long *)_CFPlugInInstanceCreate(0,uVar7,param_2);
            if (plVar8 != (long *)0x0) {
              pcVar1 = *(code **)(*plVar8 + 8);
              auVar9 = _CFUUIDGetUUIDBytes(param_3);
              (*pcVar1)(plVar8,auVar9._0_8_,auVar9._8_8_,&local_38);
              (**(code **)(*plVar8 + 0x18))(plVar8);
              iVar3 = -0x1ffffd39;
              if (local_38 != (long *)0x0) {
                iVar3 = 0;
                iVar4 = (**(code **)(*local_38 + 0x30))(local_38,0,param_1);
                if (iVar4 == 0) {
                  *param_4 = local_38;
                }
                else {
                  (**(code **)(*local_38 + 0x18))();
                  iVar3 = iVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}

