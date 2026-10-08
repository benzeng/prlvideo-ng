
undefined1 FUN_100d6fb50(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_init_102268ca8);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAppleScript_10226ab00,PTR_s_alloc_102268b58);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                       param_1);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_initWithSource__10226a598,uVar4);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_autorelease_102269a10);
    local_38 = 0;
    lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_executeAndReturnError__10226a5a0,&local_38);
    uVar7 = 1;
    if (lVar5 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (local_38,PTR_s_objectForKey__1022699d0,&cf_NSAppleScriptErrorMessage);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_UTF8String_1022699e8);
      FUN_100df99c0("","prl_apple_script_helper",0,"Error message %s",uVar3);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(0,PTR_s_stringValue_1022691d0);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_UTF8String_1022699e8);
      uVar7 = 0;
      FUN_100df99c0("","prl_apple_script_helper",0,"Description %s",uVar3);
    }
    goto LAB_100d6ff80;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::indexOf(param_1,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6fd01;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d6fd01:
  local_48 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::lastIndexOf(param_1,&local_48,0xfffffffe,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6fd5e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d6fd5e:
  QString::mid((int)&local_50,(int)param_1);
  lVar5 = _NSTemporaryDirectory();
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSUUID_10226ab08,PTR_s_UUID_10226a5a8);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_UUIDString_10226a5b0);
    lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (&cf_prl_,PTR_s_stringByAppendingString__102269058,uVar3);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (lVar5,PTR_s_stringByAppendingString__102269058,lVar6);
      lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar3,PTR_s_stringByAppendingString__102269058,&cf__applescript);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        QString::toUtf8();
        uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSData_10226a968,PTR_s_dataWithBytes_length__102269a90,
                           local_58 + *(long *)(local_58 + 0x10),(long)*(int *)(local_58 + 4));
        lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,lVar5)
        ;
        if (lVar5 == 0) {
          uVar7 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_writeToURL_atomically__10226a5b8,lVar5,1);
          uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSUserAppleScriptTask_10226ab10,PTR_s_alloc_102268b58
                            );
          lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar3,PTR_s_initWithURL_error__10226a5c0,lVar5,local_60);
          if (lVar5 == 0) {
            uVar7 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_1021e1c68)
                      (lVar5,PTR_s_executeWithAppleEvent_completion_10226a5c8,0,
                       &PTR___NSConcreteGlobalBlock_10225ba30);
            uVar7 = 1;
            (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_release_1022699b8);
          }
        }
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100d6ff50;
          }
          QArrayData::deallocate(local_58,1,8);
        }
      }
    }
  }
LAB_100d6ff50:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d6ff80;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d6ff80:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_drain_10226a5d8);
  return uVar7;
}

