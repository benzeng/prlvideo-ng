
undefined8 FUN_10098c030(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1[1] != 0) {
    uVar3 = _CFArrayGetCount();
    if (0 < (int)uVar3) {
      uVar10 = 0;
      do {
        uVar5 = *param_1;
        uVar4 = _CFArrayGetValueAtIndex(param_1[1],uVar10);
        uVar5 = _IOPSGetPowerSourceDescription(uVar5,uVar4);
        lVar6 = _CFDictionaryGetValue(uVar5,&cf_HardwareSerialNumber);
        if (lVar6 == 0) {
LAB_10098c0f0:
          iVar2 = FUN_100df9940(&DAT_10227dd08);
          if (iVar2 != 0) {
            if (lVar6 == 0) {
              bVar1 = false;
              pcVar9 = "null";
            }
            else {
              uVar5 = _CFGetTypeID(lVar6);
              lVar6 = _CFCopyTypeIDDescription(uVar5);
              if (lVar6 == 0) {
                local_48 = (QArrayData *)QString::fromAscii_helper("Unknown",7);
              }
              else {
                FUN_100deed00(&local_48,lVar6);
              }
              QString::toUtf8();
              pcVar9 = (char *)(local_40 + *(long *)(local_40 + 0x10));
              bVar1 = true;
            }
            FUN_100df99c0("","BattWatcher",0,
                          "power_source[%d/%d] returned invalid serial; typeid \'%s\'",
                          uVar10 & 0xffffffff,uVar3,pcVar9);
            if (bVar1) {
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10098c1c9;
                }
                QArrayData::deallocate(local_40,1,8);
              }
LAB_10098c1c9:
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10098c200;
                }
                QArrayData::deallocate(local_48,2,8);
              }
            }
          }
        }
        else {
          lVar7 = _CFGetTypeID(lVar6);
          lVar8 = _CFStringGetTypeID();
          if (lVar7 != lVar8) goto LAB_10098c0f0;
          lVar6 = _CFStringCompare(lVar6,param_2,0);
          if (lVar6 == 0) {
            return uVar5;
          }
        }
LAB_10098c200:
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)uVar3);
    }
  }
  return 0;
}

