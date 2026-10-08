
bool FUN_100b522d0(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,&cf_com_apple_nat_plist);
  if (lVar2 == 0) {
    return false;
  }
  QString::toLatin1();
  lVar3 = _CFStringCreateWithCString(0,local_40 + *(long *)(local_40 + 0x10),0x600);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b5235b;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b5235b:
  if (lVar3 == 0) {
    _CFRelease(lVar2);
    bVar7 = false;
  }
  else {
    lVar4 = _SCPreferencesGetValue(lVar2,&cf_NAT);
    if (lVar4 == 0) {
      bVar7 = false;
    }
    else {
      cVar1 = _CFDictionaryGetValueIfPresent(lVar4,&cf_Enabled,&local_48);
      lVar6 = local_48;
      if (cVar1 == '\0') {
        bVar7 = false;
      }
      else {
        lVar5 = _CFNumberGetTypeID();
        if (lVar6 == 0) {
          bVar7 = false;
        }
        else {
          lVar6 = _CFGetTypeID(lVar6);
          if (lVar6 == lVar5) {
            cVar1 = _CFNumberGetValue(local_48,10,&local_50);
            bVar7 = false;
            if ((cVar1 != '\0') && (local_50 != 0)) {
              cVar1 = _CFDictionaryGetValueIfPresent(lVar4,&cf_SharingDevices,&local_48);
              lVar4 = local_48;
              if (cVar1 == '\0') {
                bVar7 = false;
              }
              else {
                lVar6 = _CFArrayGetTypeID();
                if (lVar4 == 0) {
                  bVar7 = false;
                }
                else {
                  lVar4 = _CFGetTypeID(lVar4);
                  if (lVar4 == lVar6) {
                    lVar4 = _CFArrayGetCount(local_48);
                    if (lVar4 == 0) {
                      bVar7 = false;
                    }
                    else {
                      lVar4 = _CFArrayGetFirstIndexOfValue(local_48,0,lVar4,lVar3);
                      bVar7 = -1 < lVar4;
                    }
                  }
                  else {
                    bVar7 = false;
                  }
                }
              }
            }
          }
          else {
            bVar7 = false;
          }
        }
      }
    }
    _CFRelease(lVar3);
    _CFRelease(lVar2);
  }
  return bVar7;
}

