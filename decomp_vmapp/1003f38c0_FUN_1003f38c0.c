
undefined8 FUN_1003f38c0(long param_1,QString *param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  QString local_58;
  QArrayData *local_50;
  long *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  iVar3 = _IOMasterPort(0,&local_38);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  local_3c = 0;
  local_48 = (long *)0x0;
  QString::toUtf8();
  iVar3 = _IORegistryEntryFromPath(local_38,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f3954;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1003f3954:
  if (iVar3 == 0) {
    FUN_1008e3970("","DVDImage",0,"[DVD Drive:Phys] Can not get access to IORegistry path ");
    return 0xffffffff;
  }
  lVar5 = _IORegistryEntrySearchCFProperty
                    (iVar3,"IOService",&cf_BSDName,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0
                     ,1);
  uVar6 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x97,0xab,0xcf,0x2c,0x23,0xcc,0x11,0xd5,0xa0,0xe8,0,0x30,0x65,0x70,0x48,0x66)
  ;
  uVar7 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar4 = _IOCreatePlugInInterfaceForService(iVar3,uVar6,uVar7,&local_48,&local_3c);
  plVar2 = local_48;
  if (iVar4 != 0) goto LAB_1003f3bc0;
  pcVar1 = *(code **)(*local_48 + 8);
  uVar6 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x1f,0x65,0x11,6,0x23,0xcc,0x11,0xd5,0xbb,0xdb,0,0x30,0x65,0x70,0x48,0x66);
  auVar8 = _CFUUIDGetUUIDBytes(uVar6);
  iVar4 = (*pcVar1)(plVar2,auVar8._0_8_,auVar8._8_8_,param_1 + 8);
  if (iVar4 != 0) goto LAB_1003f3bc0;
  (**(code **)(*local_48 + 0x18))();
  if (lVar5 != 0) {
    FUN_100788b70(&local_58,lVar5);
    QString::operator=((QString *)(param_1 + 0x120),&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f3ba1;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1003f3ba1:
  QString::operator=((QString *)(param_1 + 0x20),param_2);
  uVar6 = FUN_1003f49c0();
  FUN_1003f58a0(uVar6,(QString *)(param_1 + 0x120),param_1);
LAB_1003f3bc0:
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  _IOObjectRelease(iVar3);
  return 0;
}

