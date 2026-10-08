
/* WARNING: Type propagation algorithm not settling */

void FUN_10078efd0(long param_1,long *param_2)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  QVariant *this;
  undefined8 uVar6;
  QVariant local_98;
  QString local_88;
  Data_conflict local_80;
  undefined4 local_78;
  Data_conflict local_70;
  uint local_68;
  QString local_60;
  QMapNodeBase *local_58;
  long local_50;
  long local_48 [2];
  undefined1 local_31;
  
  local_48[0] = *param_2;
  if (local_48[0] != 0) {
    _PrlHandle_AddRef();
  }
  cVar3 = SdkUtils::checkHandleType(local_48,0x10000020);
  if (local_48[0] != 0) {
    _PrlHandle_Free();
  }
  if (cVar3 == '\0') {
    return;
  }
  local_50 = 0;
  iVar4 = _PrlStat_GetVmDataStat(*param_2,&local_50);
  if (iVar4 < 0) goto LAB_10078f240;
  local_58 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68 = 0x80000000;
  local_70.field7 = 0;
  iVar4 = 1;
  do {
    lVar2 = local_50;
    if (local_50 != 0) {
      _PrlHandle_AddRef(local_50);
    }
    local_48[1] = 0;
    iVar5 = _PrlStatVmData_GetSegmentCapacity(lVar2,iVar4,local_48 + 1);
    if (iVar5 < 0) {
      local_78 = 0x80000000;
      local_80.field7 = 0;
    }
    else {
      QVariant::QVariant((QVariant *)&local_80,5,local_48 + 1,0);
    }
    QVariant::operator=((QVariant *)&local_70,(QVariant *)&local_80);
    QVariant::~QVariant((QVariant *)&local_80);
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if ((local_68 & 0x3fffffff) == 0) {
      FUN_10078fcd0(&local_58);
      break;
    }
    FUN_1007868d0(&local_88,iVar4);
    QString::operator=(&local_60,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078f13f;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_10078f13f:
    this = (QVariant *)FUN_10008c590(&local_58,&local_60);
    QVariant::operator=(this,(QVariant *)&local_70);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (0 < *(int *)(local_58 + 4)) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    QVariant::QVariant(&local_98,(QMap *)&local_58);
    FUN_1007864e0(uVar6,&local_98);
    QVariant::~QVariant(&local_98);
  }
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078f1f8;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10078f1f8:
  pQVar1 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078f240;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10078f240:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  return;
}

