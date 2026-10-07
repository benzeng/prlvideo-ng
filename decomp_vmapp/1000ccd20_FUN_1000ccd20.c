
undefined8 FUN_1000ccd20(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  QString QVar11;
  undefined8 uVar12;
  long lVar13;
  QArrayData *local_60;
  QArrayData *local_58;
  long *local_50;
  QString local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_10011a560(&local_40);
  lVar13 = 0;
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar13 = local_40[2];
    LOCK();
    plVar1 = local_40 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_1000c81f0(param_1,0x200000);
  uVar4 = FUN_10012c780(lVar13);
  uVar5 = FUN_10012c900(lVar13);
  FUN_10012c480(&local_48,lVar13);
  QString::operator=((QString *)(param_1 + 0x440),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ccde2;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000ccde2:
  uVar3 = FUN_10012c6c0(lVar13);
  *(undefined1 *)(param_1 + 0x448) = uVar3;
  uVar6 = FUN_10012ca80(lVar13);
  *(undefined4 *)(param_1 + 0x458) = uVar6;
  FUN_10011cf50(&local_50,lVar13);
  QVar11.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (local_50 != (long *)0x0) {
    QVar11.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50[2];
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("vm_cfg",6);
  lVar8 = CVmEvent::getEventParameter(QVar11);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cce6f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000cce6f:
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (lVar8 != 0) {
    pvVar9 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar9 == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    else {
      CVmEventParameter::getParamValue();
      FUN_1000d3360(pvVar9,&local_60);
      *(void **)(param_1 + 0x318) = pvVar9;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ccf34;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
LAB_1000ccf34:
    if (*(long *)(param_1 + 0x318) == 0) {
      uVar12 = 0x80000427;
      FUN_1000c81f0(param_1,0);
      goto LAB_1000cd032;
    }
  }
  if (uVar4 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","uiStepsCount",
                  "SerializationApp.cpp",0xa32,"SetProgressParamsOnDelete");
  }
  if (uVar4 <= uVar5) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","uiStep < uiStepsCount",
                  "SerializationApp.cpp",0xa33,"SetProgressParamsOnDelete");
  }
  uVar7 = 1;
  if (uVar4 != 0) {
    uVar7 = uVar4;
  }
  *(uint *)(param_1 + 0x1fc) = uVar7;
  *(uint *)(param_1 + 0x200) = uVar5;
  FUN_1000c95f0(param_1,(QString *)(param_1 + 0x440));
  uVar10 = FUN_10011d660(lVar13);
  uVar12 = 0;
  if ((uVar10 & 0x1000) == 0) {
    FUN_10008fa70(param_1,6);
  }
  else {
    FUN_10008fa70(param_1,7);
  }
LAB_1000cd032:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar12;
}

