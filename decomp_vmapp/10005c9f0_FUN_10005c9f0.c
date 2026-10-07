
void FUN_10005c9f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  QDateTime local_e0 [8];
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QDateTime local_a8 [8];
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  _memset_pattern16(&local_70,&PTR_shared_null_100ba8620,0x18);
  iVar2 = FUN_10078cf30(local_58,param_2,param_3,0);
  while (iVar2 == 0) {
    iVar2 = FUN_10078d0d0(local_58);
    if (iVar2 == 0x200b) {
      cVar1 = FUN_10005c060(param_1,local_58,&local_70,3);
      if (cVar1 == '\0') {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","vm",1,"Error while getting software item");
        }
      }
      else {
        local_98 = (QArrayData *)QString::fromAscii_helper("%1GuestAppsStat:%2:%3:%4",0x18);
        QDateTime::currentDateTime();
        local_b0 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
        QDateTime::toString(&local_a0);
        QString::arg(&local_90,&local_98,&local_a0,0,0x20);
        QString::arg(&local_88,&local_90,&local_70,0,0x20);
        QString::arg(&local_80,&local_88,&local_68,0,0x20);
        QString::arg(&local_78,&local_80,&local_60,0,0x20);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cb72;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10005cb72:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cba2;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10005cba2:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cbd8;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10005cbd8:
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cc0e;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10005cc0e:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cc44;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10005cc44:
        QDateTime::~QDateTime(local_a8);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cc86;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_10005cc86:
        FUN_10005c750(&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cfd0;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
    }
    else if (iVar2 == 0x200c) {
      cVar1 = FUN_10005c060(param_1,local_58,&local_70,2);
      if (cVar1 == '\0') {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","vm",1,"Error while getting software item");
        }
      }
      else {
        local_d0 = (QArrayData *)QString::fromAscii_helper("%1GuestServiceStat:%2:%3",0x18);
        QDateTime::currentDateTime();
        pQVar5 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
        QDateTime::toString(&local_d8);
        QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
        QString::arg(&local_c0,&local_c8,&local_70,0,0x20);
        QString::arg(&local_b8,&local_c0,&local_68,0,0x20);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cde6;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_10005cde6:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005ce1c;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_10005ce1c:
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005ce52;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_10005ce52:
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005ce88;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_10005ce88:
        QDateTime::~QDateTime(local_e0);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cec6;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_10005cec6:
        FUN_10005c750(&local_b8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005cfd0;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
    }
    else if (1 < DAT_1011b55f8) {
      uVar3 = FUN_10078d0d0(local_58);
      uVar4 = FUN_10078d0c0(local_58);
      FUN_1008e3970("","vm",2,"Unsupported data skipped, type=%u, size=%u",uVar3,uVar4);
    }
LAB_10005cfd0:
    iVar2 = FUN_10078d020(local_58);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005d01d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10005d01d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005d054;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10005d054:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

