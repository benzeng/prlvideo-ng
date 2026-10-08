
/* Function Stack Size: 0x18 bytes */

void CNotifier::handleMount_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  QArrayData *local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  QArrayData **local_28;
  char *local_20;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_userInfo_1022699e0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_objectForKey__1022699d0,&cf_NSDevicePath);
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_c8[0] = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)local_c8,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,uVar2);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_28 = local_c8;
  local_20 = "const QString&";
  local_38 = 0;
  uStack_30 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + m_sender),"mountNotification",0,0,0,in_R9,local_28,
             "const QString&",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (*(int *)local_c8[0] != -1) {
    if (*(int *)local_c8[0] != 0) {
      LOCK();
      *(int *)local_c8[0] = *(int *)local_c8[0] + -1;
      UNLOCK();
      local_28 = (QArrayData **)CONCAT71(local_28._1_7_,*(int *)local_c8[0] != 0);
      if (*(int *)local_c8[0] != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_c8[0],2,8);
  }
  return;
}

