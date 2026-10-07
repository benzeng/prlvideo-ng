
undefined8 FUN_100786360(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  QString local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_30 = 0;
  local_38 = 0;
  iVar2 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,param_1,&local_28);
  if (iVar2 != 0) {
    FUN_1008e3970("","HostUtils",0,"Get matching services failed");
    return 0x80000009;
  }
  iVar2 = _IOIteratorNext(local_28);
  _IOObjectRelease(local_28);
  if (iVar2 == 0) {
    FUN_1008e3970("","HostUtils",0,"No objects with such UID found");
    return 0x80000017;
  }
  iVar3 = _IORegistryEntryCreateCFProperties
                    (iVar2,&local_30,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
  if (iVar3 != 0) {
    FUN_1008e3970("","HostUtils",0,"Create CF properties failed.");
    uVar4 = 0x80000009;
    goto LAB_1007864ec;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(local_30,param_2,&local_38);
  if (cVar1 == '\0') {
    FUN_1008e3970("","HostUtils",0,"Can\'t get BSD Name for the UID.");
    uVar4 = 0x80000017;
  }
  else {
    _CFRetain(local_38);
    FUN_100788b70(&local_40,local_38);
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007864b3;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1007864b3:
    _CFRelease(local_38);
    uVar4 = 0;
  }
  _CFRelease(local_30);
LAB_1007864ec:
  _IOObjectRelease(iVar2);
  return uVar4;
}

