
undefined8 FUN_100ce4100(long param_1,QString *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  QArrayData *pQVar7;
  long *plVar8;
  undefined8 uVar9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QTypedArrayData<unsigned_short> *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  undefined *local_88;
  undefined *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QFileInfo local_58 [8];
  QString local_50;
  QFileInfo local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_48,param_2);
  QFileInfo::absoluteFilePath();
  QString::operator=((QString *)(param_1 + 0x10),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce4173;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100ce4173:
  QFileInfo::~QFileInfo(local_48);
  QFileInfo::QFileInfo(local_58,param_2);
  QFileInfo::path();
  QString::operator=((QString *)(param_1 + 0x18),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce41d5;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100ce41d5:
  QFileInfo::~QFileInfo(local_58);
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  local_60 = (QArrayData *)QString::fromAscii_helper(".vpc7",5);
  cVar4 = QString::endsWith(param_2,&local_60,0);
  bVar5 = 1;
  if (cVar4 == '\0') {
    local_68 = (QArrayData *)QString::fromAscii_helper(".vpc6",5);
    bVar5 = QString::endsWith(param_2,&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce4267;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100ce4267:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce4297;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100ce4297:
  local_70 = (QArrayData *)QString::fromAscii_helper(".vmwarevm",9);
  bVar6 = QString::endsWith(param_2,&local_70,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce42ec;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100ce42ec:
  *(byte *)(param_1 + 0x20) = bVar5 | bVar6;
  if (bVar5 != 0) {
    if (param_3 != 2) {
      return 0x8117010;
    }
    local_c0 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)local_c0 + 1U) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + 1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
    }
    FUN_100d02720(param_1,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce436e;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100ce436e:
    local_c8 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    FUN_100d02d20(param_1,&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        UNLOCK();
        if (*(int *)local_c8 != 0) goto LAB_100ce48e6;
        local_31 = 0;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
    goto LAB_100ce48e6;
  }
  local_78.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  puVar3 = PTR_shared_null_1021e15e8;
  if (bVar6 == 0) {
LAB_100ce4503:
    bVar2 = true;
    if (param_3 == 2) {
      plVar8 = operator_new(0x20);
      local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100d09590(plVar8,&local_a8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce4685;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
    else if (param_3 == 4) {
      plVar8 = operator_new(0x30);
      local_b0 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100d16490(plVar8,&local_b0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce4584;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100ce4584:
      FUN_100d208a0(plVar8,param_1 + 0x2e0);
    }
    else {
      uVar9 = 0x8117011;
      if (param_3 != 3) goto LAB_100ce48b1;
      plVar8 = operator_new(0x20);
      local_a0 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100d07350(plVar8,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce4685;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
LAB_100ce4685:
    pcVar1 = *(code **)(*plVar8 + 0x40);
    local_b8 = local_78.field0_0x0;
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    cVar4 = (*pcVar1)(plVar8,&local_b8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce46ec;
      }
      QArrayData::deallocate((QArrayData *)local_b8,2,8);
    }
LAB_100ce46ec:
    if (cVar4 == '\0') {
      uVar9 = 0x8117003;
      (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    else {
      if (param_3 == 2) {
        FUN_100cf5da0(param_1,plVar8);
        FUN_100cf7830(param_1,plVar8);
        FUN_100cf7980(param_1,plVar8);
        FUN_100cf8870(param_1,plVar8);
        FUN_100cf8e60(param_1,plVar8);
        FUN_100cf9450(param_1,plVar8);
        FUN_100cf9ce0(param_1,plVar8);
        FUN_100cfa540(param_1,plVar8);
        FUN_100cfa6a0(param_1,plVar8);
      }
      else if (param_3 == 4) {
        FUN_100cfbc60(param_1,plVar8);
        FUN_100cfc200(param_1,plVar8);
        FUN_100cfd830(param_1,plVar8);
        FUN_100cfdfb0(param_1,plVar8);
        FUN_100cfe730(param_1,plVar8);
        FUN_100cfeb10(param_1,plVar8);
        FUN_100cff510(param_1,plVar8);
        FUN_100cff8f0(param_1,plVar8);
        FUN_100d00810(param_1,plVar8);
        FUN_100d01440(param_1,plVar8);
      }
      else if (param_3 == 3) {
        FUN_100ce5580(param_1,plVar8);
        FUN_100ce5e10(param_1,plVar8);
        FUN_100ce83a0(param_1,plVar8);
        FUN_100ce84f0(param_1,plVar8);
        FUN_100ce9aa0(param_1,plVar8);
        FUN_100ceb1c0(param_1,plVar8);
        FUN_100cec470(param_1,plVar8);
        FUN_100cecba0(param_1,plVar8);
        FUN_100cedc30(param_1,plVar8);
        FUN_100cedef0(param_1,plVar8);
        FUN_100cef850(param_1,plVar8);
        FUN_100cf0af0(param_1,plVar8);
        FUN_100cf3830(param_1,plVar8);
      }
      FUN_100d024e0(param_1,plVar8);
      (**(code **)(*plVar8 + 0x60))(plVar8);
      uVar9 = 0x8117003;
      bVar2 = false;
    }
  }
  else {
    local_80 = PTR_shared_null_1021e15e8;
    pQVar7 = (QArrayData *)QString::fromAscii_helper("*.vmx",5);
    local_88 = puVar3;
    local_90 = pQVar7;
    FUN_1000341d0(&local_88,&local_90);
    FUN_100ce4ce0(param_2,&local_88,&local_80);
    FUN_100039a80(&local_88);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ce447d;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_100ce447d:
    bVar2 = true;
    if (*(int *)(local_80 + 0xc) != *(int *)(local_80 + 8)) {
      FUN_100054f90(&local_98,&local_80);
      QString::operator=(&local_78,&local_98);
      bVar2 = false;
      if (*(int *)local_98.field0_0x0 != -1) {
        bVar2 = false;
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce44e6;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
    }
LAB_100ce44e6:
    FUN_100039a80(&local_80);
    if (!bVar2) goto LAB_100ce4503;
    uVar9 = 0x8117003;
    bVar2 = true;
  }
LAB_100ce48b1:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) goto LAB_100ce48e1;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100ce48e1:
  if (bVar2) {
    return uVar9;
  }
LAB_100ce48e6:
  *(int *)(param_1 + 8) = param_3;
  return 0x8000000;
}

