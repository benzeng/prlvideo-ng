
void FUN_1009e4d50(CRepUserDefinedData *param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  QString this;
  CRepScreenShots *this_00;
  CRepScreenShots *this_01;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  plVar3 = (long *)___dynamic_cast(param_1,PTR_typeinfo_1021e16a8,&PTR_vtable_102236c30,0);
  this.field0_0x0 = operator_new(0xa8);
  CRepScreenShot::CRepScreenShot((CRepScreenShot *)this.field0_0x0);
  local_48 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  CRepScreenShot::setName(this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e4df4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009e4df4:
  if (plVar3 == (long *)0x0) {
    QFile::QFile((QFile *)local_58,param_2);
    cVar2 = QFile::open(local_58,1);
    if (cVar2 != '\0') {
      QIODevice::readAll();
      QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e4eb8;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_1009e4eb8:
    QByteArray::toBase64();
    QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e4f02;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1009e4f02:
    (**(code **)(local_58[0] + 0x70))(local_58);
    if (*(int *)(local_40 + 4) != 0) {
      lVar4 = 0;
      pQVar5 = local_40 + *(long *)(local_40 + 0x10);
      if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_40 + 4) != 0)) {
        lVar4 = 0;
        do {
          if (pQVar5[lVar4] == (QArrayData)0x0) break;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(local_40 + 4));
      }
      pQVar5 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
      CRepScreenShot::setData(this);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e4f82;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
    }
LAB_1009e4f82:
    QFile::~QFile((QFile *)local_58);
    goto LAB_1009e4f8b;
  }
  CRepScreenShot::setData(this);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e4e39;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1009e4e39:
  (**(code **)(*plVar3 + 0x270))(plVar3,this.field0_0x0);
LAB_1009e4f8b:
  this_00 = (CRepScreenShots *)CProblemReport::getUserDefinedData();
  if (this_00 == (CRepScreenShots *)0x0) {
    this_00 = operator_new(0xa8);
    CRepUserDefinedData::CRepUserDefinedData((CRepUserDefinedData *)this_00);
    CProblemReport::setUserDefinedData(param_1);
  }
  this_01 = (CRepScreenShots *)CRepUserDefinedData::getScreenShots();
  if (this_01 == (CRepScreenShots *)0x0) {
    this_01 = operator_new(0xa0);
    CRepScreenShots::CRepScreenShots(this_01);
    CRepUserDefinedData::setScreenShots(this_00);
  }
  (**(code **)(*(long *)this_01 + 0xa0))(this_01,this.field0_0x0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

