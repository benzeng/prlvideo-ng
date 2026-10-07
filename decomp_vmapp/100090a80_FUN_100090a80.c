
ulong FUN_100090a80(long param_1,int param_2,undefined4 param_3,int param_4,undefined8 *param_5,
                   long *param_6)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  long *local_578;
  CVmConfiguration local_570 [248];
  QArrayData *local_478;
  CVmGenericNetworkAdapter local_470 [16];
  CBaseNode local_460 [392];
  CVmParallelPort local_2d8 [248];
  CVmHardDisk local_1e0 [344];
  long *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 *puStack_70;
  undefined4 *local_68;
  undefined1 local_58 [24];
  long *local_40;
  undefined1 local_31;
  
  FUN_100409080(param_1 + 0x10b0);
  lVar9 = *(long *)(param_1 + 0x110);
  if (lVar9 == 0) {
    return 0;
  }
  lVar8 = CVmConfiguration::getVmHardwareList();
  if (lVar8 == 0) {
LAB_100090b5b:
    uVar11 = 0;
  }
  else {
    switch(param_3) {
    case 3:
    case 5:
    case 10:
    case 0xc:
      uVar11 = FUN_1000914b0(param_2,param_3,param_5);
      return uVar11;
    default:
      local_598 = 0;
      uStack_590 = 0;
      local_588 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000136,&local_598);
      FUN_10002d9d0(&local_598);
      goto LAB_100090b5b;
    case 6:
      CVmHardDisk::CVmHardDisk(local_1e0);
      cVar2 = FUN_100098730(local_1e0,param_5);
      uVar4 = (param_2 != 1) + 0x80000055;
      if (cVar2 == '\0') {
        uVar11 = (ulong)uVar4;
      }
      else {
        lVar9 = FUN_100082060(local_1e0,lVar8 + 0x1b0);
        if (lVar9 == 0) {
          uVar11 = (ulong)uVar4;
        }
        else {
          iVar3 = CVmClusteredDevice::getInterfaceType();
          if (iVar3 == 2) {
            uVar12 = CVmClusteredDevice::getStackIndex();
            if (uVar12 < 0x40) {
              uVar7 = 0x80000291;
              if (*(int *)(DAT_1011c3698 + 0x588 + (ulong)(uVar12 >> 5) * 4) != 0) {
                if (param_2 == 0) {
                  FUN_10006a060(local_58);
                  local_78 = (undefined4 *)0x0;
                  puStack_70 = (undefined4 *)0x0;
                  local_68 = (undefined4 *)0x0;
                  local_7c = 0x3e81;
                  FUN_10002de70(&local_78,&local_7c);
                  local_80 = 0x3e92;
                  if (puStack_70 == local_68) {
                    FUN_10002de70(&local_78,&local_80);
                  }
                  else {
                    *puStack_70 = 0x3e92;
                    puStack_70 = puStack_70 + 1;
                  }
                  FUN_10006a860(local_58,6,0);
                  uVar6 = CVmDevice::getIndex();
                  FUN_10006a860(local_58,uVar6,1);
                  iVar3 = FUN_1000648b0(DAT_1011c3650,0x80013048,&local_78,local_58);
                  if (local_78 != (undefined4 *)0x0) {
                    if (puStack_70 != local_78) {
                      puStack_70 = (undefined4 *)
                                   ((~((long)puStack_70 + (-4 - (long)local_78)) &
                                    0xfffffffffffffffcU) + (long)puStack_70);
                    }
                    operator_delete(local_78);
                  }
                  FUN_10006a680(local_58);
                  uVar7 = 0x80000528;
                  if (iVar3 != 0x3e92) goto LAB_1000912f9;
                }
                FUN_100259060(&local_88,2,uVar12);
                if ((*(long *)(local_88[2] + 8) == 0) ||
                   (lVar8 = ___dynamic_cast(*(long *)(local_88[2] + 8),&PTR_vtable_100baea70,
                                            &PTR_vtable_100bb1340,0x68), lVar8 == 0)) {
                  uVar7 = 0x80000001;
joined_r0x00010009120c:
                  if (param_2 != 0) {
                    CVmDevice::setConnected((uint)lVar9);
                    lVar9 = FUN_10025ad30(lVar9);
                    if ((lVar9 == 0) ||
                       (lVar9 = ___dynamic_cast(lVar9,&PTR_vtable_100baea70,&PTR_vtable_100bb1340,
                                                0x68), lVar9 == 0)) {
                      uVar7 = 0x80000055;
                      FUN_1008e3970("","vm",0,"[sata:%u] plugin failed 0x%08X",uVar12,uVar4);
                    }
                    else {
                      FUN_10028e5e0(lVar9);
                      uVar7 = 0;
                      FUN_1008e3970("","vm",0,"[sata:%u] device plugged ",uVar12 & 0x1f);
                    }
                  }
                }
                else {
                  uVar7 = FUN_100291830(lVar8);
                  if (-1 < (int)uVar7) {
                    FUN_10025ab50(lVar8 + 0x68);
                    uVar4 = uVar7;
                    goto joined_r0x00010009120c;
                  }
                  FUN_1008e3970("","vm",0,"[sata:%u] unplug failed 0x%08X",uVar12 & 0x1f,uVar7);
                }
                if (local_88 != (long *)0x0) {
                  LOCK();
                  plVar1 = local_88 + 1;
                  lVar9 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)(*local_88 + 0x10))();
                  }
                }
              }
            }
            else {
              FUN_1008e3970("","vm",0,"Can not get disk reference for HBA[%u, %u]",
                            (ulong)(uVar12 >> 5),uVar12);
              uVar7 = uVar4;
            }
LAB_1000912f9:
            uVar11 = (ulong)uVar7;
          }
          else {
            uVar11 = (ulong)uVar4;
          }
        }
      }
      CVmHardDisk::~CVmHardDisk(local_1e0);
      break;
    case 8:
      lVar10 = *(long *)(lVar8 + 0x1d0);
      iVar3 = *(int *)(lVar10 + 8);
      uVar4 = *(int *)(lVar10 + 0xc) - iVar3;
      if (*(int *)(lVar10 + 0xc) == iVar3) {
        return 0x80000290;
      }
      uVar12 = 0;
      while ((*(long *)(lVar10 + 0x10 + ((long)(int)uVar12 + (long)iVar3) * 8) == 0 ||
             (iVar3 = CVmDevice::getIndex(), iVar3 != param_4))) {
        uVar12 = uVar12 + 1;
        if (uVar4 <= uVar12) {
          return 0x80000290;
        }
        lVar10 = *(long *)(lVar8 + 0x1d0);
        iVar3 = *(int *)(lVar10 + 8);
      }
      iVar3 = CVmDevice::getEmulatedType();
      if (0xf < param_4) {
        return 0x80000291;
      }
      if (iVar3 == 4) {
        return 0x80000291;
      }
      lVar8 = *(long *)(param_1 + 0x1990 + (long)param_4 * 8);
      if (lVar8 == 0) {
        return 0x80000291;
      }
      if ((*param_6 == 0) || (*(long *)(*param_6 + 0x10) == 0)) goto LAB_100090ea6;
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_470);
      local_478 = (QArrayData *)*param_5;
      if (1 < *(int *)local_478 + 1U) {
        LOCK();
        *(int *)local_478 = *(int *)local_478 + 1;
        local_31 = *(int *)local_478 != 0;
        UNLOCK();
      }
      CBaseNode::fromString
                (local_460,(QTypedArrayData<unsigned_short> *)&local_478,false,(QString *)0x0,
                 (int *)0x0,(int *)0x0);
      if (*(int *)local_478 != -1) {
        if (*(int *)local_478 != 0) {
          LOCK();
          *(int *)local_478 = *(int *)local_478 + -1;
          local_31 = *(int *)local_478 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100090e6f;
        }
        QArrayData::deallocate(local_478,2,8);
      }
LAB_100090e6f:
      iVar3 = CVmDevice::getEmulatedType();
      iVar5 = CVmDevice::getEmulatedType();
      if (iVar3 != iVar5) {
        *(undefined1 *)(param_1 + 0x1110) = 1;
      }
      CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_470);
LAB_100090ea6:
      lVar8 = lVar8 + 0x68;
      if (param_2 != 1) {
        uVar4 = FUN_10025c0e0(lVar8,param_5);
        return (ulong)uVar4;
      }
      uVar4 = FUN_10025bb50(lVar8,param_5);
      uVar11 = (ulong)uVar4;
      if (*(char *)(param_1 + 0x1110) == '\0') {
        return uVar11;
      }
      if (*param_6 == 0) {
        return uVar11;
      }
      if (*(long *)(*param_6 + 0x10) != 0) {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vm",2,"Device type changed - update guest network settings");
        }
        CVmConfiguration::CVmConfiguration(local_570);
        local_578 = (long *)*param_6;
        if (local_578 != (long *)0x0) {
          LOCK();
          *(int *)(local_578 + 1) = (int)local_578[1] + 1;
          UNLOCK();
        }
        FUN_1000a1250(param_1,lVar9,local_570,&local_578,0);
        if (local_578 != (long *)0x0) {
          LOCK();
          plVar1 = local_578 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)(*local_578 + 0x10))();
          }
        }
        CVmConfiguration::~CVmConfiguration(local_570);
        *(undefined1 *)(param_1 + 0x1110) = 0;
        return uVar11;
      }
      return uVar11;
    case 0xb:
      CVmParallelPort::CVmParallelPort(local_2d8);
      cVar2 = FUN_100097d40(local_2d8,param_5);
      uVar4 = 0x80000290;
      if ((cVar2 != '\0') && (lVar9 = FUN_100081240(local_2d8,lVar8 + 0x1c8), lVar9 != 0)) {
        iVar3 = CVmParallelPort::getPrinterInterfaceType();
        if (iVar3 == 0) {
          uVar4 = FUN_1000914b0(param_2,0xb,param_5);
        }
        else {
          FUN_100258f10(&local_40,lVar9);
          lVar8 = *(long *)(local_40[2] + 8);
          if (lVar8 == 0) {
            uVar4 = 0x80000290;
            if (param_2 != 0) {
              lVar9 = FUN_10025ad30(lVar9);
              uVar4 = 0;
              if (lVar9 == 0) {
                FUN_1008e3970("","vm",0,"USB printer plugin failed");
                uVar4 = 0x80000290;
              }
            }
          }
          else if (param_2 == 1) {
            uVar4 = FUN_10025bb50(lVar8,param_5);
          }
          else {
            uVar4 = FUN_10025c0e0(lVar8,param_5);
          }
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)(*local_40 + 0x10))();
            }
          }
        }
      }
      CVmParallelPort::~CVmParallelPort(local_2d8);
      uVar11 = (ulong)uVar4;
      break;
    case 0xf:
      lVar9 = *(long *)(param_1 + 0x1a58);
      uVar11 = 0x80000291;
      if (lVar9 != 0) {
        if (param_2 != 1) {
          uVar11 = FUN_1002c3870(lVar9,param_5);
          return uVar11;
        }
        uVar11 = FUN_1002c36e0(lVar9,param_5);
        return uVar11;
      }
    }
  }
  return uVar11;
}

