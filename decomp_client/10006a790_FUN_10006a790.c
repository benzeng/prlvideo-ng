
void FUN_10006a790(long param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined *puVar5;
  CVmConfiguration *pCVar6;
  undefined8 uVar7;
  long lVar8;
  Data *pDVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool *pbVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  int iVar17;
  void **ppvVar18;
  undefined1 local_139;
  QArrayData *local_138;
  CVmConfiguration local_130 [255];
  undefined1 local_31;
  
  pCVar6 = (CVmConfiguration *)FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::CVmConfiguration(local_130,pCVar6);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  uVar7 = CVmTools::getVmSharing();
  lVar8 = CVmSharing::getHostSharing();
  if (lVar8 == 0) goto LAB_10006abd8;
  ppvVar18 = (void **)(lVar8 + 0xa8);
  puVar3 = *(uint **)(lVar8 + 0xa8);
  iVar17 = (int)ppvVar18;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar9 = (Data *)QListData::detach(iVar17);
    pvVar4 = *ppvVar18;
    lVar10 = (long)*(int *)((long)pvVar4 + 8);
    puVar1 = (uint *)((long)pvVar4 + lVar10 * 8 + 0x10);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar14 = *(int *)((long)pvVar4 + 0xc) - lVar10,
       lVar14 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar14 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006a884;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_10006a884:
  lVar10 = (long)*ppvVar18 + (long)*(int *)((long)*ppvVar18 + 8) * 8 + 0x10;
  bVar16 = false;
LAB_10006a8b4:
  puVar3 = *ppvVar18;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar9 = (Data *)QListData::detach(iVar17);
    pvVar4 = *ppvVar18;
    lVar14 = (long)*(int *)((long)pvVar4 + 8);
    puVar1 = (uint *)((long)pvVar4 + lVar14 * 8 + 0x10);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar15 = *(int *)((long)pvVar4 + 0xc) - lVar14,
       lVar15 != 0 && lVar14 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar15 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006a920;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_10006a920:
  puVar5 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (lVar10 != (long)*ppvVar18 + (long)*(int *)((long)*ppvVar18 + 0xc) * 8 + 0x10) {
    CVmSharedFolder::getPath();
    uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (puVar5,PTR_s_stringWithQString__102268d00,&local_138);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006a99c;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_10006a99c:
    if (DAT_102311e00 == 0) {
      uVar12 = _objc_getClass("SecurityBookmarkStorage");
      DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar12,PTR_s_sharedManager_102269bc8);
    }
    lVar14 = DAT_102311e00;
    uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,uVar11);
    lVar14 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (lVar14,PTR_s_checkAvailabilityOfUrl__102269cb8,uVar12);
    if (lVar14 == 0) {
      puVar3 = *ppvVar18;
      if (1 < *puVar3) {
        uVar2 = puVar3[2];
        pDVar9 = (Data *)QListData::detach(iVar17);
        pvVar4 = *ppvVar18;
        lVar10 = (long)*(int *)((long)pvVar4 + 8);
        puVar1 = (uint *)((long)pvVar4 + lVar10 * 8 + 0x10);
        if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
           (lVar14 = *(int *)((long)pvVar4 + 0xc) - lVar10,
           lVar14 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
          _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar14 * 8);
        }
        if (*(int *)pDVar9 != -1) {
          if (*(int *)pDVar9 != 0) {
            LOCK();
            *(int *)pDVar9 = *(int *)pDVar9 + -1;
            local_31 = *(int *)pDVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006ab04;
          }
          QListData::dispose(pDVar9);
        }
      }
LAB_10006ab04:
      bVar16 = true;
      lVar10 = QListData::erase(ppvVar18);
    }
    else {
      if (DAT_102311e00 == 0) {
        uVar12 = _objc_getClass("SecurityBookmarkStorage");
        DAT_102311e00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar12,PTR_s_sharedManager_102269bc8)
        ;
      }
      lVar14 = DAT_102311e00;
      uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_fileURLWithPath__1022699c8,uVar11)
      ;
      uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithUTF8String__1022697c0
                          ,"[USF]");
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar14,PTR_s_addUrl_withTag__102269cc0,uVar11,uVar12);
      lVar10 = lVar10 + 8;
    }
    goto LAB_10006a8b4;
  }
  if ((param_2 != 0) || (bVar16)) {
    bVar16 = SUB81(lVar8,0);
    if (param_2 == 2) {
      CVmHostSharing::setShareUserHomeDir(bVar16);
      CVmHostSharing::setShareAllMacDisks(bVar16);
      CVmHostSharing::setEnabled(bVar16);
    }
    else if (param_2 == 1) {
      CVmHostSharing::setShareUserHomeDir(bVar16);
      CVmHostSharing::setShareAllMacDisks(bVar16);
      CVmHostSharing::setEnabled(bVar16);
    }
    pbVar13 = (bool *)FUN_100197ee0(*(undefined8 *)(param_1 + 0x10),uVar7);
    local_139 = 0;
    CSdkRequest::waitForCompletion(pbVar13,(uint)&local_139);
  }
LAB_10006abd8:
  CVmConfiguration::~CVmConfiguration(local_130);
  return;
}

