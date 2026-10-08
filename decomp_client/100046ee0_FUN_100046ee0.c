
void FUN_100046ee0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  long local_38 [2];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_19 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1db6bf4);
  QString::append(&local_40);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100046f64;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100046f64:
  QFile::QFile((QFile *)local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100046fa1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100046fa1:
  cVar2 = QFile::open(local_38,3);
  if (cVar2 == '\0') goto LAB_1000472d3;
  FUN_1001c7700(&local_78,"<center>%1@@PRODUCT_EDITION<br>%2.%3.%4 (%5)<br><br>%6</center>");
  puVar1 = PTR_s_Parallels_Desktop_for_Mac_10226f638;
  iVar4 = -1;
  if (PTR_s_Parallels_Desktop_for_Mac_10226f638 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Parallels_Desktop_for_Mac_10226f638);
    iVar4 = (int)sVar3;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  QString::arg(&local_68,&local_70,0xc,0,10,0x20);
  QString::arg(&local_60,&local_68,2,0,10,0x20);
  QString::arg(&local_58,&local_60,1,0,10,0x20);
  QString::arg(&local_50,&local_58,0xa28f,0,10,0x20);
  FUN_10003ffa0(&local_88,param_2 + 8);
  QString::arg(&local_48,&local_50,&local_88,0,0x20);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000470e4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000470e4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047114;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100047114:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047144;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100047144:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047174;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100047174:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000471a4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000471a4:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000471d4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000471d4:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047204;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100047204:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047234;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100047234:
  QString::toUtf8();
  QIODevice::write((char *)local_38,(longlong)(local_90 + *(long *)(local_90 + 0x10)));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100047295;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100047295:
  (**(code **)(local_38[0] + 0x70))(local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000472d3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000472d3:
  QFile::~QFile((QFile *)local_38);
  return;
}

