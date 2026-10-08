
void FUN_1007c3bb0(long param_1,QString *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  QString *pQVar5;
  QString *pQVar6;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QString local_60;
  QString local_58;
  undefined1 local_49;
  QString *local_48;
  QString *local_40;
  long local_30;
  
  puVar3 = PTR_shared_null_1021e1288;
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_30 = lVar2;
  if (*(int *)(param_1 + 0x4c) - 1U < 2) {
    lVar4 = FUN_1007bd870(param_1,5);
    if ((lVar4 != 0) &&
       (lVar4 = ___dynamic_cast(lVar4,&PTR_vtable_10222d910,&PTR_vtable_10222d9a0,0), lVar4 != 0)) {
      FUN_1007b5ae0(lVar4,param_2);
    }
    QFileInfo::QFileInfo(local_70,param_2);
    QFileInfo::fileName();
    QString::operator=(&local_58,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_49 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1007c3c81;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1007c3c81:
    QFileInfo::~QFileInfo(local_70);
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    lVar4 = FUN_1007bd870(param_1,1);
    if (lVar4 == 0) {
      lVar4 = FUN_1007bd870(param_1,4);
      if (lVar4 != 0) {
        QAction::text();
        QString::operator=(&local_58,&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_49 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007c3cc0;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
    }
    else {
      QString::operator=(&local_58,param_2);
    }
  }
  else {
    QString::operator=(&local_58,param_2);
  }
LAB_1007c3cc0:
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,(int)PTR_s_Disconnect_10226f558);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 0xf) {
    switch(iVar1) {
    case 3:
    case 5:
      goto switchD_1007c3d0d_caseD_3;
    default:
switchD_1007c3d0d_caseD_4:
      if (*(int *)(local_58.field0_0x0 + 4) != 0) {
        local_c8 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
        QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Connect_to_10226f550);
        local_40 = &local_58;
        local_48 = &local_d0;
        QString::multiArg((int)&local_c0,(QString **)&local_c8);
        QString::operator=(&local_78,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_49 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007c3e6f;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_1007c3e6f:
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_49 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007c3ea5;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_1007c3ea5:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_49 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_49) break;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
      break;
    case 8:
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Host_Only_10226f570);
        QString::operator=(&local_78,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_49 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) break;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
      }
      else if (iVar1 == 1) {
        QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Shared_10226f560
                       );
        QString::operator=(&local_78,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_49 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) break;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
      }
      else if (iVar1 == 2) {
        local_90 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
        QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Bridged_10226f568);
        local_48 = &local_58;
        local_40 = &local_98;
        QString::multiArg((int)&local_88,(QString **)&local_90);
        QString::operator=(&local_78,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_49 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007c415a;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1007c415a:
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_49 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1007c4190;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1007c4190:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_49 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_49) break;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
      break;
    case 0xc:
      QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Enable_Sound_10226f540);
      QString::operator=(&local_78,&local_b0);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_49 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1007c3fbf;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_1007c3fbf:
      QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Mute_10226f548);
      QString::operator=(&local_80,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_49 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) break;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
    }
  }
  else {
    if (iVar1 != 0xf) goto switchD_1007c3d0d_caseD_4;
switchD_1007c3d0d_caseD_3:
    QString::operator=(&local_78,&local_58);
  }
  pQVar5 = (QString *)FUN_1007bd870(param_1,2);
  pQVar6 = (QString *)FUN_1007bd870(param_1,3);
  if ((pQVar5 != (QString *)0x0) && (pQVar6 != (QString *)0x0)) {
    QAction::setText(pQVar5);
    QAction::setVisible(SUB81(pQVar5,0));
    QAction::setText(pQVar6);
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_49 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007c424e;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007c424e:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_49 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007c427e;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1007c427e:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007c42ae;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007c42ae:
  if (lVar2 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

