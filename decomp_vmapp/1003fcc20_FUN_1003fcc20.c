
undefined8
FUN_1003fcc20(QString *param_1,long *param_2,undefined8 *param_3,ulong param_4,undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  QTypedArrayData<unsigned_short> *pQVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 uVar14;
  bool bVar15;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)&param_1[2].field0_0x0 == 0) {
    uVar3 = FUN_1007da300("devices.hdd.rh_reqs",0x8000);
    uVar4 = FUN_1007da300("devices.hdd.rh_pref_rl",0x14);
    uVar5 = FUN_1007da300("devices.hdd.rh_merge_threshold",0x100);
    uVar6 = FUN_1007da300("devices.hdd.rh_first_req",0x5dc);
    uVar7 = FUN_100658fb0();
    uVar14 = 0xfa;
    if (uVar7 < 0x801) {
      uVar14 = 100;
    }
    iVar8 = FUN_1007da300("devices.hdd.rh_size",uVar14);
    if ((uint)(iVar8 << 0x14) < param_4) {
      param_4 = (ulong)(uint)(iVar8 << 0x14);
    }
    uVar9 = FUN_1007da300("devices.hdd.rh_bucket",0);
    pQVar10 = operator_new(0x78);
    FUN_100707660(pQVar10);
    param_1[1].field0_0x0 = pQVar10;
    if (param_2 == (long *)0x0) {
      return 0;
    }
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0xa32538);
    QString::append(&local_48);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fcd8f;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1003fcd8f:
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fcdcb;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1003fcdcb:
    pQVar11 = operator_new(0x80,(nothrow_t *)PTR_nothrow_100ba21c8);
    pQVar10 = (QTypedArrayData<unsigned_short> *)0x0;
    if (pQVar11 != (QTypedArrayData<unsigned_short> *)0x0) {
      uVar12 = (**(code **)(*param_2 + 0x2e0))(param_2);
      FUN_1003fbeb0(pQVar11,param_5,param_4 / uVar12,uVar3,uVar5,uVar6);
      *(undefined ***)pQVar11 = &PTR_metaObject_100bbfd20;
      *(undefined4 *)(pQVar11 + 0x78) = uVar9;
      pQVar10 = pQVar11;
    }
    param_1[3].field0_0x0 = pQVar10;
    pQVar10 = operator_new(0x80,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pQVar10 == (QTypedArrayData<unsigned_short> *)0x0) {
      param_1[4].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    }
    else {
      uVar12 = (**(code **)(*param_2 + 0x2e0))(param_2);
      FUN_1003fbeb0(pQVar10,param_5,param_4 / uVar12,uVar3,uVar5,uVar6);
      *(undefined ***)pQVar10 = &PTR_metaObject_100bbfca0;
      *(undefined4 *)(pQVar10 + 0x78) = uVar4;
      param_1[4].field0_0x0 = pQVar10;
      pQVar10 = param_1[3].field0_0x0;
      if (pQVar10 != (QTypedArrayData<unsigned_short> *)0x0) {
        pQVar11 = param_1[1].field0_0x0;
        QString::operator=((QString *)(pQVar10 + 0x10),param_1);
        *(QTypedArrayData<unsigned_short> **)(pQVar10 + 0x18) = pQVar11;
        *(long **)(pQVar10 + 0x20) = param_2;
        pvVar13 = _malloc(*(long *)(pQVar10 + 0x68) << 4);
        *(void **)(pQVar10 + 0x38) = pvVar13;
        if (pvVar13 != (void *)0x0) {
          QTime::start();
          *(undefined8 *)(pQVar10 + 0x40) = *(undefined8 *)(pQVar10 + 0x38);
          pQVar10 = param_1[1].field0_0x0;
          pQVar11 = param_1[4].field0_0x0;
          QString::operator=((QString *)(pQVar11 + 0x10),param_1);
          *(QTypedArrayData<unsigned_short> **)(pQVar11 + 0x18) = pQVar10;
          *(long **)(pQVar11 + 0x20) = param_2;
          pvVar13 = _malloc(*(long *)(pQVar11 + 0x68) << 4);
          *(void **)(pQVar11 + 0x38) = pvVar13;
          if (pvVar13 != (void *)0x0) {
            QTime::start();
            *(undefined8 *)(pQVar11 + 0x40) = *(undefined8 *)(pQVar11 + 0x38);
            pQVar10 = param_1[4].field0_0x0;
            if (pQVar10 != (QTypedArrayData<unsigned_short> *)0x0) {
              (**(code **)(**(long **)(pQVar10 + 0x18) + 0x18))
                        (*(long **)(pQVar10 + 0x18),pQVar10 + 0x10,1,0,0,0);
              cVar2 = (**(code **)(**(long **)(pQVar10 + 0x18) + 0x98))();
              (**(code **)(**(long **)(pQVar10 + 0x18) + 0x28))();
              if (cVar2 != '\0') {
                pQVar10 = param_1[4].field0_0x0;
                QMutex::lock();
                if (pQVar10[0x28] == (QTypedArrayData<unsigned_short>)0x0) {
                  QThread::start(pQVar10,7);
                }
                QMutex::unlock();
              }
            }
            uVar7 = *(uint *)&param_1[2].field0_0x0;
            do {
              LOCK();
              uVar1 = *(uint *)&param_1[2].field0_0x0;
              bVar15 = uVar7 == uVar1;
              if (bVar15) {
                *(uint *)&param_1[2].field0_0x0 = uVar7 | 1;
                uVar1 = uVar7;
              }
              uVar7 = uVar1;
              UNLOCK();
            } while (!bVar15);
            goto LAB_1003fcc62;
          }
        }
      }
    }
    FUN_1008e3970("[RH]","HddUtils",0,"Init failed");
    if (param_1[1].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
      (**(code **)(*(long *)param_1[1].field0_0x0 + 8))();
    }
    param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    uVar14 = 0;
  }
  else {
    FUN_1008e3970("[RH]","HddUtils",0,"rh is already inited");
LAB_1003fcc62:
    uVar14 = 1;
  }
  return uVar14;
}

