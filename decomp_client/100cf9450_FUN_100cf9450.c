
undefined8 FUN_100cf9450(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  QString *this;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  this = (QString *)(param_1 + 0x1c0);
  lVar3 = 0;
  do {
    local_50 = (QArrayData *)QString::fromAscii_helper("network%1",9);
    QString::arg(&local_48,&local_50,lVar3,0,10,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf94e3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cf94e3:
    local_70 = (QArrayData *)QString::fromAscii_helper("name",4);
    pcVar1 = *(code **)*param_2;
    local_68 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
    local_78 = (QArrayData *)QString::fromAscii_helper("Not connected",0xd);
    (*pcVar1)(&local_60,param_2,&local_68,&local_70,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf958a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cf958a:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf95ba;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cf95ba:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf95ea;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cf95ea:
    if (*(int *)(local_60.field0_0x0 + 4) != 0) {
      local_80 = (QArrayData *)QString::fromAscii_helper("Not connected",0xd);
      iVar2 = QString::compare(&local_60,&local_80,1);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf9652;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100cf9652:
      if (iVar2 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("Local only",10);
        iVar2 = QString::compare(&local_60,&local_88,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf96b4;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100cf96b4:
        *(uint *)((long)&this[-6].field0_0x0 + 4) = (iVar2 == 0) + 1;
        QString::fromUtf8_helper((char *)&local_40,0x1e1f168);
        QString::operator=(&local_58,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf9715;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_100cf9715:
        pcVar1 = *(code **)*param_2;
        local_98 = local_48;
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        local_a0 = (QArrayData *)local_58.field0_0x0;
        if (1 < *(int *)local_58.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
        }
        local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
        (*pcVar1)(&local_90,param_2,&local_98,&local_a0,&local_a8);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf97bf;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100cf97bf:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf97f5;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100cf97f5:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf982b;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100cf982b:
        QString::operator=(this,&local_60);
        QString::operator=(this + -2,&local_90);
        *(undefined2 *)&this[-6].field0_0x0 = 0x101;
        *(undefined1 *)((long)&this[-6].field0_0x0 + 2) = 1;
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf9890;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
      }
    }
LAB_100cf9890:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf98c0;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100cf98c0:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf98f0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100cf98f0:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf9920;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cf9920:
    lVar3 = lVar3 + 1;
    this = this + 7;
    if (4 < lVar3) {
      return 0x8000000;
    }
  } while( true );
}

