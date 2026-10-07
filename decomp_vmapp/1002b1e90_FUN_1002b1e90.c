
void FUN_1002b1e90(long param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*(long *)(param_1 + 0x11888) != 0) {
    iVar1 = *param_2;
    if (iVar1 == 0x76f) {
      if (param_2[4] == 0) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x38))
                          (param_2[1],param_2[2],param_2 + 3);
      }
      else {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x40))(param_2[1],param_2[2],param_2[3])
        ;
      }
      if (iVar1 != 0) {
        if (param_2[4] == 0) {
          pcVar3 = "read";
        }
        else {
          pcVar3 = "write";
        }
        pcVar2 = "VGPU PortIO %s failed with error %d";
LAB_1002b1fe9:
        FUN_1008e3970("","LocalDevices",0,pcVar2,pcVar3);
        return;
      }
    }
    else if (iVar1 == 0x76e) {
      if (param_2[4] == 0) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x48))
                          (param_2[1],param_2[2],param_2 + 3);
      }
      else {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x50))(param_2[1],param_2[2],param_2[3])
        ;
      }
      if (iVar1 != 0) {
        if (param_2[4] == 0) {
          pcVar3 = "read";
        }
        else {
          pcVar3 = "write";
        }
        pcVar2 = "VGPU MemIO %s failed with error %d";
        goto LAB_1002b1fe9;
      }
    }
    else if (iVar1 == 0x76c) {
      if (param_2[4] == 0) {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x28))
                          (param_2[1],param_2[2],param_2 + 3);
      }
      else {
        iVar1 = (**(code **)(*(long *)(param_1 + 0x11898) + 0x30))(param_2[1],param_2[2],param_2[3])
        ;
      }
      if (iVar1 != 0) {
        if (param_2[4] == 0) {
          pcVar3 = "read";
        }
        else {
          pcVar3 = "write";
        }
        pcVar2 = "VGPU PciConfig %s failed with error %d";
        goto LAB_1002b1fe9;
      }
    }
  }
  return;
}

