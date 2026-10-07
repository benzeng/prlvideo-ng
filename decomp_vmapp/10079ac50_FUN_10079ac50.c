
void FUN_10079ac50(QThread *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,long *param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined8 param_13,long *param_14,undefined8 param_15,QThread param_16,
                  QThread param_17)

{
  QThread *this;
  long *plVar1;
  QThread *pQVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  QThread *pQVar10;
  __sigaction_u local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  long *local_40;
  undefined1 local_31;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bcf2b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf340;
  puVar6 = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_100ba20d0;
  lVar3 = *param_2;
  *(long *)(param_1 + 0x20) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  *(undefined4 *)(param_1 + 0x38) = 0;
  piVar4 = (int *)*param_6;
  *(int **)(param_1 + 0x40) = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x48) = param_7;
  *(undefined **)(param_1 + 0x50) = puVar6;
  *(undefined4 *)(param_1 + 0x58) = 0;
  lVar3 = *param_8;
  *(long *)(param_1 + 0x60) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  this = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x68) = param_9;
  *(undefined8 *)(param_1 + 0x70) = param_10;
  *(undefined8 *)(param_1 + 0x78) = param_11;
  QMutex::QMutex((QMutex *)(param_1 + 0x80),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x88),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x90));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = param_12;
  param_1[0xb4] = (QThread)0x1;
  *(undefined **)(param_1 + 0xb8) = puVar6;
  FUN_1007d6bb0(param_1 + 0xc0,param_13);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0x160) = puVar6;
  FUN_100792a30();
  local_40 = (long *)*param_2;
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  pQVar2 = param_1 + 0x398;
  FUN_1007c6fb0(param_1 + 400,&local_40,param_4,param_9,pQVar2,param_1 + 0x10);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  *(undefined **)(param_1 + 0x2e0) = PTR_shared_null_100ba2180;
  uVar7 = FUN_1007c63d0();
  *(undefined4 *)(param_1 + 0x2f0) = uVar7;
  pQVar10 = param_1 + 0x2f8;
  FUN_1007c6350(pQVar10,uVar7);
  FUN_1007c6350(param_1 + 0x300,*(undefined4 *)(param_1 + 0x2f0));
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  FUN_1007b7670(param_1 + 0x350,param_15);
  param_1[0x370] = param_17;
  *(undefined4 *)(param_1 + 0x374) = 0;
  param_1[0x378] = (QThread)0x0;
  param_1[0x379] = (QThread)0x0;
  param_1[0x37f] = (QThread)0x0;
  param_1[0x380] = param_16;
  *(undefined **)(param_1 + 0x388) = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)pQVar2 = 0;
  param_1[0x3c0] = (QThread)0x0;
  *(undefined8 *)(param_1 + 0x3b8) = 0xffffffff00000001;
  QThread::setStackSize((uint)param_1);
  lVar3 = *param_14;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(long **)(param_1 + 0x308);
  *(long *)(param_1 + 0x308) = lVar3;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_1[0x310] = (QThread)0x0;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  iVar8 = *(int *)(param_1 + 0x68);
  if (iVar8 == 2) {
    local_b8 = (QArrayData *)
               QString::fromAscii_helper("IO proxy management ctx [read thr] (sender %1): ",0x30);
    QString::arg(&local_b0,&local_b8,(long)*(int *)(param_1 + 0x30),0,10,0x20,pQVar10);
    QString::operator=((QString *)this,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b198;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_10079b198:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b5df;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
  else if (iVar8 == 1) {
    if (*(int *)(param_1 + 0x34) != 1) {
      if (*(int *)(param_1 + 0x34) != 0) goto LAB_10079b5df;
      if ((*(long *)(param_1 + 0x308) == 0) || (*(long *)(*(long *)(param_1 + 0x308) + 0x10) == 0))
      {
        local_98 = (QArrayData *)
                   QString::fromAscii_helper
                             ("IO server ctx [read thr] (handle %1, sender %2): ",0x31);
        QString::arg(&local_90,&local_98,(long)*(int *)(param_1 + 0xb0),0,10,0x20,pQVar10);
        QString::arg(&local_88,&local_90,(long)*(int *)(param_1 + 0x30),0,10,0x20);
        QString::operator=((QString *)this,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b573;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_10079b573:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b5a9;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10079b5a9:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b5df;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
      else {
        local_78 = (QArrayData *)
                   QString::fromAscii_helper
                             ("IO server ctx [read thr] (cli_state %1, sender %2): ",0x34);
        local_80 = (QArrayData *)PTR_shared_null_100ba20d0;
        uVar9 = QString::sprintf((char *)&local_80,"%p",
                                 **(undefined8 **)(*(long *)(param_1 + 0x308) + 0x10));
        QString::arg(&local_70,&local_78,uVar9,0,0x20);
        QString::arg(&local_68,&local_70,(long)*(int *)(param_1 + 0x30),0,10,0x20);
        QString::operator=((QString *)this,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b37b;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_10079b37b:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b3ab;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10079b3ab:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b3db;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10079b3db:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079b5df;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
      goto LAB_10079b5df;
    }
    local_a8 = (QArrayData *)
               QString::fromAscii_helper("IO proxy server ctx [read thr] (sender %1): ",0x2c);
    QString::arg(&local_a0,&local_a8,(long)*(int *)(param_1 + 0x30),0,10,0x20,pQVar10);
    QString::operator=((QString *)this,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b0cf;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_10079b0cf:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079b5df;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
  else {
    if (iVar8 != 0) goto LAB_10079b5e3;
    if (*(int *)(param_1 + 0x34) == 1) {
      local_60 = (QArrayData *)
                 QString::fromAscii_helper("IO proxy client ctx [read thr] (sender %1): ",0x2c);
      QString::arg(&local_58,&local_60,(long)*(int *)(param_1 + 0x30),0,10,0x20,pQVar10);
      QString::operator=((QString *)this,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b264;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_10079b264:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b5df;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) goto LAB_10079b5df;
      local_50 = (QArrayData *)
                 QString::fromAscii_helper("IO client ctx [read thr] (sender %1): ",0x26);
      QString::arg(&local_48,&local_50,(long)*(int *)(param_1 + 0x30),0,10,0x20,pQVar10);
      QString::operator=((QString *)this,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b494;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_10079b494:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079b5df;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
  }
LAB_10079b5df:
  iVar8 = *(int *)(param_1 + 0x68);
LAB_10079b5e3:
  if ((iVar8 == 1) || ((iVar8 == 0 && (*(int *)(param_1 + 0xb0) != -1)))) {
    param_1[0xb4] = (QThread)0x0;
  }
  local_c0 = 0;
  local_c8 = (__sigaction_u)0x1;
  local_bc = 0;
  _sigaction(0xd,(sigaction *)&local_c8,(sigaction *)0x0);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)pQVar2 = 0;
  ___bzero(param_1 + 0xcc);
  if (((*param_14 != 0) && (plVar5 = *(long **)(*param_14 + 0x10), plVar5 != (long *)0x0)) &&
     (lVar3 = *plVar5, *(int *)(lVar3 + 0x68) != 0)) {
    lVar3 = *(long *)(lVar3 + 0x88);
    iVar8 = 0;
    if (lVar3 != 0) {
      iVar8 = (int)*(undefined8 *)(lVar3 + 0x10);
    }
    QByteArray::append((char *)(param_1 + 0x388),iVar8);
  }
  return;
}

