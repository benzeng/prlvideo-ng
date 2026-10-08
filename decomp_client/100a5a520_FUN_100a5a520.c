
undefined1 FUN_100a5a520(long param_1,QString *param_2)

{
  QString *this;
  int iVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  QString *pQVar6;
  undefined1 uVar7;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    uVar7 = 0;
    goto LAB_100a5a8d6;
  }
  this = (QString *)(param_1 + 0x10);
  cVar4 = (**(code **)(param_1 + 0x18))(this);
  if (cVar4 == '\0') {
    uVar7 = 0;
    goto LAB_100a5a8d6;
  }
  QString::toUtf8();
  iVar1 = *(int *)(local_40 + 4);
  lVar2 = *(long *)(param_1 + 8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a591;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100a5a591:
  if (lVar2 < iVar1) {
    uVar7 = 0;
    goto LAB_100a5a8d6;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("&",1);
  local_50 = (QArrayData *)QString::fromAscii_helper("&amp",4);
  uVar5 = QString::replace(this,&local_48,&local_50,1);
  local_58 = (QArrayData *)QString::fromAscii_helper("<",1);
  local_60 = (QArrayData *)QString::fromAscii_helper("&lt",3);
  uVar5 = QString::replace(uVar5,&local_58,&local_60,1);
  local_68 = (QArrayData *)QString::fromAscii_helper(">",1);
  local_70 = (QArrayData *)QString::fromAscii_helper("&gt",3);
  pQVar6 = (QString *)QString::replace(uVar5,&local_68,&local_70,1);
  QString::operator=(this,pQVar6);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a6a9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a5a6a9:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a6d9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a5a6d9:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a709;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a5a709:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a739;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a5a739:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a769;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a5a769:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a799;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a5a799:
  FUN_100a5a160(&local_88,param_1);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  FUN_100a5a340(&local_90,param_1);
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_78);
  QString::operator=(param_2,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a83e;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a5a83e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a874;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100a5a874:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a8a4;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100a5a8a4:
  uVar7 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a5a8d6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100a5a8d6:
  puVar3 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar7;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return uVar7;
}

