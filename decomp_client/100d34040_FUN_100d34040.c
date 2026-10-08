
void FUN_100d34040(QString *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  bool bVar8;
  QTypedArrayData<unsigned_short> *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  uint local_90;
  QTypedArrayData<unsigned_short> *local_88;
  QString local_80;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  QDir local_48 [8];
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_1);
  cVar3 = QFileInfo::isFile();
  if ((cVar3 == '\0') && (cVar3 = QFileInfo::isSymLink(), cVar3 == '\0')) {
    cVar3 = QFileInfo::isDir();
    if ((cVar3 != '\0') || (cVar3 = QFileInfo::isBundle(), cVar3 != '\0')) {
      QDir::QDir(local_48,param_1);
      FUN_1000341d0(param_2,param_1);
      QDir::entryList(&local_70,local_48,0x6400,0xffffffff);
      local_68 = local_70;
      if (*local_70 != -1) {
        if (*local_70 == 0) {
          QListData::detach((int)&local_68);
          iVar1 = local_68[2];
          if (iVar1 != local_68[3]) {
            local_70 = local_70 + (long)local_70[2] * 2 + 4;
            piVar7 = local_68 + (long)iVar1 * 2 + 4;
            lVar6 = (long)local_68[3] * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)local_70;
              *(int **)piVar7 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar7 = piVar7 + 2;
              local_70 = local_70 + 2;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *local_70 = *local_70 + 1;
          local_31 = *local_70 != 0;
          UNLOCK();
        }
      }
      local_60 = local_68 + (long)local_68[2] * 2 + 4;
      local_58 = local_68 + (long)local_68[3] * 2 + 4;
      local_50 = 1;
      FUN_100039a80(&local_70);
      if (local_50 != 0) {
        do {
          if (local_60 == local_58) break;
          local_78 = *(QArrayData **)local_60;
          if (1 < *(int *)local_78 + 1U) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + 1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
          }
          if (local_50 != 0) {
            uVar4 = QDir::separator();
            local_88 = param_1->field0_0x0;
            if (1 < *(uint *)local_88 + 1) {
              LOCK();
              *(uint *)local_88 = *(uint *)local_88 + 1;
              local_31 = *(uint *)local_88 != 0;
              UNLOCK();
            }
            uVar5 = *(uint *)(local_88 + 4);
            if ((1 < *(uint *)local_88) || ((*(uint *)(local_88 + 8) & 0x7fffffff) < uVar5 + 2)) {
              QString::reallocData((uint)&local_88,SUB41(uVar5 + 2,0));
              uVar5 = *(uint *)(local_88 + 4);
            }
            *(uint *)(local_88 + 4) = uVar5 + 1;
            *(undefined2 *)(local_88 + (long)(int)uVar5 * 2 + *(long *)(local_88 + 0x10)) = uVar4;
            *(undefined2 *)
             (local_88 + (long)(int)*(uint *)(local_88 + 4) * 2 + *(long *)(local_88 + 0x10)) = 0;
            if (1 < *(uint *)local_88 + 1) {
              LOCK();
              *(uint *)local_88 = *(uint *)local_88 + 1;
              local_31 = *(uint *)local_88 != 0;
              UNLOCK();
            }
            local_80.field0_0x0 = local_88;
            QString::append(&local_80);
            FUN_100d34040(&local_80,param_2);
            if (*(int *)local_80.field0_0x0 != -1) {
              if (*(int *)local_80.field0_0x0 != 0) {
                LOCK();
                *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                local_31 = *(int *)local_80.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d342b2;
              }
              QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
            }
LAB_100d342b2:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d342e2;
              }
              QArrayData::deallocate((QArrayData *)local_88,2,8);
            }
LAB_100d342e2:
            local_50 = 0;
          }
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d34319;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100d34319:
          local_60 = local_60 + 2;
          uVar5 = local_50 ^ 1;
          bVar8 = local_50 != 1;
          local_50 = uVar5;
        } while (bVar8);
      }
      FUN_100039a80(&local_68);
      QDir::entryList(&local_b0,local_48,2,0xffffffff);
      local_a8 = local_b0;
      if (*local_b0 != -1) {
        if (*local_b0 == 0) {
          QListData::detach((int)&local_a8);
          iVar1 = local_a8[2];
          if (iVar1 != local_a8[3]) {
            local_b0 = local_b0 + (long)local_b0[2] * 2 + 4;
            piVar7 = local_a8 + (long)iVar1 * 2 + 4;
            lVar6 = (long)local_a8[3] * 8 + (long)iVar1 * -8;
            do {
              piVar2 = *(int **)local_b0;
              *(int **)piVar7 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar7 = piVar7 + 2;
              local_b0 = local_b0 + 2;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *local_b0 = *local_b0 + 1;
          local_31 = *local_b0 != 0;
          UNLOCK();
        }
      }
      local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
      local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
      local_90 = 1;
      FUN_100039a80(&local_b0);
      if (local_90 != 0) {
        do {
          if (local_a0 == local_98) break;
          local_b8 = *(QArrayData **)local_a0;
          if (1 < *(int *)local_b8 + 1U) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + 1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
          }
          if (local_90 != 0) {
            uVar4 = QDir::separator();
            local_c8 = param_1->field0_0x0;
            if (1 < *(uint *)local_c8 + 1) {
              LOCK();
              *(uint *)local_c8 = *(uint *)local_c8 + 1;
              local_31 = *(uint *)local_c8 != 0;
              UNLOCK();
            }
            uVar5 = *(uint *)(local_c8 + 4);
            if ((1 < *(uint *)local_c8) || ((*(uint *)(local_c8 + 8) & 0x7fffffff) < uVar5 + 2)) {
              QString::reallocData((uint)&local_c8,SUB41(uVar5 + 2,0));
              uVar5 = *(uint *)(local_c8 + 4);
            }
            *(uint *)(local_c8 + 4) = uVar5 + 1;
            *(undefined2 *)(local_c8 + (long)(int)uVar5 * 2 + *(long *)(local_c8 + 0x10)) = uVar4;
            *(undefined2 *)
             (local_c8 + (long)(int)*(uint *)(local_c8 + 4) * 2 + *(long *)(local_c8 + 0x10)) = 0;
            if (1 < *(uint *)local_c8 + 1) {
              LOCK();
              *(uint *)local_c8 = *(uint *)local_c8 + 1;
              local_31 = *(uint *)local_c8 != 0;
              UNLOCK();
            }
            local_c0.field0_0x0 = local_c8;
            QString::append(&local_c0);
            FUN_1000341d0(param_2,&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d34570;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_100d34570:
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d345a6;
              }
              QArrayData::deallocate((QArrayData *)local_c8,2,8);
            }
LAB_100d345a6:
            local_90 = 0;
          }
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d345e6;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100d345e6:
          local_a0 = local_a0 + 2;
          uVar5 = local_90 ^ 1;
          bVar8 = local_90 != 1;
          local_90 = uVar5;
        } while (bVar8);
      }
      FUN_100039a80(&local_a8);
      QDir::~QDir(local_48);
    }
  }
  else {
    FUN_1000341d0(param_2,param_1);
  }
  QFileInfo::~QFileInfo(local_40);
  return;
}

