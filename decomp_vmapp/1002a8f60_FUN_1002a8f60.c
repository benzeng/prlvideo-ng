
undefined1 FUN_1002a8f60(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  code *pcVar6;
  
  uVar3 = FUN_1007da5e0("devices.vgpu.vmiop_display_path",
                        "@executable_path/../../../vmiop-display.dylib");
  lVar4 = _dlopen(uVar3,6);
  *(long *)(param_1 + 0x11888) = lVar4;
  if (lVar4 == 0) {
    uVar3 = _dlerror();
    FUN_1008e3970("","LocalDevices",0,"VGPU [Init] dlopen failed \'%s\'",uVar3);
    return 0;
  }
  piVar5 = (int *)_dlsym(lVar4,"vmioplugin_vmiop_parallels");
  if ((((piVar5 == (int *)0x0) || (*piVar5 != 0x58)) || (piVar5[1] != 0x10000)) ||
     (((*(char **)(piVar5 + 2) == (char *)0x0 ||
       (iVar1 = _strcmp(*(char **)(piVar5 + 2),"VMIOP_PLUGIN_SIGNATURE"), iVar1 != 0)) ||
      ((*(char **)(piVar5 + 4) == (char *)0x0 ||
       (iVar1 = _strcmp(*(char **)(piVar5 + 4),"vmioplugin"), iVar1 != 0)))))) {
    FUN_1008e3970("","LocalDevices",0,"VGPU [Init] failed to dlsym vmioplugin");
    if (*(long *)(param_1 + 0x11890) != 0) {
      (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
      *(undefined8 *)(param_1 + 0x11890) = 0;
    }
    if (*(long *)(param_1 + 0x11898) != 0) {
      (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
      *(undefined8 *)(param_1 + 0x11898) = 0;
    }
    if (*(long *)(param_1 + 0x11888) != 0) {
      _dlclose();
      *(undefined8 *)(param_1 + 0x11888) = 0;
    }
    if (DAT_1011b55f8 < 3) {
      return 0;
    }
  }
  else {
    iVar1 = (**(code **)(piVar5 + 6))(&PTR_FUN_101116ad0);
    if (iVar1 == 0) {
      *(int **)(param_1 + 0x11898) = piVar5;
      piVar5 = (int *)_dlsym(*(undefined8 *)(param_1 + 0x11888),"vmiop_display_vmiop_plugin");
      if ((((piVar5 == (int *)0x0) ||
           (iVar1 = *piVar5, iVar2 = FUN_1007da300("devices.vgpu.vmiop_display_length",0x68),
           iVar1 != iVar2)) ||
          ((piVar5[1] != 0x10000 ||
           (((*(char **)(piVar5 + 2) == (char *)0x0 ||
             (iVar1 = _strcmp(*(char **)(piVar5 + 2),"VMIOP_PLUGIN_SIGNATURE"), iVar1 != 0)) ||
            (*(char **)(piVar5 + 4) == (char *)0x0)))))) ||
         (iVar1 = _strcmp(*(char **)(piVar5 + 4),"vmiop-display"), iVar1 != 0)) {
        FUN_1008e3970("","LocalDevices",0,"VGPU [Init] failed to dlsym vmiop-display");
        if (*(long *)(param_1 + 0x11890) != 0) {
          (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
          *(undefined8 *)(param_1 + 0x11890) = 0;
        }
        if (*(long *)(param_1 + 0x11898) != 0) {
          (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
          *(undefined8 *)(param_1 + 0x11898) = 0;
        }
        if (*(long *)(param_1 + 0x11888) != 0) {
          _dlclose();
          *(undefined8 *)(param_1 + 0x11888) = 0;
        }
        if (DAT_1011b55f8 < 3) {
          return 0;
        }
      }
      else {
        iVar1 = (**(code **)(piVar5 + 10))(1);
        if (iVar1 == 0) {
          *(int **)(param_1 + 0x11890) = piVar5;
          iVar1 = FUN_1007da300("devices.vgpu.vmio_prsntn_init_ndrv_control",0);
          if (iVar1 == 0) {
LAB_1002a93c5:
            *(undefined4 *)(param_1 + 0x85c) = 0x19a;
            iVar1 = FUN_1007da300("devices.vgpu.set_window_size",0);
            *(bool *)(param_1 + 0x118a1) = iVar1 != 0;
            iVar1 = FUN_1007da300("devices.vgpu.recreate_window_context",0);
            *(bool *)(param_1 + 0x118a2) = iVar1 != 0;
            FUN_1008e3970("","LocalDevices",0,"VGPU [Init]");
            return 1;
          }
          pcVar6 = (code *)_dlsym(*(undefined8 *)(param_1 + 0x11888),"vmio_prsntn_init_ndrv_control"
                                 );
          if (pcVar6 == (code *)0x0) {
            FUN_1008e3970("","LocalDevices",0,
                          "VGPU [Init] failed to dlsym vmio_prsntn_init_ndrv_control");
            if (*(long *)(param_1 + 0x11890) != 0) {
              (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
              *(undefined8 *)(param_1 + 0x11890) = 0;
            }
            if (*(long *)(param_1 + 0x11898) != 0) {
              (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
              *(undefined8 *)(param_1 + 0x11898) = 0;
            }
            if (*(long *)(param_1 + 0x11888) != 0) {
              _dlclose();
              *(undefined8 *)(param_1 + 0x11888) = 0;
            }
            if (DAT_1011b55f8 < 3) {
              return 0;
            }
          }
          else {
            iVar1 = (*pcVar6)();
            if (iVar1 == 0) goto LAB_1002a93c5;
            FUN_1008e3970("","LocalDevices",0,"VGPU [Init] vmio_prsntn_init_ndrv_control error=%d",
                          iVar1);
            if (*(long *)(param_1 + 0x11890) != 0) {
              (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
              *(undefined8 *)(param_1 + 0x11890) = 0;
            }
            if (*(long *)(param_1 + 0x11898) != 0) {
              (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
              *(undefined8 *)(param_1 + 0x11898) = 0;
            }
            if (*(long *)(param_1 + 0x11888) != 0) {
              _dlclose();
              *(undefined8 *)(param_1 + 0x11888) = 0;
            }
            if (DAT_1011b55f8 < 3) {
              return 0;
            }
          }
        }
        else {
          FUN_1008e3970("","LocalDevices",0,"VGPU [Init] vmiop-display init_routine failed");
          if (*(long *)(param_1 + 0x11890) != 0) {
            (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
            *(undefined8 *)(param_1 + 0x11890) = 0;
          }
          if (*(long *)(param_1 + 0x11898) != 0) {
            (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
            *(undefined8 *)(param_1 + 0x11898) = 0;
          }
          if (*(long *)(param_1 + 0x11888) != 0) {
            _dlclose();
            *(undefined8 *)(param_1 + 0x11888) = 0;
          }
          if (DAT_1011b55f8 < 3) {
            return 0;
          }
        }
      }
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"VGPU [Init] vmioplugin init_routine failed");
      if (*(long *)(param_1 + 0x11890) != 0) {
        (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
        *(undefined8 *)(param_1 + 0x11890) = 0;
      }
      if (*(long *)(param_1 + 0x11898) != 0) {
        (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
        *(undefined8 *)(param_1 + 0x11898) = 0;
      }
      if (*(long *)(param_1 + 0x11888) != 0) {
        _dlclose();
        *(undefined8 *)(param_1 + 0x11888) = 0;
      }
      if (DAT_1011b55f8 < 3) {
        return 0;
      }
    }
  }
  FUN_1008e3970("","LocalDevices",3,"VGPU [Shutdown]");
  return 0;
}

