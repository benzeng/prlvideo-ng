
long * FUN_100d3e840(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = (long)PTR_shared_null_1021e15e8;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_init_102268ca8);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_standardUserDefaults_102269ab0
                    );
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar7,PTR_s_objectForKey__1022699d0,&cf_AppleLanguages);
  iVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_count_102268e68);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_objectAtIndex__102269480,lVar10);
      FUN_100deed00(&local_68,uVar8);
      local_70.field0_0x0 = local_68.field0_0x0;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      iVar5 = QString::compare_helper
                        ((QArrayData *)(local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10))
                         ,*(int *)(local_68.field0_0x0 + 4),"zh-Hans",0xffffffff,1);
      if (iVar5 == 0) {
        QString::fromUtf8_helper((char *)&local_50,0x1dd9782);
        QString::operator=(&local_70,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3eb00;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
      }
      else {
        iVar5 = QString::compare_helper
                          ((QArrayData *)
                           (local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10)),
                           *(int *)(local_68.field0_0x0 + 4),"zh-Hant",0xffffffff,1);
        if (iVar5 == 0) {
          QString::fromUtf8_helper((char *)&local_48,0x1dd9788);
          QString::operator=(&local_70,&local_48);
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3eb00;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
        }
        else if ((*(int *)(local_68.field0_0x0 + 4) == 5) &&
                (*(short *)(local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10) + 4) == 0x2d
                )) {
          local_58 = (QArrayData *)QString::fromAscii_helper("-",1);
          local_60 = (QArrayData *)QString::fromAscii_helper("_",1);
          QString::replace(&local_70,&local_58,&local_60,1);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3e9f9;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100d3e9f9:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d3eb00;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
      }
LAB_100d3eb00:
      QString::operator=(&local_68,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d3eb3c;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_100d3eb3c:
      iVar5 = QString::compare_helper
                        ((QArrayData *)(local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10))
                         ,*(int *)(local_68.field0_0x0 + 4),"pt",0xffffffff,1);
      if (iVar5 == 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1df15af);
        QString::operator=(&local_68,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3ebc0;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
LAB_100d3ebc0:
      FUN_1000341d0(param_1,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d3ebfb;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100d3ebfb:
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar4);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_release_1022699b8);
  puVar2 = PTR_shared_null_1021e1288;
  lVar10 = *param_1;
  iVar4 = *(int *)(lVar10 + 8);
  if (iVar4 < *(int *)(lVar10 + 0xc)) {
    uVar9 = 0;
    do {
      iVar5 = (int)uVar9;
      if (iVar5 < 0) {
        local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      }
      else {
        local_78.field0_0x0 =
             *(QTypedArrayData<unsigned_short> **)(lVar10 + 0x10 + ((long)iVar5 + (long)iVar4) * 8);
        if (1 < *(int *)local_78.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
        }
      }
      if (2 < *(int *)(local_78.field0_0x0 + 4)) {
        QString::left((int)&local_80);
        if (2 < *(int *)(local_78.field0_0x0 + 4)) {
          uVar9 = (ulong)iVar5;
          lVar10 = (long)(iVar5 + 1);
          do {
            QString::left((int)&local_88);
            cVar3 = operator==(&local_88,&local_80);
            if (*(int *)local_88.field0_0x0 != -1) {
              if (*(int *)local_88.field0_0x0 != 0) {
                LOCK();
                *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                local_31 = *(int *)local_88.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d3ed02;
              }
              QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
            }
LAB_100d3ed02:
            if (cVar3 == '\0') break;
            if ((long)uVar9 < -1) {
LAB_100d3ed50:
              local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
            }
            else {
              lVar1 = *param_1;
              if (*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8) <= (int)lVar10) goto LAB_100d3ed50;
              local_90.field0_0x0 =
                   *(QTypedArrayData<unsigned_short> **)
                    (lVar1 + 0x10 + (*(int *)(lVar1 + 8) + lVar10) * 8);
              if (1 < *(int *)local_90.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
              }
            }
            QString::operator=(&local_78,&local_90);
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d3ed9d;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_100d3ed9d:
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 1;
          } while (2 < *(int *)(local_78.field0_0x0 + 4));
        }
        FUN_100d3f230(param_1,uVar9 & 0xffffffff,&local_80);
        iVar5 = (int)uVar9 + 1;
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d3ee00;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
      }
LAB_100d3ee00:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d3ee30;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100d3ee30:
      uVar9 = (ulong)(iVar5 + 1U);
      lVar10 = *param_1;
      iVar4 = *(int *)(lVar10 + 8);
    } while ((int)(iVar5 + 1U) < *(int *)(lVar10 + 0xc) - iVar4);
  }
  return param_1;
}

