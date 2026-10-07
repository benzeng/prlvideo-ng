
undefined8 * FUN_1006d50e0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  iVar5 = (int)param_2;
  if (iVar5 == 3) {
    pcVar6 = "Invalid";
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 0) {
        uVar1 = FUN_1006d4dd0(param_2);
        local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
        lVar2 = _CFStringGetLength(uVar1);
        lVar3 = _CFStringGetCharactersPtr(uVar1);
        if (lVar3 == 0) {
          pvVar4 = _malloc(lVar2 * 2);
          if (pvVar4 == (void *)0x0) {
            FUN_1008e3970("","PrlAudioDeviceManager",0,
                          "Broken name CFString was given for device %i",param_2 >> 0x20);
            _CFRelease(uVar1);
            uVar1 = QString::fromAscii_helper("Unknown device",0xe);
            *param_1 = uVar1;
            goto LAB_1006d525a;
          }
          _CFStringGetCharacters(uVar1,0,lVar2,pvVar4);
          QString::setUnicode((QChar *)&local_40,(int)pvVar4);
          _free(pvVar4);
        }
        else {
          QString::setUnicode((QChar *)&local_40,(int)lVar3);
        }
        _CFRelease(uVar1);
        *param_1 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_32 = *(int *)local_40 != 0;
          UNLOCK();
        }
LAB_1006d525a:
        if (*(int *)local_40 == -1) {
          return param_1;
        }
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
        return param_1;
      }
      pcVar6 = "Mute";
      iVar5 = 4;
      goto LAB_1006d5128;
    }
    pcVar6 = "Default";
  }
  iVar5 = 7;
LAB_1006d5128:
  uVar1 = QString::fromAscii_helper(pcVar6,iVar5);
  *param_1 = uVar1;
  return param_1;
}

