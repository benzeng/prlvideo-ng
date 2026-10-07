
void FUN_100643320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong local_218;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  QString local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined8 local_188;
  long lStack_180;
  long *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  QArrayData *local_148;
  undefined1 local_139;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar4 = (char *)FUN_1007da5e0("devices.camera.black_list","ManyCam Virtual Webcam");
  iVar3 = -1;
  if (pcVar4 != (char *)0x0) {
    sVar5 = _strlen(pcVar4);
    iVar3 = (int)sVar5;
  }
  local_148 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar3);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (long *)0x0;
  uStack_170 = 0;
  local_188 = 0;
  lStack_180 = 0;
  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___AVCaptureDevice_100bedb68,
                     PTR_s_devicesWithMediaType__100bed4b0,
                     *(undefined8 *)PTR__AVMediaTypeVideo_100ba2038);
  uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_188,local_b8,0x10
                    );
  if (uVar7 != 0) {
    lVar1 = *local_178;
    puVar13 = PTR_s_localizedName_100bed5f0;
    do {
      local_218 = 0;
      do {
        if (*local_178 != lVar1) {
          _objc_enumerationMutation(uVar6);
        }
        uVar10 = *(undefined8 *)(lStack_180 + local_218 * 8);
        uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,puVar13);
        pcVar4 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar8,PTR_s_UTF8String_100bed218);
        iVar3 = -1;
        if (pcVar4 != (char *)0x0) {
          sVar5 = _strlen(pcVar4);
          iVar3 = (int)sVar5;
        }
        local_190 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar3);
        iVar3 = QString::indexOf(&local_148,&local_190,0,1);
        if (*(int *)local_190 != -1) {
          if (*(int *)local_190 != 0) {
            LOCK();
            *(int *)local_190 = *(int *)local_190 + -1;
            local_139 = *(int *)local_190 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_100643505;
          }
          QArrayData::deallocate(local_190,2,8);
        }
LAB_100643505:
        if (iVar3 == -1) {
          uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,puVar13);
          pcVar4 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar8,PTR_s_UTF8String_100bed218);
          iVar3 = -1;
          if (pcVar4 != (char *)0x0) {
            sVar5 = _strlen(pcVar4);
            iVar3 = (int)sVar5;
          }
          pQVar9 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar3);
          local_198 = pQVar9;
          FUN_10000c490(param_1,&local_198);
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_139 = *(int *)pQVar9 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_10064359a;
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_10064359a:
          uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,PTR_s_uniqueID_100bed4c0);
          pcVar4 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar8,PTR_s_UTF8String_100bed218);
          iVar3 = -1;
          if (pcVar4 != (char *)0x0) {
            sVar5 = _strlen(pcVar4);
            iVar3 = (int)sVar5;
          }
          pQVar9 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar3);
          local_1a0 = pQVar9;
          FUN_10000c490(param_2);
          if (*(int *)pQVar9 != -1) {
            if (*(int *)pQVar9 != 0) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_139 = *(int *)pQVar9 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_10064362a;
            }
            QArrayData::deallocate(pQVar9,2,8);
          }
LAB_10064362a:
          local_1a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = (long *)0x0;
          uStack_1d0 = 0;
          local_1e8 = 0;
          lStack_1e0 = 0;
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar10,PTR_s_formats_100bed4e0);
          uVar11 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar10,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1e8,
                              local_138,0x10);
          if (uVar11 != 0) {
            lVar2 = *local_1d8;
            do {
              uVar14 = 0;
              do {
                if (*local_1d8 != lVar2) {
                  _objc_enumerationMutation(uVar10);
                }
                uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                  (*(undefined8 *)(lStack_1e0 + uVar14 * 8),
                                   PTR_s_formatDescription_100bed4e8);
                lVar12 = _CMVideoFormatDescriptionGetDimensions(uVar8);
                local_208 = (QArrayData *)QString::fromAscii_helper("%1 x %2  ",9);
                QString::arg(&local_200,&local_208,(long)(int)lVar12,0,10,0x20);
                QString::arg(&local_1f8,&local_200,lVar12 >> 0x20,0,10,0x20);
                local_1f0.field0_0x0 = local_1a8.field0_0x0;
                if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
                  local_139 = *(int *)local_1a8.field0_0x0 != 0;
                  UNLOCK();
                }
                QString::append(&local_1f0);
                QString::operator=(&local_1a8,&local_1f0);
                if (*(int *)local_1f0.field0_0x0 != -1) {
                  if (*(int *)local_1f0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
                    local_139 = *(int *)local_1f0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_139) goto LAB_1006437db;
                  }
                  QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
                }
LAB_1006437db:
                if (*(int *)local_1f8 != -1) {
                  if (*(int *)local_1f8 != 0) {
                    LOCK();
                    *(int *)local_1f8 = *(int *)local_1f8 + -1;
                    local_139 = *(int *)local_1f8 != 0;
                    UNLOCK();
                    if ((bool)local_139) goto LAB_100643817;
                  }
                  QArrayData::deallocate(local_1f8,2,8);
                }
LAB_100643817:
                if (*(int *)local_200 != -1) {
                  if (*(int *)local_200 != 0) {
                    LOCK();
                    *(int *)local_200 = *(int *)local_200 + -1;
                    local_139 = *(int *)local_200 != 0;
                    UNLOCK();
                    if ((bool)local_139) goto LAB_100643853;
                  }
                  QArrayData::deallocate(local_200,2,8);
                }
LAB_100643853:
                if (*(int *)local_208 != -1) {
                  if (*(int *)local_208 != 0) {
                    LOCK();
                    *(int *)local_208 = *(int *)local_208 + -1;
                    local_139 = *(int *)local_208 != 0;
                    UNLOCK();
                    if ((bool)local_139) goto LAB_10064388f;
                  }
                  QArrayData::deallocate(local_208,2,8);
                }
LAB_10064388f:
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar11);
              uVar11 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                 (uVar10,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1e8
                                  ,local_138,0x10);
            } while (uVar11 != 0);
          }
          FUN_10000c490(param_3,&local_1a8);
          puVar13 = PTR_s_localizedName_100bed5f0;
          if (*(int *)local_1a8.field0_0x0 != -1) {
            if (*(int *)local_1a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
              local_139 = *(int *)local_1a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100643930;
            }
            QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
          }
        }
LAB_100643930:
        local_218 = local_218 + 1;
      } while (local_218 < uVar7);
      uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_188,local_b8,
                         0x10);
    } while (uVar7 != 0);
  }
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_139 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_1006439c1;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006439c1:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

