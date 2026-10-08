
void FUN_100367d40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  QWidget *pQVar6;
  undefined8 uVar7;
  QTextStream *pQVar8;
  int iVar9;
  int iVar10;
  QArrayData *pQVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QTextStream *local_88;
  QDebug local_80 [8];
  QTextStream *local_78;
  QArrayData *local_70;
  QMatrix local_68 [55];
  undefined1 local_31;
  
  pQVar6 = (QWidget *)FUN_100379860(*(undefined8 *)(param_1 + 0x20));
  if (pQVar6 == (QWidget *)0x0) {
    return;
  }
  lVar1 = *(long *)(pQVar6 + 0x28);
  iVar10 = (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14);
  iVar13 = (*(int *)(lVar1 + 0x20) + 1) - *(int *)(lVar1 + 0x18);
  uVar7 = FUN_1003797e0(*(undefined8 *)(param_1 + 0x20));
  auVar16 = FUN_100325fd0(uVar7);
  iVar9 = (auVar16._8_4_ + 1) - auVar16._0_4_;
  iVar12 = (auVar16._12_4_ + 1) - auVar16._4_4_;
  dVar14 = DAT_100e11050;
  if (0 < iVar9) {
    dVar14 = (double)iVar10 / (double)iVar9;
  }
  dVar15 = DAT_100e11050;
  if (0 < iVar12) {
    dVar15 = (double)iVar13 / (double)iVar12;
  }
  QMatrix::QMatrix(local_68,dVar14,0.0,0.0,dVar15,0.0,0.0);
  WidgetUtils::setWidgetTransformMatrix(pQVar6,local_68);
  puVar2 = PTR_shared_null_1021e1288;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar8 = operator_new(0x50);
  QTextStream::QTextStream(pQVar8,&local_70,2);
  *(undefined **)(pQVar8 + 0x10) = puVar2;
  *(undefined4 *)(pQVar8 + 0x1c) = 0;
  pQVar8[0x20] = (QTextStream)0x1;
  pQVar8[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar8 + 0x28) = 2;
  *(undefined8 *)(pQVar8 + 0x44) = 0;
  *(undefined8 *)(pQVar8 + 0x3c) = 0;
  *(undefined8 *)(pQVar8 + 0x34) = 0;
  *(undefined8 *)(pQVar8 + 0x2c) = 0;
  *(undefined4 *)(pQVar8 + 0x18) = 2;
  local_88 = pQVar8;
  local_78 = pQVar8;
  operator<<(local_80,&local_88,local_68);
  QDebug::~QDebug(local_80);
  QDebug::~QDebug((QDebug *)&local_88);
  if (DAT_10230ffd0 < 3) goto LAB_1003680fa;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_98,uVar7);
  QString::toUtf8();
  pQVar11 = local_90 + *(long *)(local_90 + 0x10);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_100323e20(uVar7);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_100325aa0(uVar7);
  EnumUtils::enumToString(&local_a8,uVar5,1);
  QString::toUtf8();
  pQVar3 = local_a0;
  lVar1 = *(long *)(local_a0 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,
                "Updated transformation matrix for VM [%s] display #%d in mode [%s] with view %p size=%dx%d, guestSize=%dx%d: %s"
                ,pQVar11,uVar4,pQVar3 + lVar1,param_1,iVar10,iVar13,iVar9,iVar12,
                local_b0 + *(long *)(local_b0 + 0x10));
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100368022;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_100368022:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100368058;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100368058:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036808e;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10036808e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003680c4;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1003680c4:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003680fa;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003680fa:
  QDebug::~QDebug((QDebug *)&local_78);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

