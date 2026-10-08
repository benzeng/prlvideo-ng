
char * FUN_1001c7700(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,param_2);
  FUN_1001c74e0(&local_30);
  if (*(int *)(local_30.field0_0x0 + 4) != 0) {
    QString::fromUtf8_helper((char *)&local_38,0x1e31adc);
    QString::append(&local_38);
    QString::operator=(&local_30,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001c779d;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1001c779d:
  uVar2 = FUN_100d7e9e0();
  EnumUtils::clientAppNameFromAppMode(&local_50,uVar2);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_19 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e31adc);
  QString::append(&local_48);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7818;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001c7818:
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s_for_Mac_102270a38);
  }
  else {
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
  }
  local_40.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_19 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c78c2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001c78c2:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c78f2;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001c78f2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7922;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001c7922:
  local_60 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME_FULL_EDITION",0x1b);
  local_68.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_19 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QString::replace(param_1,&local_60,&local_68,1);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c79a2;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1001c79a2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c79d2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001c79d2:
  local_70 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME_FULL",0x13);
  QString::replace(param_1,&local_70,&local_40,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7a2c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001c7a2c:
  local_78 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
  uVar2 = FUN_100d7e9e0();
  EnumUtils::clientAppNameFromAppMode(&local_80,uVar2);
  QString::replace(param_1,&local_78,&local_80,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7a96;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001c7a96:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7ac6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001c7ac6:
  local_88 = (QArrayData *)QString::fromAscii_helper("@@APP_NAME",10);
  uVar2 = FUN_100d7e9e0();
  EnumUtils::clientAppNameFromAppMode(&local_90,uVar2);
  QString::replace(param_1,&local_88,&local_90,1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7b3c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001c7b3c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7b6c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1001c7b6c:
  local_98 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_VERSION",0x11);
  FUN_1001c7340(&local_a0);
  QString::replace(param_1,&local_98,&local_a0,1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7be1;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1001c7be1:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7c17;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001c7c17:
  local_a8 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_EDITION",0x11);
  QString::replace(param_1,&local_a8,&local_30,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7c7d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1001c7c7d:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c7cad;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001c7cad:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

