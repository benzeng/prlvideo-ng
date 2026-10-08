
/* Function Stack Size: 0x28 bytes */

char CAlertDelegate::textView_clickedOnLink_atIndex_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  QUrl local_58 [8];
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_absoluteString_102269bd0);
  if (lVar3 == 0) {
    return '\x01';
  }
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_38 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,lVar3);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("prlhelp.",8);
  iVar1 = QString::indexOf(&local_38,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100066f2c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100066f2c:
  if (iVar1 == -1) {
    QUrl::QUrl(local_58,&local_38,0);
    QDesktopServices::openUrl(local_58);
    QUrl::~QUrl(local_58);
    goto LAB_100067074;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("prlhelp.",8);
  QString::split(&local_48,&local_38,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100066f93;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100066f93:
  if (*(int *)(local_48 + 0xc) - *(int *)(local_48 + 8) == 2) {
    uVar2 = QString::toUInt((bool *)(local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x18),0);
    AppHelpUtils::openHelpTopic(uVar2,0);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100067074;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100067030:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100067030;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100067074:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return '\x01';
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return '\x01';
}

