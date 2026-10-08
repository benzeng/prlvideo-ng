
void FUN_10003b8b0(long param_1,char param_2,long *param_3,char param_4,undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  QWidget *pQVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  QArrayData *pQVar12;
  double dVar13;
  double dVar14;
  int *local_10f0;
  long *local_10e8;
  undefined *local_10e0;
  QArrayData *local_10d8;
  QArrayData *local_10d0;
  QArrayData *local_10c8;
  QArrayData *local_10c0;
  QArrayData *local_10b8;
  QArrayData *local_10b0;
  undefined8 local_10a8;
  undefined1 local_10a0 [2104];
  undefined1 local_868 [2104];
  
  local_10a8 = QCursor::pos();
  QApplication::widgetAt((QPoint *)&local_10a8);
  pQVar5 = (QWidget *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e810);
  if (pQVar5 == (QWidget *)0x0) {
LAB_10003b957:
    if (param_4 != '\0') {
      local_10c8 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100090150(param_1,param_5,0,&local_10c8,4);
      if (*(int *)local_10c8 != -1) {
        pQVar12 = local_10c8;
        if (*(int *)local_10c8 != 0) {
          LOCK();
          *(int *)local_10c8 = *(int *)local_10c8 + -1;
          iVar4 = *(int *)local_10c8;
          UNLOCK();
          goto joined_r0x00010003b9ba;
        }
        goto LAB_10003bb54;
      }
      goto LAB_10003bb63;
    }
    if ((*(int *)(*param_3 + 4) == 0) || (cVar2 = FUN_10003c460(param_1), cVar2 != '\0')) {
      local_10d0 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100090150(param_1,param_5,0xffffffff,&local_10d0,0);
      if (*(int *)local_10d0 != -1) {
        if (*(int *)local_10d0 != 0) {
          LOCK();
          *(int *)local_10d0 = *(int *)local_10d0 + -1;
          local_10a0[0] = *(int *)local_10d0 != 0;
          UNLOCK();
          if ((bool)local_10a0[0]) goto LAB_10003ba5b;
        }
        QArrayData::deallocate(local_10d0,2,8);
      }
LAB_10003ba5b:
      if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x59) != '\0')) {
        return;
      }
    }
    else {
      if (param_2 == '\0') {
        local_10e0 = PTR_shared_null_1021e15e8;
        FUN_1000341d0(&local_10e0,param_3);
        puVar8 = operator_new(0x20);
        *puVar8 = &PTR_FUN_10226c1e0;
        puVar8[1] = param_1;
        puVar8[2] = param_5;
        *(undefined1 *)(puVar8 + 3) = 0;
        plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
        if (plVar9 == (long *)0x0) {
          operator_delete(puVar8);
          plVar9 = (long *)0x0;
        }
        else {
          *(undefined4 *)(plVar9 + 1) = 1;
          plVar9[2] = (long)puVar8;
          *plVar9 = (long)&PTR_FUN_10226ca80;
        }
        uVar10 = FUN_100319c30(*(undefined8 *)(param_1 + 0x20));
        if (plVar9 != (long *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_10e8 = plVar9;
        iVar4 = FUN_10032fa90(uVar10,&local_10e8,&local_10e0);
        if (local_10e8 != (long *)0x0) {
          LOCK();
          plVar11 = local_10e8 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_10e8 + 0x10))();
          }
        }
        if (iVar4 != 0) {
          plVar11 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[2];
          }
          pcVar1 = *(code **)(*plVar11 + 0x10);
          FUN_10008ff00(&local_10f0,&local_10e0,1);
          (*pcVar1)(plVar11,iVar4,&local_10f0);
          if (*local_10f0 != -1) {
            if (*local_10f0 != 0) {
              LOCK();
              *local_10f0 = *local_10f0 + -1;
              local_10a0[0] = *local_10f0 != 0;
              UNLOCK();
              if ((bool)local_10a0[0]) goto LAB_10003be1b;
            }
            FUN_10003cda0(&local_10f0,local_10f0);
          }
        }
LAB_10003be1b:
        FUN_100099d90(local_868,7,0,0xcd);
        FUN_1000901c0(param_1,local_868);
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        FUN_100039a80(&local_10e0);
        return;
      }
      local_10d8 = (QArrayData *)*param_3;
      if (1 < *(int *)local_10d8 + 1U) {
        LOCK();
        *(int *)local_10d8 = *(int *)local_10d8 + 1;
        local_10a0[0] = *(int *)local_10d8 != 0;
        UNLOCK();
      }
      FUN_100090150(param_1,param_5,0,&local_10d8,0);
      if (*(int *)local_10d8 != -1) {
        if (*(int *)local_10d8 != 0) {
          LOCK();
          *(int *)local_10d8 = *(int *)local_10d8 + -1;
          local_10a0[0] = *(int *)local_10d8 != 0;
          UNLOCK();
          if ((bool)local_10a0[0]) goto LAB_10003bc84;
        }
        QArrayData::deallocate(local_10d8,2,8);
      }
    }
LAB_10003bc84:
    FUN_100099d90(local_10a0,7,0,0xcd);
    goto LAB_10003bca5;
  }
  dVar13 = (double)local_10a8._4_4_;
  dVar14 = (double)(int)local_10a8;
  uVar3 = MacUtils::getWindowNumber(pQVar5);
  cVar2 = FUN_10003a7d0(dVar14,dVar13,uVar3);
  if (cVar2 != '\0') goto LAB_10003b957;
  uVar10 = FUN_100152280();
  FUN_10037a7f0(&local_10b0,pQVar5);
  lVar6 = FUN_1001548f0(uVar10);
  if (*(int *)local_10b0 != -1) {
    if (*(int *)local_10b0 != 0) {
      LOCK();
      *(int *)local_10b0 = *(int *)local_10b0 + -1;
      local_10a0[0] = *(int *)local_10b0 != 0;
      UNLOCK();
      if ((bool)local_10a0[0]) goto LAB_10003bad9;
    }
    QArrayData::deallocate(local_10b0,2,8);
  }
LAB_10003bad9:
  if ((lVar6 == 0) || (lVar7 = FUN_100319390(*(undefined8 *)(param_1 + 0x20)), lVar6 == lVar7)) {
    local_10b8 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100090150(param_1,param_5,0xffffffff,&local_10b8,0);
    if (*(int *)local_10b8 == -1) {
      return;
    }
    if (*(int *)local_10b8 != 0) {
      LOCK();
      *(int *)local_10b8 = *(int *)local_10b8 + -1;
      UNLOCK();
      if (*(int *)local_10b8 != 0) {
        return;
      }
      local_10a0[0] = 0;
    }
    QArrayData::deallocate(local_10b8,2,8);
    return;
  }
  local_10c0 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100090150(param_1,param_5,0xffffffff,&local_10c0,0);
  if (*(int *)local_10c0 != -1) {
    pQVar12 = local_10c0;
    if (*(int *)local_10c0 != 0) {
      LOCK();
      *(int *)local_10c0 = *(int *)local_10c0 + -1;
      iVar4 = *(int *)local_10c0;
      UNLOCK();
joined_r0x00010003b9ba:
      local_10a0[0] = iVar4 != 0;
      if ((bool)local_10a0[0]) goto LAB_10003bb63;
    }
LAB_10003bb54:
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_10003bb63:
  FUN_100099d90(local_10a0,7,0,0xcd);
LAB_10003bca5:
  FUN_1000901c0(param_1,local_10a0);
  return;
}

