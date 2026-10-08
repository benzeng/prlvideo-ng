
undefined1
FUN_1009dbdc0(undefined8 param_1,char param_2,char param_3,QString *param_4,QString *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  QString local_88;
  QString local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_40 = 0;
  QString::toUtf8();
  uVar4 = 0x68747078;
  if (param_2 != '\0') {
    uVar4 = 0x68747378;
  }
  iVar1 = _SecKeychainFindInternetPassword
                    (0,*(undefined4 *)(local_48 + 4),local_48 + *(long *)(local_48 + 0x10),0,0,0,0,0
                     ,0,0,uVar4,0,0,0,&local_40);
  if (iVar1 == 0) {
    local_58 = 0x61636374;
    local_54 = 0;
    local_50 = 0;
    local_68[0] = 1;
    local_60 = &local_58;
    puVar6 = &local_78;
    if (param_3 != '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    iVar1 = _SecKeychainItemCopyContent(local_40,0,local_68,&local_6c,puVar6);
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
      uVar2 = _CFStringCreateWithBytes(uVar3,local_50,local_54,0x8000100,0);
      FUN_1009dbc60(&local_80,uVar2);
      QString::operator=(param_4,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009dbf34;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1009dbf34:
      _CFRelease(uVar2);
      if (param_3 == '\0') {
        uVar3 = _CFStringCreateWithBytes(uVar3,local_78,local_6c,0x8000100,0);
        _SecKeychainItemFreeContent(local_68,local_78);
        FUN_1009dbc60(&local_88,uVar3);
        QString::operator=(param_5,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009dbfb4;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1009dbfb4:
        _CFRelease(uVar3);
      }
    }
    _CFRelease(local_40);
    uVar5 = 1;
    if (iVar1 == 0) goto LAB_1009dbfef;
  }
  uVar5 = 0;
  FUN_100df99c0("","ProxyInfo",0,"Error: failed get data from keychain (%ld)",(long)iVar1);
LAB_1009dbfef:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return uVar5;
}

