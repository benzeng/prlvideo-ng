
void FUN_10006a190(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  CVmConfiguration *pCVar9;
  bool *pbVar10;
  QArrayData *local_138;
  undefined1 local_12a;
  undefined1 local_129;
  CVmConfiguration local_128 [248];
  
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (param_3 != 0x30000004) {
    return;
  }
  FUN_100a4d110(&local_138);
  pcVar3 = (cfstringStruct *)
           (*(code *)PTR__objc_msgSend_1021e1c68)
                     (puVar1,PTR_s_stringWithQString__102268d00,&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_12a = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_12a) goto LAB_10006a21f;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10006a21f:
  FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getSharedVolumes();
  if (DAT_102311e00 == 0) {
    uVar4 = _objc_getClass("SecurityBookmarkStorage");
    DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
  }
  lVar5 = DAT_102311e00;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,&cf__);
  lVar5 = (*(code *)puVar1)(lVar5,PTR_s_checkAvailabilityOfUrl__102269cb8,uVar4);
  if (DAT_102311e00 == 0) {
    uVar4 = _objc_getClass("SecurityBookmarkStorage");
    DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
  }
  lVar6 = DAT_102311e00;
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                            pcVar3);
  lVar6 = (*(code *)puVar1)(lVar6,PTR_s_checkAvailabilityOfUrl__102269cb8,uVar4);
  if (DAT_102311e00 == 0) {
    uVar4 = _objc_getClass("SecurityBookmarkStorage");
    DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
  }
  lVar7 = DAT_102311e00;
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                            &cf__Volumes);
  lVar7 = (*(code *)puVar1)(lVar7,PTR_s_checkAvailabilityOfUrl__102269cb8,uVar4);
  cVar2 = CVmSharedVolumes::isEnabled();
  if (cVar2 != '\0') {
    if (lVar7 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      pCVar9 = (CVmConfiguration *)FUN_10018c2b0(uVar4);
      CVmConfiguration::CVmConfiguration(local_128,pCVar9);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      uVar8 = CVmTools::getSharedVolumes();
      CVmSharedVolumes::setEnabled(SUB81(uVar8,0));
      pbVar10 = (bool *)FUN_100198200(uVar4,uVar8);
      local_129 = 0;
      CSdkRequest::waitForCompletion(pbVar10,(uint)&local_129);
      CVmConfiguration::~CVmConfiguration(local_128);
    }
    else {
      if (DAT_102311e00 == 0) {
        uVar4 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
      }
      lVar7 = DAT_102311e00;
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                                &cf__Volumes);
      uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_stringWithUTF8String__1022697c0,"[SM]");
      (*(code *)puVar1)(lVar7,PTR_s_addUrl_withTag__102269cc0,uVar4,uVar8);
    }
  }
  cVar2 = CVmHostSharing::isEnabled();
  if (((cVar2 == '\0') || (cVar2 = CVmHostSharing::isShareAllMacDisks(), cVar2 == '\0')) ||
     (cVar2 = CVmHostSharing::isShareUserHomeDir(), cVar2 == '\0')) {
    cVar2 = CVmHostSharing::isEnabled();
    if (((cVar2 == '\0') || (cVar2 = CVmHostSharing::isShareAllMacDisks(), cVar2 != '\0')) ||
       (cVar2 = CVmHostSharing::isShareUserHomeDir(), cVar2 == '\0')) goto LAB_10006a66a;
    if (lVar6 != 0) {
      if (DAT_102311e00 == 0) {
        uVar4 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
      }
      goto LAB_10006a639;
    }
  }
  else {
    if ((lVar5 != 0) && (lVar6 != 0)) {
      if (DAT_102311e00 == 0) {
        uVar4 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
      }
      lVar5 = DAT_102311e00;
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                                pcVar3);
      uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_stringWithUTF8String__1022697c0,"[SF]");
      (*(code *)puVar1)(lVar5,PTR_s_addUrl_withTag__102269cc0,uVar4,uVar8);
      if (DAT_102311e00 == 0) {
        uVar4 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
      }
      pcVar3 = &cf__;
LAB_10006a639:
      lVar5 = DAT_102311e00;
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                                pcVar3);
      uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_stringWithUTF8String__1022697c0,"[SF]");
      (*(code *)puVar1)(lVar5,PTR_s_addUrl_withTag__102269cc0,uVar4,uVar8);
LAB_10006a66a:
      uVar4 = 0;
      goto LAB_10006a66c;
    }
    if (lVar5 == 0 && lVar6 != 0) {
      if (DAT_102311e00 == 0) {
        uVar4 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_sharedManager_102269bc8);
      }
      lVar5 = DAT_102311e00;
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,
                                pcVar3);
      uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_stringWithUTF8String__1022697c0,"[SF]");
      (*(code *)puVar1)(lVar5,PTR_s_addUrl_withTag__102269cc0,uVar4,uVar8);
      uVar4 = 2;
      goto LAB_10006a66c;
    }
  }
  uVar4 = 1;
LAB_10006a66c:
  FUN_10006a790(param_1,uVar4);
  return;
}

