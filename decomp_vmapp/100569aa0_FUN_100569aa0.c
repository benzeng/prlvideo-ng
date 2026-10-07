
undefined8 FUN_100569aa0(long *param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  (**(code **)(*param_1 + 0x70))();
  if ((long *)param_1[0x252] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x252] + 8))();
  }
  param_1[0x252] = 0;
  if (((char)param_1[0x244] != '\0') && ((long *)param_1[0x242] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x242] + 8))();
  }
  if ((long *)param_1[0x243] != (long *)0x0) {
    iVar6 = (**(code **)(*(long *)param_1[0x243] + 0x20))();
    if (iVar6 != 0) {
      FUN_1008e3970("","vdisk",0,"CDisk::ForceClose: Aio has pended dios");
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x25a,
                    "ForceClose");
    }
    if ((long *)param_1[0x243] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x243] + 0x10))();
    }
  }
  plVar10 = param_1 + 0x247;
  *(undefined1 *)(param_1 + 0x244) = 0;
  param_1[0x243] = 0;
  param_1[0x242] = 0;
  if ((long *)param_1[0x247] != plVar10) {
    FUN_1008e3970("","vdisk",0,"ForceClose Error: pended callbacks in wait list");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x264,
                  "ForceClose");
  }
  plVar8 = param_1 + 0x245;
  if ((long *)param_1[0x245] != plVar8) {
    FUN_1008e3970("","vdisk",0,"ForceClose Error: pended callbacks in unplug list");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x268,
                  "ForceClose");
  }
  if ((int)param_1[0x24f] != 0) {
    FUN_1008e3970("","vdisk",0,"ForceClose Error: pended async reqs");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x26c,
                  "ForceClose");
  }
  plVar4 = (long *)param_1[0x253];
  while (plVar4 != param_1 + 0x253) {
    plVar1 = (long *)*plVar4;
    puVar9 = (undefined8 *)plVar4[1];
    plVar1[1] = (long)puVar9;
    *puVar9 = plVar1;
    _free(plVar4);
    plVar4 = plVar1;
  }
  param_1[0x247] = (long)plVar10;
  param_1[0x248] = (long)plVar10;
  param_1[0x245] = (long)plVar8;
  param_1[0x246] = (long)plVar8;
  param_1[0x24d] = (long)(param_1 + 0x24d);
  param_1[0x24e] = (long)(param_1 + 0x24d);
  param_1[0x255] = (long)(param_1 + 0x255);
  param_1[0x256] = (long)(param_1 + 0x255);
  *(undefined4 *)(param_1 + 0x24f) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  while (lVar7 = param_1[0x24b], lVar7 != 0) {
    plVar10 = (long *)param_1[0x249];
    lVar2 = *plVar10;
    *(long *)(lVar2 + 8) = plVar10[1];
    *(long *)plVar10[1] = lVar2;
    param_1[0x24b] = lVar7 + -1;
    operator_delete(plVar10);
  }
  if ((void *)param_1[0x237] != (void *)0x0) {
    _free((void *)param_1[0x237]);
    param_1[0x237] = 0;
    FUN_1008e3970("","vdisk",0,"Shadow buffer size was %u",(int)param_1[0x238]);
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  (**(code **)(*param_1 + 0x3b0))(param_1);
  *(undefined4 *)(param_1 + 0x228) = 0;
  (**(code **)(*param_1 + 0x1f8))(param_1,param_1[599]);
  if ((long *)param_1[599] != (long *)0x0) {
    (**(code **)(*(long *)param_1[599] + 0x28))();
  }
  param_1[599] = 0;
  if (param_1[600] != 0) {
    lVar7 = FUN_1005f48d0();
    if (lVar7 == 0) {
      FUN_1008e3970("","vdisk",0,"No dirty bitmap to save");
    }
    else {
      puVar9 = (undefined8 *)param_1[0x225];
      while ((puVar9 != (undefined8 *)param_1[0x226] &&
             (iVar6 = (**(code **)(*(long *)*puVar9 + 0x40))((long *)*puVar9,lVar7), -1 < iVar6))) {
        puVar9 = puVar9 + 1;
      }
    }
    if (param_1[600] != 0) {
      (**(code **)(*param_1 + 0x1f8))(param_1);
      if ((long *)param_1[600] != (long *)0x0) {
        (**(code **)(*(long *)param_1[600] + 0x28))();
      }
      param_1[600] = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x25d) = 0;
  FUN_1005b1ea0(param_1 + 2);
  FUN_1005b1e80(param_1 + 2);
  (**(code **)(*param_1 + 0x360))(param_1);
  pvVar3 = (void *)param_1[0x25b];
  if (pvVar3 != (void *)0x0) {
    FUN_100577d50(pvVar3);
    operator_delete(pvVar3);
    param_1[0x25b] = 0;
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",3,"[%p]%s: CompactContext destructed in Close()",param_1,
                    local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100569f9f;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
  }
LAB_100569f9f:
  if (param_1[0x25c] != 0) {
    FUN_1005f4c10(param_1[0x25c],param_1);
    param_1[0x25c] = 0;
  }
  plVar10 = (long *)param_1[0x225];
  plVar8 = (long *)param_1[0x226];
  if (plVar10 != plVar8) {
    do {
      plVar4 = (long *)*plVar10;
      if (plVar4 != (long *)0x0) {
        plVar8 = plVar4 + 0x25;
        if ((long *)plVar4[0x25] != plVar8) {
          FUN_1008e3970("","vdisk",0,"Error: storage has flush dios on disk close!");
          plVar1 = (long *)*plVar8;
          while (plVar1 != plVar8) {
            plVar5 = (long *)*plVar1;
            puVar9 = (undefined8 *)plVar1[1];
            plVar5[1] = (long)puVar9;
            *puVar9 = plVar5;
            _free(plVar1);
            plVar1 = plVar5;
          }
        }
        (**(code **)(*plVar4 + 8))(plVar4);
        *plVar10 = 0;
        plVar8 = (long *)param_1[0x226];
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8);
    if (plVar8 != (long *)param_1[0x225]) {
      param_1[0x226] =
           (~((long)plVar8 + (-8 - param_1[0x225])) & 0xfffffffffffffff8U) + (long)plVar8;
    }
  }
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0x28))();
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)((long)param_1 + 0x1164) = 0;
  *(undefined8 *)((long)param_1 + 0x115c) = 0;
  *(undefined8 *)((long)param_1 + 0x1154) = 0;
  *(undefined8 *)((long)param_1 + 0x114c) = 0;
  *(undefined8 *)((long)param_1 + 0x1144) = 0;
  if ((undefined *)param_1[0x23e] != PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x23e),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056a12b;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10056a12b:
  FUN_1007ea1f0((long)param_1 + 0x11d9);
  return 0;
}

