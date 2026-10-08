
undefined8 FUN_100cf8e60(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  QString *this;
  long lVar3;
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
  
  this = (QString *)(param_1 + 0x168);
  lVar3 = 0;
  do {
    local_50 = (QArrayData *)QString::fromAscii_helper("parallel%1",10);
    QString::arg(&local_48,&local_50,lVar3,0,10,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf8ef3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cf8ef3:
    local_70 = (QArrayData *)QString::fromAscii_helper("portName",8);
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
    local_78 = (QArrayData *)QString::fromAscii_helper("",0);
    (*pcVar1)(&local_60,param_2,&local_68,&local_70,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf8f96;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cf8f96:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf8fc6;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cf8fc6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf8ff6;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cf8ff6:
    if (*(int *)(local_60.field0_0x0 + 4) != 0) {
      QString::operator=(this,&local_60);
      *(undefined2 *)&this[-1].field0_0x0 = 0x101;
      *(undefined1 *)((long)&this[-1].field0_0x0 + 2) = 1;
      QString::fromUtf8_helper((char *)&local_40,0x1ef695d);
      QString::operator=(&local_58,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf9070;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100cf9070:
      pcVar1 = *(code **)(*param_2 + 0x10);
      local_80 = local_48;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      local_88 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      iVar2 = (*pcVar1)(param_2,&local_80,&local_88,10,0);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf90f1;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100cf90f1:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf9121;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100cf9121:
      *(uint *)((long)&this[-1].field0_0x0 + 4) = (uint)(iVar2 == 1) * 2;
    }
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf9164;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100cf9164:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf9194;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100cf9194:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf91c4;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cf91c4:
    lVar3 = lVar3 + 1;
    this = this + 2;
    if (2 < lVar3) {
      return 0x8000000;
    }
  } while( true );
}

