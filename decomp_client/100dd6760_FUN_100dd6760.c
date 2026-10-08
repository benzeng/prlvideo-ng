
int FUN_100dd6760(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar2 = FUN_100deef90();
  if (lVar2 == 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","HostUtils",0,"Error creating CFstring from value %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return -0x7ffffffe;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return -0x7ffffffe;
      }
      local_32 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return -0x7ffffffe;
  }
  lVar3 = _IOServiceMatching("IOMedia");
  if (lVar3 == 0) {
    FUN_100df99c0("","HostUtils",0,"Get matching classes failed");
    iVar1 = -0x7ffffff7;
    goto LAB_100dd68f7;
  }
  _CFDictionarySetValue(lVar3,&cf_Leaf,*(undefined8 *)PTR__kCFBooleanTrue_1021e18e0);
  if (param_3 == 1) {
    _CFDictionarySetValue(lVar3,&cf_UUID,lVar2);
    pcVar4 = &cf_BSDName;
LAB_100dd68c6:
    iVar1 = FUN_100dd6960(lVar3,pcVar4,param_2);
    if (-1 < iVar1) goto LAB_100dd68f7;
  }
  else {
    iVar1 = -0x7ffffff7;
    if (param_3 == 0) {
      _CFDictionarySetValue(lVar3,&cf_BSDName,lVar2);
      pcVar4 = &cf_UUID;
      goto LAB_100dd68c6;
    }
  }
  FUN_100df99c0("","HostUtils",0,"Error getting UUID name by BSD Name");
LAB_100dd68f7:
  _CFRelease(lVar2);
  return iVar1;
}

