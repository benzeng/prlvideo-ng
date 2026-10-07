
long * FUN_10025a110(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  long *local_48;
  long *local_40;
  long *local_38;
  
  uVar5 = (**(code **)(*param_1 + 0x68))();
  iVar6 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar3 = CVmDevice::getIndex();
  if (iVar6 < 0xb) {
    if (iVar6 == 3) {
      if (1 < (uVar3 & 0xfffe)) {
        return (long *)0x0;
      }
    }
    else {
      if (iVar6 != 10) goto LAB_10025a19b;
      if (3 < (uVar3 & 0xfffc)) {
        return (long *)0x0;
      }
    }
  }
  else if ((iVar6 == 0xb) || (iVar6 == 0x10)) {
    if (10 < uVar3) {
      return (long *)0x0;
    }
  }
  else {
LAB_10025a19b:
    lVar9 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2230,0);
    lVar2 = DAT_1011c3698;
    if (lVar9 != 0) {
      uVar7 = CVmClusteredDevice::getStackIndex();
      iVar6 = CVmClusteredDevice::getInterfaceType();
      if (iVar6 == 0) {
        if (3 < (uVar7 & 0xfffc)) {
          return (long *)0x0;
        }
      }
      else if (iVar6 == 2) {
        if (0x1f < (uVar7 & 0xffe0)) {
          return (long *)0x0;
        }
        if (*(int *)(lVar2 + 0x588) == 0) {
          return (long *)0x0;
        }
      }
      else if (iVar6 == 1) {
        iVar6 = *(int *)(lVar2 + 0x584);
        if ((1 < iVar6 - 1U) && (iVar6 != 0)) {
          return (long *)0x0;
        }
        if (0xf < (uVar7 & 0xfff0)) {
          return (long *)0x0;
        }
      }
    }
  }
  FUN_100258f10(&local_38,param_1);
  lVar2 = DAT_1011c3698;
  plVar13 = (long *)0x0;
  if (*(long *)(local_38[2] + 8) != 0) goto LAB_10025a703;
  switch(uVar5) {
  case 3:
    pvVar11 = operator_new(0xe0,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar13 = (long *)0x0;
    if (pvVar11 == (void *)0x0) goto LAB_10025a703;
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21e0,0);
    FUN_100271290(pvVar11,uVar10);
    break;
  default:
    plVar13 = (long *)0x0;
    FUN_1008e3970("","LocalDevices",0,"Unsupported device type %d in CDeviceState",uVar5);
    goto LAB_10025a703;
  case 5:
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21f8,0);
    uVar4 = CVmClusteredDevice::getStackIndex();
    uVar7 = CVmClusteredDevice::getInterfaceType();
    plVar13 = (long *)(ulong)uVar7;
    FUN_100259060(&local_48,plVar13,uVar4);
    if (*(long *)(local_48[2] + 8) == 0) {
      if (uVar7 == 0) {
        pvVar11 = operator_new(0x238,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar13 = (long *)0x0;
        if (pvVar11 == (void *)0x0) {
          iVar6 = 1;
        }
        else {
          FUN_10026f5c0(pvVar11,uVar10);
          plVar13 = (long *)((long)pvVar11 + 0x68);
          iVar6 = 1;
        }
      }
      else if (uVar7 == 2) {
        plVar12 = operator_new(0x11d0,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar13 = (long *)0x0;
        if (plVar12 == (long *)0x0) {
          iVar6 = 1;
        }
        else {
          FUN_100292100(plVar12,uVar10);
          iVar8 = (**(code **)(*plVar12 + 0x90))(plVar12);
          iVar6 = 1;
          plVar13 = plVar12 + 0xd;
          if (iVar8 < 0) {
            FUN_10025ab50(plVar13);
            plVar13 = (long *)0x0;
          }
        }
      }
      else if (uVar7 == 1) {
        plVar13 = (long *)0x0;
        if (*(int *)(lVar2 + 0x584) == 0) {
          plVar12 = operator_new(0x298,(nothrow_t *)PTR_nothrow_100ba21c8);
          plVar13 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_100281150(plVar12,uVar10,*(undefined8 *)(DAT_1011c3698 + 0x1988));
            plVar13 = plVar12;
          }
          iVar6 = 1;
        }
        else {
          iVar6 = 1;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 1;
      FUN_1008e3970("","LocalDevices",0,"Port (%d) is already occupied",uVar4);
      plVar13 = (long *)0x0;
    }
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar12 = local_48 + 1;
      lVar2 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (iVar6 != 2) goto LAB_10025a703;
    goto LAB_10025a6d0;
  case 6:
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
    uVar4 = CVmClusteredDevice::getStackIndex();
    iVar6 = CVmClusteredDevice::getInterfaceType();
    FUN_100259060(&local_40,iVar6,uVar4);
    if (*(long *)(local_40[2] + 8) == 0) {
      if (iVar6 == 0) {
        pvVar11 = operator_new(0x12f8,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar13 = (long *)0x0;
        if (pvVar11 != (void *)0x0) {
          FUN_10026d660(pvVar11,uVar10);
LAB_10025a8c8:
          plVar12 = (long *)((long)pvVar11 + 0x68);
LAB_10025a8cc:
          plVar13 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            plVar13 = (long *)___dynamic_cast(plVar12,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                              0xfffffffffffffffe);
            iVar6 = (**(code **)(*plVar13 + 0x20))(plVar13);
            plVar13 = plVar12;
            if (iVar6 < 0) {
              FUN_10025ab50(plVar12);
              plVar13 = (long *)0x0;
            }
          }
        }
      }
      else if (iVar6 == 2) {
        pvVar11 = operator_new(0x141d8,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar13 = (long *)0x0;
        if (pvVar11 != (void *)0x0) {
          FUN_1002947e0(pvVar11,uVar10);
          goto LAB_10025a8c8;
        }
      }
      else {
        plVar13 = (long *)0x0;
        if (iVar6 == 1) {
          if (*(int *)(lVar2 + 0x584) == 0) {
            uVar1 = *(undefined8 *)(DAT_1011c3698 + 0x1988);
            plVar13 = operator_new(0x330,(nothrow_t *)PTR_nothrow_100ba21c8);
            plVar12 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              FUN_100281fe0(plVar13,uVar10,uVar1);
              plVar12 = plVar13;
            }
            goto LAB_10025a8cc;
          }
          pvVar11 = operator_new(0x3a3c0,(nothrow_t *)PTR_nothrow_100ba21c8);
          plVar13 = (long *)0x0;
          if (pvVar11 != (void *)0x0) {
            FUN_100289df0(pvVar11,uVar10);
            goto LAB_10025a8c8;
          }
        }
      }
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"Port (%d) is already occupied",uVar4);
      plVar13 = (long *)0x0;
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar12 = local_40 + 1;
      lVar2 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    goto LAB_10025a703;
  case 8:
    pvVar11 = operator_new(0x208,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar13 = (long *)0x0;
    if (pvVar11 == (void *)0x0) goto LAB_10025a703;
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    FUN_100276480(pvVar11,uVar10);
    break;
  case 10:
    pvVar11 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar13 = (long *)0x0;
    if (pvVar11 == (void *)0x0) goto LAB_10025a703;
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21e8,0);
    FUN_10025f670(pvVar11,uVar10);
    break;
  case 0xb:
    pvVar11 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar13 = (long *)0x0;
    if (pvVar11 == (void *)0x0) goto LAB_10025a703;
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2208,0);
    FUN_1002634c0(pvVar11,uVar10);
    break;
  case 0xc:
  case 0xd:
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2200,0);
    iVar6 = FUN_1007da300("devices.audio.core",0);
    if (iVar6 == 1) {
      pvVar11 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar13 = (long *)0x0;
      if (pvVar11 == (void *)0x0) goto LAB_10025a703;
      FUN_1002a00b0(pvVar11,uVar10);
    }
    else {
      if (iVar6 == 2) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",1,"Experimental sound core used !!!");
        }
        pvVar11 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar13 = (long *)0x0;
        if (pvVar11 != (void *)0x0) {
          FUN_1002a0b70(pvVar11,uVar10);
          plVar13 = (long *)((long)pvVar11 + 0x10);
        }
        goto LAB_10025a703;
      }
      pvVar11 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar13 = (long *)0x0;
      if (pvVar11 == (void *)0x0) goto LAB_10025a703;
      FUN_1002a00b0(pvVar11,uVar10);
    }
    plVar13 = (long *)((long)pvVar11 + 8);
    goto LAB_10025a703;
  case 0xf:
    pvVar11 = operator_new(0x318,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar13 = (long *)0x0;
    if (pvVar11 == (void *)0x0) goto LAB_10025a703;
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d8,0);
    FUN_1002b6200(pvVar11,uVar10);
    break;
  case 0x12:
    uVar10 = ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2228,0);
    if (*(int *)(lVar2 + 0x584) != 0) {
      pvVar11 = operator_new(0x3a140,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar13 = (long *)0x0;
      if (pvVar11 != (void *)0x0) {
        FUN_100288fd0(pvVar11,uVar10);
        plVar13 = (long *)((long)pvVar11 + 0x68);
      }
      goto LAB_10025a703;
    }
LAB_10025a6d0:
    plVar13 = (long *)0x0;
    goto LAB_10025a703;
  }
  plVar13 = (long *)((long)pvVar11 + 0x68);
LAB_10025a703:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar12 = local_38 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return plVar13;
}

