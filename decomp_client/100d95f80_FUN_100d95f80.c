
void FUN_100d95f80(QString *param_1,QString *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  size_t sVar5;
  undefined1 auVar6 [16];
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar6._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar6._0_8_ = PTR_shared_null_1021e1288;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar6;
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  pQVar4 = operator_new(0x18);
  puVar2 = PTR_s_prl_disp_service_10230fcb8;
  iVar3 = -1;
  if (PTR_s_prl_disp_service_10230fcb8 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_prl_disp_service_10230fcb8);
    iVar3 = (int)sVar5;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar3);
  FUN_100dae2c0(pQVar4,&local_40);
  param_1[3].field0_0x0 = pQVar4;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d96044;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d96044:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  iVar3 = QString::indexOf(param_2,&local_58,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d960a6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d960a6:
  if (iVar3 == -1) {
    local_60 = (QArrayData *)QString::fromAscii_helper("\\",1);
    iVar3 = QString::indexOf(param_2,&local_60,0,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d96105;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d96105:
    if (iVar3 != -1) goto LAB_100d9610e;
    local_78 = (QArrayData *)QString::fromAscii_helper("@",1);
    iVar3 = QString::indexOf(param_2,&local_78,0,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d96212;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d96212:
    if (iVar3 != -1) {
      QString::left((int)&local_80);
      QString::operator=(&local_48,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d96266;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100d96266:
      QString::mid((int)&local_88,(int)param_2);
      QString::operator=(&local_50,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d961aa;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
      goto LAB_100d961aa;
    }
LAB_100d962c5:
    QString::operator=(&local_48,param_2);
  }
  else {
LAB_100d9610e:
    QString::left((int)&local_68);
    QString::operator=(&local_50,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d96159;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100d96159:
    QString::mid((int)&local_70,(int)param_2);
    QString::operator=(&local_48,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d961aa;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100d961aa:
    if (iVar3 == -1) goto LAB_100d962c5;
  }
  QString::operator=(param_1,&local_48);
  QString::operator=(param_1 + 1,(QString *)&DAT_102311988);
  QString::operator=(param_1 + 2,(QString *)&DAT_102311988);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d96333;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d96333:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

