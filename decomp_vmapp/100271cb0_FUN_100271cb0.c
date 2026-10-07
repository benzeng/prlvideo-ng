
void FUN_100271cb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_31;
  
  plVar2 = *(long **)(param_1 + 0x90);
  lVar10 = FUN_100257d80();
  iVar7 = *(int *)(lVar10 + 0x31c88);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_10008d2d0(&local_58,*(undefined4 *)(lVar10 + 0x31ca0),iVar7);
  FUN_1002724a0(param_1);
  plVar11 = (long *)(param_1 + 0x98);
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2;
  }
  bVar12 = false;
  do {
    if (*(int *)(lVar10 + 0x31c8c) == 2) {
      iVar7 = (**(code **)(*plVar11 + 0x28))
                        (plVar11,*(undefined4 *)(lVar10 + 0x31c84),*(undefined4 *)(lVar10 + 0x31c88)
                         ,local_58);
    }
    else if (*(int *)(lVar10 + 0x31c8c) == 1) {
      iVar7 = (**(code **)(*plVar11 + 0x20))
                        (plVar11,*(undefined4 *)(lVar10 + 0x31c84),*(undefined4 *)(lVar10 + 0x31c88)
                         ,local_58);
    }
    else {
      QMutex::lock();
      plVar2 = *(long **)(param_1 + 0x80);
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      QMutex::unlock();
      uVar9 = CVmDevice::getIndex();
      FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Unknown I/O type %u",uVar9,
                    *(undefined4 *)(lVar10 + 0x31c8c));
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (iVar7 == *(int *)(lVar10 + 0x31c88)) {
      *(undefined4 *)(lVar10 + 0x31ca8) = 0;
LAB_1002721e1:
      FUN_10008d3f0(&local_58);
      return;
    }
    *(undefined4 *)(lVar10 + 0x31ca8) = 1;
    if (*(long **)(param_1 + 0x90) == (long *)0x0) goto LAB_1002721e1;
    cVar5 = (**(code **)(**(long **)(param_1 + 0x90) + 0x58))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(**(long **)(param_1 + 0x90) + 0x60))();
      if (cVar5 != '\0') {
        local_78 = 0;
        puStack_70 = (undefined8 *)0x0;
        local_68 = (undefined8 *)0x0;
        QMutex::lock();
        plVar2 = *(long **)(param_1 + 0x80);
        if (plVar2 != (long *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        QMutex::unlock();
        uVar9 = CVmDevice::getIndex();
        CVmDevice::getSystemName();
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Image was stolen \'%s\'",uVar9,
                      local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027202a;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_10027202a:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10027205a;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10027205a:
        CVmDevice::getSystemName();
        if (puStack_70 == local_68) {
          FUN_1000b5140(&local_78,&local_90);
        }
        else {
          *puStack_70 = local_90;
          if (1 < *(int *)local_90 + 1U) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + 1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
          }
          puStack_70 = puStack_70 + 1;
        }
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002720ea;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1002720ea:
        uVar4 = DAT_1011c3650;
        local_a8 = (void *)0x0;
        pvStack_a0 = (void *)0x0;
        local_98 = 0;
        FUN_10002ddb0(local_d8,&local_78);
        FUN_10006a5d0(local_c0,local_d8);
        FUN_1000648b0(uVar4,0x80000264,&local_a8,local_c0);
        FUN_10006a680(local_c0);
        FUN_10002d9d0(local_d8);
        if (local_a8 != (void *)0x0) {
          if (pvStack_a0 != local_a8) {
            pvStack_a0 = (void *)((~((long)pvStack_a0 + (-4 - (long)local_a8)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_a0);
          }
          operator_delete(local_a8);
        }
        FUN_10025b310(param_1 + 0x68,0);
        (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),1);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar11 = plVar2 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        FUN_10002d9d0(&local_78);
      }
      goto LAB_1002721e1;
    }
    if (((bVar12) || (*(int *)(lVar10 + 0x31c8c) != 2)) ||
       (iVar8 = (**(code **)(**(long **)(param_1 + 0x90) + 0x48))(), iVar8 != 5))
    goto LAB_1002721e1;
    FUN_1008e3970("","LocalDevices",0,
                  "Error writing to the floppy. May be media changed to RO media?");
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),0);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x10))(*(long **)(param_1 + 0x90),param_1 + 0xd8,0,0)
    ;
    *(undefined4 *)(lVar10 + 0x31c90) = 1;
    bVar6 = (**(code **)(**(long **)(param_1 + 0x90) + 0x50))();
    *(uint *)(lVar10 + 0x31ca4) = (uint)bVar6;
    bVar12 = true;
  } while( true );
}

