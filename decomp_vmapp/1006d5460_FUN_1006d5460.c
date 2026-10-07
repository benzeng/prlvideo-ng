
undefined8 * FUN_1006d5460(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  QArrayData *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  cfstringStruct *local_38;
  
  iVar1 = (int)param_2;
  if (iVar1 == 3) {
    pcVar6 = "Invalid";
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        param_2 = param_2 >> 0x20;
        local_3c = 8;
        local_40 = DAT_100b49eac;
        local_48 = DAT_100b49ea4;
        iVar1 = _AudioObjectGetPropertyData(param_2,&local_48,0,0,&local_3c,&local_38);
        pcVar7 = local_38;
        if (iVar1 != 0) {
          FUN_1008e3970("","PrlAudioDeviceManager",0,"UID obtaining failed for audio device %i",
                        param_2);
          pcVar7 = &cf___;
        }
        local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
        lVar3 = _CFStringGetLength(pcVar7);
        lVar4 = _CFStringGetCharactersPtr(pcVar7);
        if (lVar4 == 0) {
          pvVar5 = _malloc(lVar3 * 2);
          if (pvVar5 == (void *)0x0) {
            FUN_1008e3970("","PrlAudioDeviceManager",0,"Broken UID CFString was given for device %i"
                          ,param_2);
            _CFRelease(pcVar7);
            uVar2 = QString::fromAscii_helper("Unknown device",0xe);
            *param_1 = uVar2;
            goto LAB_1006d5633;
          }
          _CFStringGetCharacters(pcVar7,0,lVar3,pvVar5);
          QString::setUnicode((QChar *)&local_50,(int)pvVar5);
          _free(pvVar5);
        }
        else {
          QString::setUnicode((QChar *)&local_50,(int)lVar4);
        }
        _CFRelease(pcVar7);
        *param_1 = local_50;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          UNLOCK();
          local_48 = CONCAT71(local_48._1_7_,*(int *)local_50 != 0);
        }
LAB_1006d5633:
        if (*(int *)local_50 == -1) {
          return param_1;
        }
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          local_48 = CONCAT71(local_48._1_7_,*(int *)local_50 != 0);
          if (*(int *)local_50 != 0) {
            return param_1;
          }
        }
        QArrayData::deallocate(local_50,2,8);
        return param_1;
      }
      pcVar6 = "Null";
      iVar1 = 4;
      goto LAB_1006d54a8;
    }
    pcVar6 = "Default";
  }
  iVar1 = 7;
LAB_1006d54a8:
  uVar2 = QString::fromAscii_helper(pcVar6,iVar1);
  *param_1 = uVar2;
  return param_1;
}

