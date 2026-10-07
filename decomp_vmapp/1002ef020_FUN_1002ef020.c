
long * FUN_1002ef020(uint param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  long *plVar12;
  
  puVar6 = (uint *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x25b,0);
  plVar2 = *(long **)(DAT_1011c3698 + 0x1950);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"adev_create_event: No connection with hypervisor.");
    return (long *)0x0;
  }
  QMutex::lock();
  puVar7 = (uint *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x25b,0);
  uVar1 = *puVar7;
  uVar11 = 0xffffffff;
  if (uVar1 - 1 < 0xa8) {
    puVar10 = (ushort *)((long)puVar7 + 0x12);
    uVar9 = 0;
    do {
      if (((uint)puVar10[-1] == (param_1 & 0xffff)) && ((uint)*puVar10 == (param_2 & 0xffff))) {
        uVar11 = (uint)uVar9;
        break;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 0xc;
    } while (uVar9 < uVar1);
  }
  if ((uVar11 < uVar1) &&
     (plVar12 = *(long **)(puVar7 + (ulong)uVar11 * 6 + 2), plVar12 != (long *)0x0)) {
    *(undefined4 *)(plVar12 + 1) = 4;
    lVar3 = *plVar12;
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(undefined1 *)(lVar3 + 0x10) = param_3;
  }
  else {
    uVar9 = (ulong)*puVar6;
    if (uVar9 < 0xa9) {
      plVar8 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar12 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        QMutex::QMutex((QMutex *)(plVar8 + 0xd),0);
        QWaitCondition::QWaitCondition((QWaitCondition *)(plVar8 + 0xe));
        plVar12 = plVar8 + 5;
        cVar4 = FUN_1007dc710(plVar12);
        if (cVar4 == '\0') {
          FUN_1008e3970("","LocalDevices",0,"Failed to init adev->pollset");
        }
        else {
          cVar4 = FUN_1007d8a00(plVar8 + 0xc,0);
          if (cVar4 == '\0') {
            FUN_1008e3970("","LocalDevices",0,"Failed to create asyncdev event");
          }
          else {
            plVar8[3] = 0;
            plVar8[2] = (long)FUN_1002eff20;
            cVar4 = FUN_1007dc8d0(plVar12,plVar8 + 2,(int)plVar8[0xc],1);
            if (cVar4 != '\0') {
              *plVar8 = (long)(puVar6 + uVar9 * 6 + 2);
              iVar5 = (**(code **)(*plVar2 + 0x100))
                                (plVar2,uVar9,(long)*(int *)((long)plVar8 + 100));
              if (iVar5 == 0) {
                *(undefined4 *)(plVar8 + 1) = 4;
                *(short *)(puVar6 + uVar9 * 6 + 4) = (short)param_1;
                *(short *)((long)puVar6 + uVar9 * 0x18 + 0x12) = (short)param_2;
                puVar6[uVar9 * 6 + 5] = 0;
                *(undefined1 *)(puVar6 + uVar9 * 6 + 6) = param_3;
                *(long **)(puVar6 + uVar9 * 6 + 2) = plVar8;
                *puVar6 = *puVar6 + 1;
                plVar12 = plVar8;
              }
              else {
                FUN_1008e3970("","LocalDevices",0,"Failed to set user-event for dev %d:%d: err %d",
                              param_1,param_2,iVar5);
                FUN_1002ef3e0(plVar8);
                plVar12 = (long *)0x0;
              }
              goto LAB_1002ef301;
            }
            FUN_1008e3970("","LocalDevices",0,"Failed to init adev poll-entry");
            FUN_1007d8af0(plVar8 + 0xc);
          }
          FUN_1007dc890(plVar12);
        }
        QWaitCondition::~QWaitCondition((QWaitCondition *)(plVar8 + 0xe));
        QMutex::~QMutex((QMutex *)(plVar8 + 0xd));
        operator_delete(plVar8);
        plVar12 = (long *)0x0;
      }
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"acync_dev_count is too big: %d devs");
      plVar12 = (long *)0x0;
    }
  }
LAB_1002ef301:
  QMutex::unlock();
  return plVar12;
}

