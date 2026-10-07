
undefined8 FUN_100590e30(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_d4;
  ulong local_c8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QFileInfo local_90 [8];
  long local_88;
  long *local_80;
  long local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x28);
    plVar12 = *(long **)(param_1 + 0x28);
    plVar9 = plVar1;
    do {
      while (plVar8 = plVar12, iVar6 = FUN_1007ea6f0(plVar8 + 4,param_2), iVar6 < 0) {
        plVar12 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) goto LAB_100590ea0;
      }
      plVar9 = plVar8;
      plVar12 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_100590ea0:
    if ((plVar9 != plVar1) && (iVar6 = FUN_1007ea6f0(param_2,plVar9 + 4), -1 < iVar6)) {
      FUN_100585d90(&local_60,param_1,plVar9 + 7);
      QFileInfo::QFileInfo(local_58,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100590f16;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100590f16:
      local_c8 = QFileInfo::size();
      local_d4 = (undefined4)plVar9[6];
      QFileInfo::filePath();
      FUN_100779b00(&local_68);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100590f79;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100590f79:
      lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      plVar9 = (long *)0x0;
      if (lVar3 != 0) {
        plVar9 = *(long **)(lVar3 + 0x10);
      }
      (**(code **)(*plVar9 + 0xc0))(&local_88,plVar9,param_2);
      if (local_80 == &local_88) {
        uVar10 = 0;
      }
      else {
        bVar4 = false;
        plVar9 = local_80;
        while( true ) {
          uVar10 = 0x80019013;
          if ((long *)*plVar1 == (long *)0x0) break;
          plVar8 = (long *)*plVar1;
          plVar12 = plVar1;
          do {
            while (plVar11 = plVar8, iVar6 = FUN_1007ea6f0(plVar11 + 4,plVar9 + 2), iVar6 < 0) {
              plVar8 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) goto LAB_10059101b;
            }
            plVar12 = plVar11;
            plVar8 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
LAB_10059101b:
          if ((plVar12 == plVar1) || (iVar6 = FUN_1007ea6f0(plVar9 + 2,plVar12 + 4), iVar6 < 0))
          break;
          FUN_100585d90(&local_98,param_1,plVar12 + 7);
          QFileInfo::QFileInfo(local_90,&local_98);
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10059109c;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
LAB_10059109c:
          uVar7 = QFileInfo::size();
          uVar2 = (undefined4)plVar12[6];
          QFileInfo::filePath();
          FUN_100779b00(&local_a0,&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10059110b;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_10059110b:
          if ((uVar7 < local_c8) && (local_78 == 1)) {
            local_40.field0_0x0 = local_a0.field0_0x0;
            if (1 < *(int *)local_a0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
            }
            QString::operator=(&local_a0,&local_68);
            QString::operator=(&local_68,&local_40);
            local_c8 = uVar7;
            local_d4 = uVar2;
            if (*(int *)local_40.field0_0x0 != -1) {
              if (*(int *)local_40.field0_0x0 != 0) {
                LOCK();
                *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                local_31 = *(int *)local_40.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100591193;
              }
              QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
            }
          }
LAB_100591193:
          uVar7 = local_c8;
          if (((!bVar4) && (cVar5 = operator==(&local_68,&local_a0), cVar5 != '\0')) &&
             (cVar5 = FUN_100684c00(local_d4), cVar5 != '\0')) {
            if (0x8000000 < local_c8) {
              uVar7 = 0x8000000;
            }
            bVar4 = true;
          }
          QFileInfo::filePath();
          uVar10 = FUN_100769600(&local_b0);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100591240;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_100591240:
          (**(code **)(*param_3 + 0x28))(param_3,&local_a0,uVar10);
          (**(code **)(*param_3 + 0x20))(param_3,&local_a0,uVar7);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005912b7;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1005912b7:
          QFileInfo::~QFileInfo(local_90);
          plVar9 = (long *)plVar9[1];
          uVar10 = 0;
          if (plVar9 == &local_88) break;
        }
      }
      if (local_78 != 0) {
        lVar3 = *local_80;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_88 + 8);
        **(long **)(local_88 + 8) = lVar3;
        local_78 = 0;
        while (local_80 != &local_88) {
          plVar1 = (long *)local_80[1];
          operator_delete(local_80);
          local_80 = plVar1;
        }
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100591421;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100591421:
      QFileInfo::~QFileInfo(local_58);
      return uVar10;
    }
  }
  FUN_1007d6a70(&local_50,param_2);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Specified state not found (%s)",local_48 + *(long *)(local_48 + 0x10))
  ;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100591357;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100591357:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0x80019014;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 0x80019014;
}

