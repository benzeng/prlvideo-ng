
void FUN_100038540(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QVariant *pQVar5;
  long lVar6;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cpu",3);
  QVariant::QVariant(&local_60,-1);
  if (*(long *)(*param_2 + 0x10) == 0) {
LAB_1000385e7:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_50), cVar2 != '\0') {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar6;
          if (lVar6 == 0) goto LAB_1000385e7;
          goto LAB_1000385d6;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1000385d6:
    cVar2 = operator<(&local_50,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_1000385e7;
  }
  pQVar5 = (QVariant *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    pQVar5 = &local_60;
  }
  QVariant::QVariant(&local_48,pQVar5);
  iVar3 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100038653;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100038653:
  if (-1 < iVar3) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              ((float)iVar3,*(undefined8 *)(param_1 + 0x10),PTR_s_setCpuUsageValue__102269928);
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ram",3);
  QVariant::QVariant(&local_88,-1);
  if (*(long *)(*param_2 + 0x10) == 0) {
LAB_1000386f7:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_78), cVar2 != '\0') {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar6;
          if (lVar6 == 0) goto LAB_1000386f7;
          goto LAB_1000386e6;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1000386e6:
    cVar2 = operator<(&local_78,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_1000386f7;
  }
  pQVar5 = (QVariant *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    pQVar5 = &local_88;
  }
  QVariant::QVariant(&local_70,pQVar5);
  iVar3 = QVariant::toInt((bool *)&local_70);
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003875c;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10003875c:
  if (-1 < iVar3) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              ((float)iVar3,*(undefined8 *)(param_1 + 0x10),PTR_s_setRamUsageValue__102269930);
  }
  return;
}

