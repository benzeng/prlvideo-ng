
undefined8 FUN_100cfdfb0(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  QString local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar3 = 0;
  do {
    local_50 = (QArrayData *)QString::fromAscii_helper("SATA%1",6);
    QString::arg(&local_48,&local_50,lVar3,0,10,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe04f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cfe04f:
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::fromUtf8_helper((char *)&local_40,0x1e28e7e);
    QString::operator=(&local_58,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe0aa;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100cfe0aa:
    pcVar1 = *(code **)(*param_2 + 0x10);
    local_60 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    local_68 = (QArrayData *)local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    iVar2 = (*pcVar1)(param_2,&local_60,&local_68,10,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe12c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cfe12c:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe15c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cfe15c:
    if (iVar2 == 1) {
      FUN_100d14eb0(&local_90);
      local_90 = 1;
      local_8f = 1;
      local_8e = 1;
      local_78 = 3;
      local_74 = (undefined4)lVar3;
      local_70 = 0;
      local_98.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fileName",8);
      QString::operator=(&local_58,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe1f7;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_100cfe1f7:
      pcVar1 = *(code **)*param_2;
      local_a8 = local_48;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      local_b0 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      local_b8 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_a0,param_2,&local_a8,&local_b0,&local_b8);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe2a5;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cfe2a5:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe2de;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cfe2de:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe314;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cfe314:
      if (*(int *)(local_a0.field0_0x0 + 4) != 0) {
        QString::operator=(&local_80,&local_a0);
        FUN_100d05600(param_1 + 0x2e8,&local_90);
      }
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe37a;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100cfe37a:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfe3b0;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
    }
LAB_100cfe3b0:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe3e0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100cfe3e0:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfe410;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cfe410:
    lVar3 = lVar3 + 1;
    if (0x1d < lVar3) {
      return 0x8000000;
    }
  } while( true );
}

