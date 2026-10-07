
void FUN_10010da20(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar4 = FUN_1007123b0();
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  uVar6 = 0;
  lVar5 = _SCDynamicStoreCreate(0,&cf_Parallels,FUN_10010e1c0,&local_58);
  if (lVar5 != 0) {
    local_60 = _SCDynamicStoreKeyCreateNetworkGlobalEntity
                         (0,*(undefined8 *)PTR__kSCDynamicStoreDomainState_100ba24f0,
                          *(undefined8 *)PTR__kSCEntNetIPv4_100ba2508);
    uVar6 = _CFArrayCreate(0,&local_60,1,PTR__kCFTypeArrayCallBacks_100ba23f0);
    _CFRelease(local_60);
    _SCDynamicStoreSetNotificationKeys(lVar5,uVar6,0);
    _CFRelease(uVar6);
    uVar6 = _SCDynamicStoreCreateRunLoopSource(0,lVar5,0);
    _CFRunLoopAddSource(uVar4,uVar6,*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
    _CFRelease(lVar5);
  }
  cVar1 = FUN_1006d81f0(1);
  iVar2 = -1;
  lVar5 = 0;
  if (cVar1 == '\0') {
    iVar2 = _socket(0x20,3,1);
    if (iVar2 < 0) {
      piVar7 = ___error();
      lVar5 = 0;
      FUN_1008e3970("","vm",0,"Failed to open route-socket: %d",*piVar7);
    }
    else {
      local_70 = 1;
      local_6c = 1;
      local_68 = 2;
      iVar3 = _ioctl(iVar2,0x800c6502,&local_70);
      if (iVar3 == 0) {
        lVar8 = _CFSocketCreateWithNative(0,iVar2,1,FUN_10010e210,0);
        if (lVar8 == 0) {
          lVar5 = 0;
          FUN_1008e3970("","vm",0,"CFSocketCreateWithNative failed");
        }
        else {
          lVar5 = _CFSocketCreateRunLoopSource(0,lVar8,0);
          if (lVar5 == 0) {
            FUN_1008e3970("","vm",0,"CFSocketCreateRunLoopSource failed");
          }
          else {
            uVar9 = _CFRunLoopGetCurrent();
            _CFRunLoopAddSource(uVar9,lVar5,*(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8);
          }
          _CFRelease(lVar8);
        }
      }
      else {
        piVar7 = ___error();
        lVar5 = 0;
        FUN_1008e3970("","vm",0,
                      "Failed to setup event-filter for sys_event socket for any subclass : %d",
                      *piVar7);
        _close(iVar2);
        iVar2 = -1;
      }
    }
  }
  puVar10 = operator_new(0x20);
  puVar10[1] = 0;
  *puVar10 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar10;
  *puVar10 = uVar4;
  *(int *)(puVar10 + 3) = iVar2;
  puVar10[1] = uVar6;
  puVar10[2] = lVar5;
  return;
}

