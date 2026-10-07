
undefined1 FUN_1000b1710(long param_1,QString *param_2,undefined8 *param_3,undefined8 *param_4)

{
  QArrayData *pQVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  QString QVar6;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QFile local_48 [23];
  undefined1 local_31;
  
  QFile::QFile(local_48,param_2);
  iVar5 = (**(code **)(**(long **)(param_1 + 0x110) + 0x70))(*(long **)(param_1 + 0x110),local_48,1)
  ;
  if (iVar5 != 0) {
    uVar4 = 0;
    goto LAB_1000b1902;
  }
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  iVar5 = *(int *)(local_50 + 4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b17b2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000b17b2:
  if (iVar5 == 0) {
    local_58 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    CVmIdentification::setHomePath(QVar6);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b180a;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1000b180a:
  pQVar1 = (QArrayData *)*param_3;
  if (*(int *)(pQVar1 + 4) != 0) {
    plVar2 = *(long **)(param_1 + 0x118);
    pcVar3 = *(code **)(*plVar2 + 0x58);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_60 = pQVar1;
    iVar5 = (*pcVar3)(plVar2,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b1874;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1000b1874:
    if (iVar5 != 0) {
      uVar4 = 0;
      goto LAB_1000b1902;
    }
  }
  pQVar1 = (QArrayData *)*param_4;
  if (*(int *)(pQVar1 + 4) != 0) {
    plVar2 = *(long **)(param_1 + 0x118);
    pcVar3 = *(code **)(*plVar2 + 0x58);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_68 = pQVar1;
    iVar5 = (*pcVar3)(plVar2,&local_68,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b18ec;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000b18ec:
    if (iVar5 != 0) {
      uVar4 = 0;
      goto LAB_1000b1902;
    }
  }
  uVar4 = FUN_1000b0980(param_1,param_1 + 0x110);
LAB_1000b1902:
  QFile::~QFile(local_48);
  return uVar4;
}

