
int FUN_100103800(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  QArrayData *local_98;
  undefined1 local_90 [16];
  long *local_80;
  undefined *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  QMutex::lock();
  QMutex::lock();
  lVar5 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 != 0) {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
  }
  QMutex::unlock();
  iVar6 = -0x7ffffff7;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar7 = (uint *)*puVar1;
      uVar10 = puVar7[2];
      if (puVar7[3] == uVar10) {
        iVar6 = 0;
        break;
      }
      if (1 < *puVar7) {
        FUN_100105f60(puVar1,puVar7[1]);
        puVar7 = (uint *)*puVar1;
        uVar10 = puVar7[2];
      }
      puVar3 = *(undefined8 **)(puVar7 + (long)(int)uVar10 * 2 + 4);
      local_50 = (QArrayData *)*puVar3;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_48 = (int *)puVar3[1];
      if (*local_48 != -1) {
        if (*local_48 == 0) {
          QListData::detach((int)&local_48);
          iVar6 = local_48[2];
          if (iVar6 != local_48[3]) {
            puVar12 = (undefined8 *)(puVar3[1] + 0x10 + (long)*(int *)(puVar3[1] + 8) * 8);
            piVar14 = local_48 + (long)iVar6 * 2 + 4;
            lVar11 = (long)local_48[3] * 8 + (long)iVar6 * -8;
            do {
              piVar4 = (int *)*puVar12;
              *(int **)piVar14 = piVar4;
              if (1 < *piVar4 + 1U) {
                LOCK();
                *piVar4 = *piVar4 + 1;
                local_31 = *piVar4 != 0;
                UNLOCK();
              }
              piVar14 = piVar14 + 2;
              puVar12 = puVar12 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
        else {
          LOCK();
          *local_48 = *local_48 + 1;
          local_31 = *local_48 != 0;
          UNLOCK();
        }
      }
      local_40 = *(undefined4 *)(puVar3 + 2);
      QString::fromUtf8_helper((char *)&local_60,0x9f642b);
      QString::append(&local_60);
      pQVar8 = (QArrayData *)QString::fromAscii_helper(" ",1);
      QtPrivate::QStringList_join
                ((QStringList *)&local_68,(QChar *)&local_48,
                 (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
      local_58.field0_0x0 = local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_58);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103a00;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100103a00:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103a2d;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_100103a2d:
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103a5d;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100103a5d:
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"running guest programm %s",local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103ac0;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100103ac0:
      local_78 = PTR_shared_null_100ba2188;
      local_80 = *(long **)(param_1 + 0x10);
      if (local_80 != (long *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      iVar6 = FUN_1004875a0(lVar5,&local_50,&local_48,&local_78,&local_80);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      FUN_100013180(&local_78);
      if (iVar6 < 0) {
        uVar9 = FUN_1007dd120(iVar6);
        FUN_1008e3970("","vm",0,"RunProgramForReport failed with result %s",uVar9);
        FUN_1001050a0(&local_98,puVar1);
        FUN_100013180(local_90);
        iVar6 = 0;
        if (*(int *)local_98 != -1) {
          iVar6 = 0;
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100103c50;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
      else {
        FUN_1008e3970("","vm",0,"RunProgramForReport succeeded");
        iVar6 = -0x7fffffed;
        if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
           (*(long *)(param_1 + 0x40) != 0)) {
          QTimer::stop();
          iVar13 = 0;
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (iVar13 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
            iVar13 = (int)*(undefined8 *)(param_1 + 0x40);
          }
          QTimer::setInterval(iVar13);
          QTimer::start();
        }
      }
LAB_100103c50:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103c80;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100103c80:
      FUN_100013180(&local_48);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100103cb9;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100103cb9:
    } while (-1 < iVar6);
    if (lVar5 != 0) {
      FUN_10003b2b0(&DAT_1011cc7d0);
    }
  }
  QMutex::unlock();
  return iVar6;
}

