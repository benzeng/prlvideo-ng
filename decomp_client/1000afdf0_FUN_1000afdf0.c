
int FUN_1000afdf0(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_e8;
  QArrayData *local_e4;
  QArrayData *local_dc;
  QArrayData *local_d4;
  QArrayData *local_cc;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_58.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("LaunchpadIcon_Win",0x11);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iVar1 = FUN_1000ff850(&local_78);
  iVar2 = -0x7ffffff7;
  if (iVar1 != 0) goto LAB_1000b02c7;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_2);
  if (lVar4 == 0) goto LAB_1000b02c7;
  if (*(int *)(param_1 + 0x90) == 2) {
    if (*param_4 == 9) {
      QString::fromUtf8_helper((char *)&local_50,0x1dbc78b);
      QString::operator=(&local_58,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000aff8e;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_48,0x1dbc79e);
      QString::operator=(&local_58,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000aff8e;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
  else if (*param_4 == 9) {
    QString::fromUtf8_helper((char *)&local_40,0x1dbc7b1);
    QString::operator=(&local_58,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000aff8e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1000aff8e:
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_80,(char *)(local_88 + *(long *)(local_88 + 0x10)),-1)
  ;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000affe0;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1000affe0:
  FUN_10018d830(&local_a0,lVar4);
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_90,(char *)(local_98 + *(long *)(local_98 + 0x10)),-1)
  ;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b0054;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1000b0054:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b008a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000b008a:
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_a8,(char *)(local_b0 + *(long *)(local_b0 + 0x10)),-1)
  ;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b00ef;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_1000b00ef:
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_b8,(char *)(local_c0 + *(long *)(local_c0 + 0x10)),-1)
  ;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b0151;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_1000b0151:
  local_e8 = 0x24;
  local_e4 = local_80 + *(long *)(local_80 + 0x10);
  local_dc = local_90 + *(long *)(local_90 + 0x10);
  local_d4 = local_a8 + *(long *)(local_a8 + 0x10);
  local_cc = local_b8 + *(long *)(local_b8 + 0x10);
  lVar4 = local_68;
  if ((local_78 & 1) == 0) {
    lVar4 = (long)&local_78 + 1;
  }
  iVar2 = _PxAppGrpBridgeCreateEx(lVar4,&local_e8);
  if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("SGAC","prl_client_app",1,"PxAppGrpBridgeCreate() err %i",iVar2);
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b022b;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1000b022b:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b0261;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1000b0261:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b0297;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1000b0297:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b02c7;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1000b02c7:
  std::string::~string((string *)&local_78);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return iVar2;
}

