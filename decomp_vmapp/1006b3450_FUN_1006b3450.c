
undefined8 FUN_1006b3450(long *param_1,undefined1 param_2,undefined1 param_3)

{
  QString *pQVar1;
  long lVar2;
  undefined *puVar3;
  QString QVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 ***pppuVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  QTypedArrayData<unsigned_short> *pQStack_c0;
  QString local_b8;
  QString QStack_b0;
  QString local_a8;
  uint local_a0;
  undefined1 local_9c;
  undefined *local_98;
  short local_90;
  undefined4 local_8e;
  undefined2 local_8a;
  byte local_88;
  undefined1 local_87;
  undefined8 **local_80;
  undefined8 **local_78;
  undefined8 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1006b3dd0();
  local_70 = 0;
  local_80 = &local_80;
  local_78 = &local_80;
  cVar5 = FUN_1006c1580(&local_80,param_2,param_3);
  puVar3 = PTR_shared_null_100ba20d0;
  if (cVar5 == '\0') {
    piVar7 = ___error();
    FUN_1006c2990(*piVar7);
    uVar8 = FUN_1006c2980();
    uVar10 = 0x80004000;
    FUN_1008e3970("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %ld",uVar8);
  }
  else {
    uVar10 = 0;
    if ((undefined8 ***)local_78 != &local_80) {
      auVar13._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar13._0_8_ = PTR_shared_null_100ba20d0;
      auVar13._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      pppuVar11 = (undefined8 ***)local_78;
      do {
        pQVar1 = (QString *)(pppuVar11 + 2);
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
          plVar9 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
          do {
            cVar5 = operator==((QString *)(*plVar9 + 8),pQVar1);
            if (cVar5 != '\0') {
              if (DAT_1011bcd48 == '\0') {
                DAT_1011bcd48 = '\x01';
                QString::toUtf8();
                FUN_1008e3970("","prl_net",0,
                              "[PrlNet]: adapter %s is already present in the EthAdaptersList;",
                              local_68 + *(long *)(local_68 + 0x10));
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_31 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006b3853;
                  }
                  QArrayData::deallocate(local_68,1,8);
                }
LAB_1006b3853:
                lVar2 = *plVar9;
                FUN_1008e3970("","prl_net",0,
                              "Existing: %02x:%02x:%02x:%02x:%02x:%02x; New: %02x:%02x:%02x:%02x:%02x:%02x"
                              ,*(undefined1 *)(lVar2 + 0x2a),*(undefined1 *)(lVar2 + 0x2b),
                              *(undefined1 *)(lVar2 + 0x2c),*(undefined1 *)(lVar2 + 0x2d),
                              *(undefined1 *)(lVar2 + 0x2e),*(undefined1 *)(lVar2 + 0x2f),
                              *(undefined1 *)(pppuVar11 + 4),*(undefined1 *)((long)pppuVar11 + 0x21)
                              ,*(undefined1 *)((long)pppuVar11 + 0x22),
                              *(undefined1 *)((long)pppuVar11 + 0x23),
                              *(undefined1 *)((long)pppuVar11 + 0x24),
                              *(undefined1 *)((long)pppuVar11 + 0x25));
              }
              goto LAB_1006b37bd;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != (long *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 0xc) * 8));
        }
        pQStack_c0 = auVar13._8_8_;
        local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
        QStack_b0.field0_0x0 = pQStack_c0;
        local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        local_98 = PTR_shared_null_100ba20d0;
        local_a0 = 0xffffffff;
        local_9c = 0;
        local_90 = 0xffff;
        local_88 = 0;
        local_87 = 0;
        QString::operator=(&local_b8,pQVar1);
        QString::operator=(&QStack_b0,pQVar1);
        QString::operator=(&local_a8,pQVar1);
        local_a0 = *(uint *)(pppuVar11 + 5);
        bVar12 = true;
        if ((local_a0 & 0x30000000) == 0) {
          local_40 = (QArrayData *)QString::fromAscii_helper("vme",3);
          iVar6 = QString::indexOf(&QStack_b0,&local_40,0,1);
          bVar12 = iVar6 == 0;
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b3600;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
LAB_1006b3600:
        local_9c = bVar12;
        local_88 = *(byte *)(pppuVar11 + 3) & 1;
        local_90 = *(short *)((long)pppuVar11 + 0x26);
        local_8a = *(undefined2 *)((long)pppuVar11 + 0x24);
        local_8e = *(undefined4 *)(pppuVar11 + 4);
        FUN_1006cbde0(pQVar1,&local_b8,1);
        FUN_1006cbde0(pQVar1,&local_a8,0);
        QVar4.field0_0x0 = local_a8.field0_0x0;
        if (local_90 != -1) {
          local_50 = pQVar1->field0_0x0;
          if (1 < *(int *)local_50 + 1U) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + 1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
          }
          local_58 = (QArrayData *)local_b8.field0_0x0;
          if (1 < *(int *)local_b8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
          }
          local_60 = (QArrayData *)local_a8.field0_0x0;
          if (1 < *(int *)local_a8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
          }
          FUN_1006b3200(&local_48,&local_50,&local_58,&local_60);
          QString::operator=(&local_b8,&local_48);
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b3715;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
LAB_1006b3715:
          if (*(int *)QVar4.field0_0x0 != -1) {
            if (*(int *)QVar4.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar4.field0_0x0 = *(int *)QVar4.field0_0x0 + -1;
              local_31 = *(int *)QVar4.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b3742;
            }
            QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
          }
LAB_1006b3742:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b3772;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1006b3772:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b37a2;
            }
            QArrayData::deallocate((QArrayData *)local_50,2,8);
          }
        }
LAB_1006b37a2:
        FUN_10027a810(param_1,&local_b8);
        FUN_10027a4b0(&local_b8);
LAB_1006b37bd:
        pppuVar11 = (undefined8 ***)pppuVar11[1];
        uVar10 = 0;
      } while (pppuVar11 != &local_80);
    }
  }
  FUN_1006c1f60(&local_80);
  return uVar10;
}

