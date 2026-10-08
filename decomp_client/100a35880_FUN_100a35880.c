
void FUN_100a35880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *******ppppppplVar8;
  int iVar9;
  QArrayData *local_60;
  QString local_58;
  long ******local_50;
  long ******local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  local_50 = (long ******)&local_50;
  local_48 = (long ******)&local_50;
  cVar4 = FUN_100a47910(param_2,param_3,0x1e,&local_50);
  if (cVar4 != '\0') {
    if (local_40 == 0) {
      return;
    }
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_init_102268ca8);
    if ((long *******)local_48 != &local_50) {
      ppppppplVar8 = (long *******)local_48;
      do {
        local_58.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("tel://",6);
        pppppplVar2 = ppppppplVar8[2];
        if (((ulong)pppppplVar2[2] & 1) == 0) {
          iVar9 = (int)pppppplVar2 + 0x12;
        }
        else {
          iVar9 = (int)pppppplVar2[4];
        }
        QString::fromRawData((QChar *)&local_60,iVar9);
        QString::append(&local_58);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a3598c;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100a3598c:
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                           &local_58);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_length_102269050);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar6,PTR_s_stringByReplacingOccurrencesOfSt_10226a278,&cf_space_s_,
                           &cf___,1,param_6,0,uVar7);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_URLWithString__1022697c8,uVar6);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_openURL__1022697d0,uVar6);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a35a69;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100a35a69:
        ppppppplVar8 = (long *******)ppppppplVar8[1];
      } while (ppppppplVar8 != &local_50);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_drain_10226a5d8);
  }
  if (local_40 != 0) {
    pppppplVar2 = (long ******)*local_48;
    pppppplVar2[1] = local_50[1];
    *local_50[1] = (long ****)pppppplVar2;
    local_40 = 0;
    ppppppplVar8 = (long *******)local_48;
    while (ppppppplVar8 != &local_50) {
      ppppppplVar3 = (long *******)ppppppplVar8[1];
      pppppplVar2 = ppppppplVar8[2];
      if (pppppplVar2 != (long ******)0x0) {
        LOCK();
        pppppplVar1 = pppppplVar2 + 1;
        iVar9 = *(int *)pppppplVar1;
        *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (*(code *)(*pppppplVar2)[2])();
        }
      }
      operator_delete(ppppppplVar8);
      ppppppplVar8 = ppppppplVar3;
    }
  }
  return;
}

