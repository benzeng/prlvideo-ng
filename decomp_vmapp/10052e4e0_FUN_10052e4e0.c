
undefined1 FUN_10052e4e0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined1 uVar9;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  QString QStack_48;
  uint local_40;
  undefined4 auStack_3c [2];
  undefined1 local_31;
  
  local_58 = -1;
  uStack_54 = 0xffffffff;
  register0x00001208 = (int)PTR_shared_null_100ba20d0;
  local_50 = (undefined1  [8])PTR_shared_null_100ba20d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_40 = local_40 & 0xffffff00;
  lVar2 = _CFDictionaryGetValue(param_1,&cf_id64);
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFNumberGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = _CFDictionaryGetValue(param_1,&cf_type);
      if (lVar3 == 0) {
        uVar9 = 0;
      }
      else {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFNumberGetTypeID();
        if (lVar4 == lVar5) {
          lVar4 = _CFDictionaryGetValue(param_1,&cf_uuid);
          if (lVar4 == 0) {
            uVar9 = 0;
          }
          else {
            lVar5 = _CFGetTypeID();
            lVar6 = _CFStringGetTypeID();
            if (lVar5 == lVar6) {
              cVar1 = _CFNumberGetValue(lVar2,9,&uStack_54);
              if (cVar1 == '\0') {
                uVar9 = 0;
              }
              else {
                cVar1 = _CFNumberGetValue(lVar3,9,&local_58);
                if (cVar1 == '\0') {
                  uVar9 = 0;
                }
                else {
                  uVar7 = (ulong)local_58;
                  local_58 = -1;
                  if (uVar7 < 5) {
                    local_58 = *(int *)((long)&PTR___mh_execute_header_100b467e0 + uVar7 * 4);
                  }
                  lVar2 = _CFStringGetLength(lVar4);
                  lVar3 = _CFStringGetCharactersPtr(lVar4);
                  if (lVar3 == 0) {
                    pvVar8 = _malloc(lVar2 * 2);
                    if (pvVar8 != (void *)0x0) {
                      _CFStringGetCharacters(lVar4,0,lVar2,pvVar8);
                      QString::setUnicode((QChar *)local_50,(int)pvVar8);
                      _free(pvVar8);
                    }
                  }
                  else {
                    QString::setUnicode((QChar *)local_50,(int)lVar3);
                  }
                  auStack_3c[0] = 0;
                  lVar2 = _CFDictionaryGetValue(param_1,&cf_pid);
                  if (lVar2 != 0) {
                    lVar3 = _CFGetTypeID(lVar2);
                    lVar4 = _CFNumberGetTypeID();
                    if ((lVar3 == lVar4) &&
                       (cVar1 = _CFNumberGetValue(lVar2,9,auStack_3c), cVar1 == '\0')) {
                      auStack_3c[0] = 0;
                    }
                  }
                  *param_2 = CONCAT44(uStack_54,local_58);
                  QString::operator=((QString *)(param_2 + 1),(QString *)local_50);
                  QString::operator=((QString *)(param_2 + 2),(QString *)(local_50 + 8));
                  param_2[3] = CONCAT44(auStack_3c[0],local_40);
                  uVar9 = 1;
                }
              }
            }
            else {
              uVar9 = 0;
            }
          }
        }
        else {
          uVar9 = 0;
        }
      }
    }
    else {
      uVar9 = 0;
    }
  }
  if (*(int *)QStack_48.field0_0x0 != -1) {
    if (*(int *)QStack_48.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_48.field0_0x0 = *(int *)QStack_48.field0_0x0 + -1;
      local_31 = *(int *)QStack_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052e769;
    }
    QArrayData::deallocate((QArrayData *)QStack_48.field0_0x0,2,8);
  }
LAB_10052e769:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50,2,8);
  }
  return uVar9;
}

