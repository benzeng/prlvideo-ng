
QByteArray * FUN_1009c8910(QByteArray *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_a8;
  int local_a0 [2];
  char *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined4 local_80 [2];
  undefined4 *local_78;
  QArrayData *local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 local_49;
  undefined4 local_48;
  int local_44;
  char *local_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_58 = 0;
  local_38 = lVar3;
  iVar1 = _SecKeychainOpen("/System/Library/Keychains/SystemRootCertificates.keychain");
  lVar2 = local_58;
  if (iVar1 == 0) {
    lVar2 = _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,&local_58,1,
                           PTR__kCFTypeArrayCallBacks_1021e1958);
    if (local_58 != 0) {
      _CFRelease();
    }
    local_60 = 0;
    iVar1 = _SecKeychainSearchCreateFromAttributes(lVar2,0x80001000,0,&local_60);
    if (iVar1 == 0) {
      local_68 = 0;
      local_70 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_1009c8a20:
      do {
        iVar1 = _SecKeychainSearchCopyNext(local_60,&local_68);
        if ((iVar1 != 0) || (*(int *)(local_70 + 4) != 0)) goto LAB_1009c8c0f;
        local_48 = 0x6c61626c;
        local_80[0] = 1;
        local_78 = &local_48;
        _SecKeychainItemCopyContent(local_68,0,local_80,0,0);
        QByteArray::QByteArray((QByteArray *)&local_88,local_40,local_44);
        pQVar4 = local_88 + *(long *)(local_88 + 0x10);
        if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_88 + 4) != 0)) {
          lVar3 = 0;
          do {
            if (pQVar4[lVar3] == (QArrayData)0x0) break;
            lVar3 = lVar3 + 1;
          } while ((uint)lVar3 < *(uint *)(local_88 + 4));
          if ((int)lVar3 == -1) {
            _strlen((char *)pQVar4);
          }
        }
        QString::fromUtf8_helper((char *)&local_90,(int)pQVar4);
        iVar1 = QString::compare_helper
                          (local_90 + *(long *)(local_90 + 0x10),*(undefined4 *)(local_90 + 4),
                           "Apple Root CA");
        if (iVar1 == 0) {
          iVar1 = _SecCertificateGetData(local_68,local_a0);
          if ((iVar1 != 0) && (local_68 != 0)) {
            _CFRelease();
          }
          QByteArray::QByteArray((QByteArray *)&local_a8,local_98,local_a0[0]);
          QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_49 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1009c8b7c;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
LAB_1009c8b7c:
          _SecKeychainItemFreeContent(local_80,0);
          if (local_68 != 0) {
            _CFRelease();
          }
        }
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_49 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1009c8bca;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1009c8bca:
      } while (*(int *)local_88 == -1);
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009c8a20;
      }
      QArrayData::deallocate(local_88,1,8);
      goto LAB_1009c8a20;
    }
    if (local_60 != 0) {
      _CFRelease();
    }
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  QByteArray::QByteArray(param_1,(char *)0x0,-1);
LAB_1009c89d5:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
LAB_1009c8c0f:
  _CFRelease(lVar2);
  _CFRelease(local_60);
  *(QArrayData **)param_1 = local_70;
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_49 = *(int *)local_70 != 0;
    UNLOCK();
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009c89d5;
    }
    QArrayData::deallocate(local_70,1,8);
  }
  goto LAB_1009c89d5;
}

