
undefined8 FUN_1006a9fe0(long param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  undefined8 uVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  QArrayData *local_630;
  QArrayData *local_628;
  QString local_620;
  QArrayData *local_618;
  QString local_610;
  QArrayData *local_608;
  QArrayData *local_600;
  undefined1 local_5f8 [28];
  char *local_5dc;
  QArrayData *local_5c8;
  undefined1 local_5c0 [518];
  short local_3ba;
  undefined1 local_3b8 [2];
  undefined1 local_3b6 [510];
  QString local_1b8;
  undefined1 local_1a9;
  undefined1 local_1a8 [80];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(undefined **)(param_1 + 0x70) != PTR_shared_null_100ba20d0) {
    local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x70),&local_1b8);
    if (*(int *)local_1b8.field0_0x0 != -1) {
      if (*(int *)local_1b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
        local_1a9 = *(int *)local_1b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_1a9) goto LAB_1006aa07e;
      }
      QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
    }
  }
LAB_1006aa07e:
  lVar10 = 1;
  do {
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    sVar4 = _FSGetVolumeInfo(0,lVar10,&local_3ba,0x4000,&local_158,local_5c0,local_1a8);
    iVar8 = 4;
    if (sVar4 == -0x23) {
      sVar4 = -0x23;
    }
    else if (sVar4 == 0) {
      sVar4 = FUN_100786120((int)local_3ba,local_5f8,0x2c);
      pcVar2 = local_5dc;
      if (sVar4 == 0) {
        if (2 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("","dimg",3,"FSGetCatalogInfo returned name %s. Need %s [%lu]",pcVar2,
                        local_608 + *(long *)(local_608 + 0x10),lVar10);
          if (*(int *)local_608 != -1) {
            if (*(int *)local_608 != 0) {
              LOCK();
              *(int *)local_608 = *(int *)local_608 + -1;
              local_1a9 = *(int *)local_608 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_1006aa362;
            }
            QArrayData::deallocate(local_608,1,8);
          }
        }
LAB_1006aa362:
        pcVar2 = local_5dc;
        iVar8 = -1;
        if (local_5dc != (char *)0x0) {
          sVar6 = _strlen(local_5dc);
          iVar8 = (int)sVar6;
        }
        local_610.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar2,iVar8);
        cVar3 = operator==((QString *)(param_1 + 0x78),&local_610);
        if (*(int *)local_610.field0_0x0 != -1) {
          if (*(int *)local_610.field0_0x0 != 0) {
            LOCK();
            *(int *)local_610.field0_0x0 = *(int *)local_610.field0_0x0 + -1;
            local_1a9 = *(int *)local_610.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1a9) goto LAB_1006aa3df;
          }
          QArrayData::deallocate((QArrayData *)local_610.field0_0x0,2,8);
        }
LAB_1006aa3df:
        iVar8 = 4;
        if (cVar3 != '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_48 = 0;
          sVar4 = _FSGetCatalogInfo(local_1a8,0,&local_d8,local_3b8,0,0);
          if (sVar4 != 0) {
            QString::toUtf8();
            FUN_1008e3970("","dimg",0,"FSGetCatalogInfo failed with error %d [%lu:%s]",(int)sVar4,
                          lVar10,local_618 + *(long *)(local_618 + 0x10));
            if (*(int *)local_618 != -1) {
              if (*(int *)local_618 != 0) {
                LOCK();
                *(int *)local_618 = *(int *)local_618 + -1;
                local_1a9 = *(int *)local_618 != 0;
                UNLOCK();
                if ((bool)local_1a9) goto LAB_1006aa4f0;
              }
              QArrayData::deallocate(local_618,1,8);
            }
          }
LAB_1006aa4f0:
          pQVar7 = (QArrayData *)QString::fromAscii_helper("/Volumes/",9);
          QString::fromUtf16((ushort *)&local_630,(int)local_3b6);
          QString::normalized(&local_628,&local_630,1,0);
          if (1 < *(int *)pQVar7 + 1U) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + 1;
            local_1a9 = *(int *)pQVar7 != 0;
            UNLOCK();
          }
          local_620.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
          QString::append(&local_620);
          QString::operator=((QString *)(param_1 + 0x70),&local_620);
          if (*(int *)local_620.field0_0x0 != -1) {
            if (*(int *)local_620.field0_0x0 != 0) {
              LOCK();
              *(int *)local_620.field0_0x0 = *(int *)local_620.field0_0x0 + -1;
              local_1a9 = *(int *)local_620.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_1006aa5be;
            }
            QArrayData::deallocate((QArrayData *)local_620.field0_0x0,2,8);
          }
LAB_1006aa5be:
          if (*(int *)local_628 != -1) {
            if (*(int *)local_628 != 0) {
              LOCK();
              *(int *)local_628 = *(int *)local_628 + -1;
              local_1a9 = *(int *)local_628 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_1006aa5fa;
            }
            QArrayData::deallocate(local_628,2,8);
          }
LAB_1006aa5fa:
          if (*(int *)local_630 != -1) {
            if (*(int *)local_630 != 0) {
              LOCK();
              *(int *)local_630 = *(int *)local_630 + -1;
              local_1a9 = *(int *)local_630 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_1006aa636;
            }
            QArrayData::deallocate(local_630,2,8);
          }
LAB_1006aa636:
          iVar8 = 1;
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_1a9 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_1006aa680;
            }
            uVar9 = 2;
            iVar8 = 1;
            goto LAB_1006aa2bf;
          }
        }
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("","dimg",0,"GetVolumeParameters failed with error %d [%lu:%s]",(int)sVar4,
                      lVar10,local_600 + *(long *)(local_600 + 0x10));
        iVar8 = 4;
        if (*(int *)local_600 != -1) {
          pQVar7 = local_600;
          if (*(int *)local_600 != 0) {
            LOCK();
            *(int *)local_600 = *(int *)local_600 + -1;
            iVar1 = *(int *)local_600;
            UNLOCK();
            goto joined_r0x0001006aa2a8;
          }
          goto LAB_1006aa2b5;
        }
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"FSGetVolumeInfo failed with error %d [%lu:%s]",(int)sVar4,lVar10,
                    local_5c8 + *(long *)(local_5c8 + 0x10));
      if (*(int *)local_5c8 != -1) {
        pQVar7 = local_5c8;
        if (*(int *)local_5c8 != 0) {
          LOCK();
          *(int *)local_5c8 = *(int *)local_5c8 + -1;
          iVar1 = *(int *)local_5c8;
          UNLOCK();
joined_r0x0001006aa2a8:
          iVar8 = 4;
          local_1a9 = iVar1 != 0;
          if ((bool)local_1a9) goto LAB_1006aa680;
        }
LAB_1006aa2b5:
        uVar9 = 1;
        iVar8 = 4;
LAB_1006aa2bf:
        QArrayData::deallocate(pQVar7,uVar9,8);
      }
    }
LAB_1006aa680:
    uVar5 = 0;
    if (iVar8 != 4) break;
    lVar10 = lVar10 + 1;
    uVar5 = 0x80023000;
  } while (sVar4 != -0x23);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

