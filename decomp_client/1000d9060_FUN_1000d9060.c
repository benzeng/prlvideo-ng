
void FUN_1000d9060(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  QArrayData *pQVar6;
  char cVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  QString *pQVar13;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  undefined4 local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = (int *)*param_2;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar10 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar11 = local_58 + (long)iVar1 * 2 + 4;
        lVar8 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar12 = (int *)*puVar10;
          *(int **)piVar11 = piVar12;
          if (1 < *piVar12 + 1U) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            local_31 = *piVar12 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  pQVar13 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  local_50 = pQVar13;
  if (local_58[2] != local_58[3]) {
    puVar10 = (undefined8 *)(param_1 + 0x58);
    do {
      local_40 = 1;
      local_50 = pQVar13;
      QMutex::lock();
      puVar9 = (uint *)*puVar10;
      uVar2 = puVar9[3];
      uVar3 = puVar9[2];
      if (0 < (int)((long)(int)uVar2 - (long)(int)uVar3)) {
        lVar8 = 0;
        while( true ) {
          if (1 < *puVar9) {
            FUN_1000e6e10(puVar10,puVar9[1]);
            puVar9 = (uint *)*puVar10;
          }
          lVar4 = *(long *)(puVar9 + ((int)puVar9[2] + lVar8) * 2 + 4);
          cVar7 = operator==((QString *)(lVar4 + 8),pQVar13);
          if (cVar7 != '\0') break;
          lVar8 = lVar8 + 1;
          if ((long)(int)uVar2 - (long)(int)uVar3 <= lVar8) goto LAB_1000d9200;
          puVar9 = (uint *)*puVar10;
        }
        if (lVar4 != 0) goto LAB_1000d9510;
      }
LAB_1000d9200:
      QMutex::lock();
      FUN_1000f8df0(&local_60,param_1 + 0x1a0,pQVar13);
      local_80 = local_60;
      if (*local_60 != -1) {
        if (*local_60 == 0) {
          QListData::detach((int)&local_80);
          iVar1 = local_80[2];
          if (iVar1 != local_80[3]) {
            piVar11 = local_60 + (long)local_60[2] * 2 + 4;
            piVar12 = local_80 + (long)iVar1 * 2 + 4;
            lVar8 = (long)local_80[3] * 8 + (long)iVar1 * -8;
            do {
              piVar5 = *(int **)piVar11;
              *(int **)piVar12 = piVar5;
              if (1 < *piVar5 + 1U) {
                LOCK();
                *piVar5 = *piVar5 + 1;
                local_31 = *piVar5 != 0;
                UNLOCK();
              }
              piVar12 = piVar12 + 2;
              piVar11 = piVar11 + 2;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *local_60 = *local_60 + 1;
          local_31 = *local_60 != 0;
          UNLOCK();
        }
      }
      piVar11 = local_80 + (long)local_80[2] * 2 + 4;
      local_70 = local_80 + (long)local_80[3] * 2 + 4;
      local_78 = piVar11;
      if (local_80[2] != local_80[3]) {
        do {
          local_68 = 1;
          local_78 = piVar11;
          if (1 < DAT_10230ffd0) {
            QString::toUtf8();
            pQVar6 = local_88;
            lVar8 = *(long *)(local_88 + 0x10);
            QString::toUtf8();
            FUN_100df99c0("SGAC","prl_client_app",2,
                          "remove bundle, appPath=\"%s\", bundlePath=\"%s\"",pQVar6 + lVar8,
                          local_90 + *(long *)(local_90 + 0x10));
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000d937b;
              }
              QArrayData::deallocate(local_90,1,8);
            }
LAB_1000d937b:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000d93b0;
              }
              QArrayData::deallocate(local_88,1,8);
            }
          }
LAB_1000d93b0:
          FUN_100d9bbb0(piVar11);
          local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          local_a0 = *(QArrayData **)(param_1 + 0x1a8);
          if (1 < *(int *)local_a0 + 1U) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + 1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
          }
          local_a8 = *(QArrayData **)piVar11;
          if (1 < *(int *)local_a8 + 1U) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + 1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
          }
          cVar7 = FUN_100051cd0(&local_a0,&local_a8,&local_98);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d9459;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1000d9459:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d948f;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1000d948f:
          if (cVar7 != '\0') {
            QFile::remove(&local_98);
          }
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d94d5;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
LAB_1000d94d5:
          piVar11 = local_78 + 2;
          local_78 = piVar11;
        } while (piVar11 != local_70);
      }
      local_68 = 1;
      FUN_100039a80(&local_80);
      FUN_100039a80(&local_60);
      QMutex::unlock();
LAB_1000d9510:
      QMutex::unlock();
      pQVar13 = local_50 + 1;
      local_50 = pQVar13;
    } while (pQVar13 != local_48);
  }
  local_40 = 1;
  FUN_100039a80(&local_58);
  return;
}

