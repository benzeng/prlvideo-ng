
void FUN_10013bd60(undefined8 param_1,long *param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  code *pcVar3;
  int iVar4;
  QString this;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  FUN_10013aa50(param_1,&local_40,0);
  lVar9 = param_2[0x1e];
  iVar4 = *(int *)(lVar9 + 8);
  if (iVar4 != *(int *)(lVar9 + 0xc)) {
    plVar8 = (long *)(lVar9 + 0x10 + (long)iVar4 * 8);
    lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar4 * -8;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
      plVar8 = plVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  FUN_10013c6e0();
  local_60 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_60);
      iVar4 = local_60[2];
      if (iVar4 != local_60[3]) {
        piVar6 = local_40 + (long)local_40[2] * 2 + 4;
        piVar7 = local_60 + (long)iVar4 * 2 + 4;
        lVar9 = (long)local_60[3] * 8 + (long)iVar4 * -8;
        do {
          piVar1 = *(int **)piVar6;
          *(int **)piVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          piVar6 = piVar6 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      pQVar2 = *(QArrayData **)local_58;
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        this.field0_0x0 = operator_new(0xb0);
        CVmHddPartition::CVmHddPartition((CVmHddPartition *)this.field0_0x0);
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        local_70 = pQVar2;
        local_68 = this.field0_0x0;
        CVmHddPartition::setSystemName(this);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10013bf29;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10013bf29:
        pcVar3 = *(code **)(*param_2 + 200);
        local_88 = (QArrayData *)QString::fromAscii_helper("Partition.maxItemId",0x13);
        (*pcVar3)(&local_80,param_2,&local_88);
        iVar4 = QVariant::toInt((bool *)&local_80);
        *(int *)(this.field0_0x0 + 0x68) = iVar4 + 1;
        QVariant::~QVariant(&local_80);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10013bf9d;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10013bf9d:
        FUN_1001297e0(param_2 + 0x1e,&local_68);
        local_48 = 0;
      }
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10013bfdf;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_10013bfdf:
      local_58 = local_58 + 2;
      uVar5 = local_48 ^ 1;
      bVar10 = local_48 != 1;
      local_48 = uVar5;
    } while ((bVar10) && (local_58 != local_50));
  }
  FUN_100039a80(&local_60);
  FUN_100039a80(&local_40);
  return;
}

