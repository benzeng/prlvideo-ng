
void FUN_100d79cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10225be48;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  lVar2 = _CFURLCreateWithFileSystemPath
                    (uVar1,&
                           cf__System_Library_Frameworks_SecurityInterface_framework_Versions_A_Resources_lockClosing_aif
                     ,0,0);
  if (lVar2 != 0) {
    _AudioServicesCreateSystemSoundID(lVar2,param_1 + 1);
    _CFRelease(lVar2);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  lVar2 = _CFURLCreateWithFileSystemPath
                    (uVar1,&
                           cf__System_Library_Frameworks_SecurityInterface_framework_Versions_A_Resources_lockOpening_aif
                     ,0,0);
  if (lVar2 != 0) {
    _AudioServicesCreateSystemSoundID(lVar2,(long)param_1 + 0xc);
    _CFRelease(lVar2);
    return;
  }
  return;
}

