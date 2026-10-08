
void FUN_100732340(long param_1)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  QVariant *pQVar5;
  void *pvVar6;
  undefined8 uVar7;
  QMapNodeBase *pQVar8;
  ulong *puVar9;
  float fVar10;
  QVariant local_128;
  QVariant local_118;
  QArrayData *local_108;
  QVariant local_100;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_48 = (QArrayData *)QString::fromAscii_helper("cpu",3);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_48);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,1);
  FUN_1007864c0(&local_58,uVar7);
  QVariant::operator=(pQVar5,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073244e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10073244e:
  local_60 = (QArrayData *)QString::fromAscii_helper("ram",3);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_60);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,4);
  FUN_1007864c0(&local_70,uVar7);
  QVariant::operator=(pQVar5,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100732511;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100732511:
  local_78 = (QArrayData *)QString::fromAscii_helper("ramBytes",8);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_78);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,2);
  FUN_1007864c0(&local_88,uVar7);
  QVariant::operator=(pQVar5,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007325d4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007325d4:
  local_90 = (QArrayData *)QString::fromAscii_helper("diskRateIn",10);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_90);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,8);
  FUN_1007864c0(&local_b0,uVar7);
  fVar10 = (float)QVariant::toFloat((bool *)&local_b0);
  QVariant::QVariant(&local_a0,fVar10 * DAT_100e27648 * DAT_100e27648);
  QVariant::operator=(pQVar5,&local_a0);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007326e2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007326e2:
  local_b8 = (QArrayData *)QString::fromAscii_helper("diskRateOut",0xb);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_b8);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,7);
  FUN_1007864c0(&local_d8,uVar7);
  fVar10 = (float)QVariant::toFloat((bool *)&local_d8);
  QVariant::QVariant(&local_c8,fVar10 * DAT_100e27648 * DAT_100e27648);
  QVariant::operator=(pQVar5,&local_c8);
  QVariant::~QVariant(&local_c8);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007327f0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1007327f0:
  local_e0 = (QArrayData *)QString::fromAscii_helper("netRateIn",9);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_e0);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,6);
  FUN_1007864c0(&local_100,uVar7);
  fVar10 = (float)QVariant::toFloat((bool *)&local_100);
  QVariant::QVariant(&local_f0,fVar10 * DAT_100e27648 * DAT_100e27648);
  QVariant::operator=(pQVar5,&local_f0);
  QVariant::~QVariant(&local_f0);
  QVariant::~QVariant(&local_100);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007328fe;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1007328fe:
  local_108 = (QArrayData *)QString::fromAscii_helper("netRateOut",10);
  pQVar5 = (QVariant *)FUN_10008c590(&local_40,&local_108);
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_100785b00(pvVar6);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar6;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_100785c90(DAT_1023109d8,uVar7,5);
  FUN_1007864c0(&local_128,uVar7);
  fVar10 = (float)QVariant::toFloat((bool *)&local_128);
  QVariant::QVariant(&local_118,fVar10 * DAT_100e27648 * DAT_100e27648);
  QVariant::operator=(pQVar5,&local_118);
  QVariant::~QVariant(&local_118);
  QVariant::~QVariant(&local_128);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100732a0c;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100732a0c:
  plVar1 = (long *)(param_1 + 0x18);
  cVar4 = FUN_10072e690(plVar1,&local_40);
  pQVar3 = local_40;
  if (cVar4 != '\0') goto LAB_100732ae6;
  if ((QMapNodeBase *)*plVar1 != local_40) {
    if (*(int *)local_40 == 0) {
      pQVar8 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(pQVar3 + 0x10) != 0) {
        puVar9 = (ulong *)FUN_10008d330(*(long *)(pQVar3 + 0x10),pQVar8);
        *(ulong **)(pQVar8 + 0x10) = puVar9;
        *puVar9 = *puVar9 & 3 | (ulong)(pQVar8 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      pQVar8 = local_40;
      if (*(int *)local_40 != -1) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pQVar2 = (QMapNodeBase *)*plVar1;
    *plVar1 = (long)pQVar8;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100732ada;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_100732ada:
  FUN_100856530(*(undefined8 *)(param_1 + 0x10),plVar1);
LAB_100732ae6:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return;
}

