
undefined8 FUN_10005b6e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_autorelease_102269a10);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                            param_2);
  (*(code *)puVar2)(uVar4,PTR_s_setObject_forKey__102269208,uVar5,&cf__CFURLString);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,
                            param_3);
  (*(code *)puVar2)(uVar4,PTR_s_setObject_forKey__102269208,uVar5,&cf__CFURLStringType);
  QString::toUtf8();
  iVar3 = _FSNewAliasFromPath(0,local_48 + *(long *)(local_48 + 0x10),0,&local_40,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005b7dd;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10005b7dd:
  uVar5 = 3;
  if ((iVar3 == 0) && (lVar6 = _GetHandleSize(local_40), lVar6 != 0)) {
    _HLock(local_40);
    uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSData_10226a968,
                              PTR_s_dataWithBytes_length__102269a90,*local_40,lVar6);
    _HUnlock(local_40);
    (*(code *)puVar2)(uVar4,PTR_s_setObject_forKey__102269208,uVar5,&cf__CFURLAliasData);
    (*(code *)puVar2)(uVar1,PTR_s_setObject_forKey__102269208,uVar4,&cf_file_data);
    uVar5 = 0;
  }
  return uVar5;
}

