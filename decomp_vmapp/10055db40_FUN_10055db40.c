
undefined1 FUN_10055db40(QString *param_1,undefined4 param_2,QString *param_3)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  int local_84;
  undefined1 local_80 [8];
  int local_78 [16];
  long local_38 [2];
  undefined1 local_21;
  
  QFile::QFile((QFile *)local_38,param_1);
  local_78[0] = -1;
  cVar1 = QFile::open((QFile *)local_38,1);
  if (cVar1 != '\0') {
    FUN_1000d6220(local_38,local_78);
    if ((local_78[0] == 0x65526153) &&
       (local_84 = FUN_1000d6260(local_38,param_2,local_80), 0 < local_84)) {
      QByteArray::QByteArray((QByteArray *)&local_90,local_84,'\0');
      if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
      }
      FUN_1000d63c0(local_38,param_2,local_90 + *(long *)(local_90 + 0x10),&local_84);
      if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
      }
      pQVar3 = local_90 + *(long *)(local_90 + 0x10);
      if (pQVar3 != (QArrayData *)0x0) {
        _strlen((char *)pQVar3);
      }
      QString::fromUtf8_helper((char *)&local_a0,(int)pQVar3);
      QString::normalized(&local_98,&local_a0,1,0);
      QString::operator=(param_3,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_21 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10055dcc3;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_10055dcc3:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_21 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10055dcf9;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10055dcf9:
      (**(code **)(local_38[0] + 0x70))(local_38);
      uVar2 = 1;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_21 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10055dd51;
        }
        QArrayData::deallocate(local_90,1,8);
      }
      goto LAB_10055dd51;
    }
    (**(code **)(local_38[0] + 0x70))(local_38);
  }
  uVar2 = 0;
LAB_10055dd51:
  QFile::~QFile((QFile *)local_38);
  return uVar2;
}

