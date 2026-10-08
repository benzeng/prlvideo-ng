
void FUN_10003a9d0(long param_1,int param_2,char param_3,undefined8 *param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint *puVar7;
  QWidget *pQVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  QArrayData *local_1108;
  QString local_1100;
  QArrayData *local_10f8;
  QArrayData *local_10f0;
  QArrayData *local_10e8;
  undefined8 local_10e0;
  QArrayData *local_10d8;
  QArrayData *local_10d0;
  int *local_10c8;
  QString local_10c0;
  int *local_10b8;
  int *local_10b0;
  undefined1 local_10a8 [2104];
  undefined1 local_870 [2111];
  undefined1 local_31;
  
  puVar7 = (uint *)*param_4;
  if (1 < *puVar7) {
    FUN_10003cb70(param_4,puVar7[1]);
    puVar7 = (uint *)*param_4;
  }
  puVar14 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar7) {
      FUN_10003cb70(param_4,puVar7[1]);
      puVar7 = (uint *)*param_4;
    }
    bVar4 = true;
    if (puVar14 == puVar7 + (long)(int)puVar7[3] * 2 + 4) goto LAB_10003aa64;
    if (*(int *)(*(long *)puVar14 + 0x10) != 0) break;
    puVar14 = puVar14 + 2;
  }
  bVar4 = false;
LAB_10003aa64:
  if (param_2 != 0) {
    bVar4 = false;
  }
  local_10b8 = (int *)PTR_shared_null_1021e15e8;
  if (1 < *puVar7) {
    FUN_10003cb70(param_4,puVar7[1]);
    puVar7 = (uint *)*param_4;
  }
  puVar14 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar7) {
      FUN_10003cb70(param_4,puVar7[1]);
      puVar7 = (uint *)*param_4;
    }
    if (puVar14 == puVar7 + (long)(int)puVar7[3] * 2 + 4) break;
    lVar10 = *(long *)puVar14 + 8;
    if (bVar4) {
      lVar10 = *(long *)puVar14;
    }
    FUN_1000341d0(&local_10b8,lVar10);
    puVar14 = puVar14 + 2;
    puVar7 = (uint *)*param_4;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (((bVar4 != false) && (local_10b8[3] != local_10b8[2])) && (param_3 == '\0')) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      FUN_10003b3e0();
      if (*(char *)(param_1 + 0x58) == '\0') {
        local_10e0 = QCursor::pos();
        QApplication::widgetAt((QPoint *)&local_10e0);
        pQVar8 = (QWidget *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e810);
        if (pQVar8 != (QWidget *)0x0) {
          uVar6 = MacUtils::getWindowNumber(pQVar8);
          cVar5 = FUN_10003a7d0((double)(int)local_10e0,(double)(int)((ulong)local_10e0 >> 0x20),
                                uVar6);
          if (cVar5 == '\0') {
            uVar9 = FUN_100152280();
            FUN_10037a7f0(&local_10e8,pQVar8);
            lVar10 = FUN_1001548f0(uVar9);
            if (*(int *)local_10e8 != -1) {
              if (*(int *)local_10e8 != 0) {
                LOCK();
                *(int *)local_10e8 = *(int *)local_10e8 + -1;
                local_31 = *(int *)local_10e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10003ae5a;
              }
              QArrayData::deallocate(local_10e8,2,8);
            }
LAB_10003ae5a:
            if ((lVar10 == 0) ||
               (lVar11 = FUN_100319390(*(undefined8 *)(param_1 + 0x20)), lVar10 == lVar11)) {
              local_10f0 = (QArrayData *)QString::fromAscii_helper("",0);
              FUN_100090150(param_1,param_5,0xffffffff,&local_10f0,0);
              if (*(int *)local_10f0 != -1) {
                if (*(int *)local_10f0 != 0) {
                  LOCK();
                  *(int *)local_10f0 = *(int *)local_10f0 + -1;
                  local_31 = *(int *)local_10f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10003b0fe;
                }
                QArrayData::deallocate(local_10f0,2,8);
              }
              goto LAB_10003b0fe;
            }
          }
        }
        local_10f8 = (QArrayData *)QString::fromAscii_helper("",0);
        FUN_100090150(param_1,param_5,0xffffffff,&local_10f8,0);
        if (*(int *)local_10f8 != -1) {
          if (*(int *)local_10f8 != 0) {
            LOCK();
            *(int *)local_10f8 = *(int *)local_10f8 + -1;
            local_31 = *(int *)local_10f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10003aede;
          }
          QArrayData::deallocate(local_10f8,2,8);
        }
LAB_10003aede:
        FUN_100099d90(local_870,7,0,0xcd);
        FUN_1000901c0(param_1,local_870);
        goto LAB_10003b0fe;
      }
      local_10d8 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100090150(param_1,param_5,0,&local_10d8,4);
      if (*(int *)local_10d8 != -1) {
        if (*(int *)local_10d8 != 0) {
          LOCK();
          *(int *)local_10d8 = *(int *)local_10d8 + -1;
          local_31 = *(int *)local_10d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003abd2;
        }
        QArrayData::deallocate(local_10d8,2,8);
      }
LAB_10003abd2:
      FUN_100099d90(local_10a8,7,0,0xcd);
      FUN_1000901c0(param_1,local_10a8);
      goto LAB_10003b0fe;
    }
    local_1100.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x50),&local_1100);
    if (*(int *)local_1100.field0_0x0 != -1) {
      if (*(int *)local_1100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1100.field0_0x0 = *(int *)local_1100.field0_0x0 + -1;
        local_31 = *(int *)local_1100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003ac58;
      }
      QArrayData::deallocate((QArrayData *)local_1100.field0_0x0,2,8);
    }
LAB_10003ac58:
    *(undefined1 *)(param_1 + 0x58) = 0;
    FUN_10003b6e0();
    local_1108 = (QArrayData *)((QString *)(param_1 + 0x50))->field0_0x0;
    if (1 < *(int *)local_1108 + 1U) {
      LOCK();
      *(int *)local_1108 = *(int *)local_1108 + 1;
      local_31 = *(int *)local_1108 != 0;
      UNLOCK();
    }
    FUN_10003b8b0(param_1,param_3,&local_1108,*(undefined1 *)(param_1 + 0x58),param_5);
    if (*(int *)local_1108 != -1) {
      if (*(int *)local_1108 != 0) {
        LOCK();
        *(int *)local_1108 = *(int *)local_1108 + -1;
        local_31 = *(int *)local_1108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003b0fe;
      }
      QArrayData::deallocate(local_1108,2,8);
    }
    goto LAB_10003b0fe;
  }
  *(undefined8 *)(param_1 + 0x60) = param_5;
  *(bool *)(param_1 + 0x68) = bVar4;
  if (*(int **)(param_1 + 0x70) != local_10b8) {
    local_10b0 = local_10b8;
    if (*local_10b8 != -1) {
      if (*local_10b8 == 0) {
        QListData::detach((int)&local_10b0);
        iVar1 = local_10b0[2];
        if (iVar1 != local_10b0[3]) {
          piVar12 = local_10b8 + (long)local_10b8[2] * 2 + 4;
          piVar13 = local_10b0 + (long)iVar1 * 2 + 4;
          lVar10 = (long)local_10b0[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)piVar12;
            *(int **)piVar13 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
      else {
        LOCK();
        *local_10b8 = *local_10b8 + 1;
        local_31 = *local_10b8 != 0;
        UNLOCK();
      }
    }
    piVar12 = *(int **)(param_1 + 0x70);
    *(int **)(param_1 + 0x70) = local_10b0;
    local_10b0 = piVar12;
    FUN_100039a80(&local_10b0);
  }
  *(char *)(param_1 + 0x78) = param_3;
  local_10c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=((QString *)(param_1 + 0x80),&local_10c0);
  if (*(int *)local_10c0.field0_0x0 != -1) {
    if (*(int *)local_10c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_10c0.field0_0x0 = *(int *)local_10c0.field0_0x0 + -1;
      local_31 = *(int *)local_10c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003af95;
    }
    QArrayData::deallocate((QArrayData *)local_10c0.field0_0x0,2,8);
  }
LAB_10003af95:
  uVar9 = FUN_100319c00(*(undefined8 *)(param_1 + 0x20));
  lVar10 = FUN_100328b70(uVar9);
  lVar10 = *(long *)(lVar10 + 0x78);
  pcVar3 = *(code **)(*(long *)(lVar10 + 0x9c0) + 0x78);
  if ((bVar4 == false) || (param_3 != '\0')) {
    local_10c8 = (int *)PTR_shared_null_1021e15e8;
  }
  else {
    local_10c8 = local_10b8;
    if (*local_10b8 != -1) {
      if (*local_10b8 == 0) {
        QListData::detach((int)&local_10c8);
        iVar1 = local_10c8[2];
        if (iVar1 != local_10c8[3]) {
          piVar12 = local_10b8 + (long)local_10b8[2] * 2 + 4;
          piVar13 = local_10c8 + (long)iVar1 * 2 + 4;
          lVar11 = (long)local_10c8[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)piVar12;
            *(int **)piVar13 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
      }
      else {
        LOCK();
        *local_10b8 = *local_10b8 + 1;
        local_31 = *local_10b8 != 0;
        UNLOCK();
      }
    }
  }
  cVar5 = (*pcVar3)(lVar10 + 0x9c0);
  FUN_100039a80(&local_10c8);
  if (cVar5 == '\0') {
    local_10d0 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100090150(param_1,param_5,0xffffffff,&local_10d0,0);
    if (*(int *)local_10d0 != -1) {
      if (*(int *)local_10d0 != 0) {
        LOCK();
        *(int *)local_10d0 = *(int *)local_10d0 + -1;
        local_31 = *(int *)local_10d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003b0fe;
      }
      QArrayData::deallocate(local_10d0,2,8);
    }
  }
LAB_10003b0fe:
  FUN_100039a80(&local_10b8);
  return;
}

