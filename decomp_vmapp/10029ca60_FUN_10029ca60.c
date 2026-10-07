
long * FUN_10029ca60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  if (2 < DAT_1011b55f8) {
    uVar3 = FUN_10029c850(param_1);
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    uVar4 = FUN_10029c850(param_2);
    FUN_1008e3970("AudioT","LocalDevices",3,
                  "[IAudioTransform] create tranform: %s/%u-ch/%uHz -> %s/%u-ch/%uHz",uVar3,iVar1,
                  iVar2,uVar4,param_2[1],param_2[2]);
  }
  if ((char)param_1[0x2a] == '\0') {
    iVar1 = FUN_10029c880(param_1,param_2);
    if ((iVar1 == 0) && (*(char *)((long)param_1 + 0xa9) != '\0')) {
      plVar6 = (long *)FUN_10029cf40(param_1,param_2);
    }
    else {
      iVar1 = FUN_10029c880(param_1,param_2);
      if ((iVar1 == -1) || (*param_1 != 1)) {
        iVar1 = FUN_10029c880(param_1,param_2);
        if ((iVar1 == -1) || (2 < *param_1 - 2U)) {
          iVar2 = FUN_10029c880(param_1,param_2);
          iVar1 = *param_1;
          if ((iVar2 == -1) || (iVar1 != 5)) {
            iVar2 = param_2[2];
            iVar7 = param_1[2];
            if (iVar1 == *param_2) {
              if ((iVar1 == 1) &&
                 (iVar7 == iVar2 << 3 ||
                  (iVar7 == iVar2 * 4 || (iVar7 == iVar2 || iVar7 == iVar2 * 2)))) {
                plVar6 = (long *)FUN_10029d480(param_1,param_2);
              }
              else {
                iVar2 = param_1[2];
                iVar7 = param_2[2];
                if ((iVar2 == iVar7 << 3 ||
                     (iVar2 == iVar7 * 4 || (iVar2 == iVar7 * 2 || iVar2 == iVar7))) &&
                   (iVar1 - 2U < 3)) {
                  plVar6 = (long *)FUN_10029d5f0(param_1,param_2);
                }
                else {
                  iVar7 = param_1[2];
                  iVar2 = param_2[2];
                  if ((iVar1 != 5) ||
                     (iVar7 != iVar2 * 8 &&
                      (iVar7 != iVar2 * 4 && (iVar7 != iVar2 && iVar7 != iVar2 * 2))))
                  goto LAB_10029cd30;
                  plVar6 = (long *)FUN_10029d760(param_1,param_2);
                }
              }
            }
            else {
LAB_10029cd30:
              if (((((iVar7 != iVar2 * 8) && (iVar7 != iVar2 * 4)) && (iVar7 != iVar2)) &&
                  (iVar7 != iVar2 * 2)) || ((2 < iVar1 - 2U || (*param_2 != 1))))
              goto joined_r0x00010029cdc3;
              plVar6 = (long *)FUN_10029d8d0(param_1,param_2);
            }
          }
          else {
            plVar6 = (long *)FUN_10029d330(param_1,param_2);
          }
        }
        else {
          plVar6 = (long *)FUN_10029d1e0(param_1,param_2);
        }
      }
      else {
        plVar6 = (long *)FUN_10029d090(param_1,param_2);
      }
    }
  }
  else {
    plVar5 = operator_new(0x1a8,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      _memcpy(plVar5 + 1,param_1,0xb8);
      _memcpy(plVar5 + 0x18,param_2,0xb8);
      *(undefined4 *)(plVar5 + 0x2f) = 0;
      plVar5[0x34] = 0;
      plVar5[0x33] = 0;
      plVar5[0x32] = 0;
      plVar5[0x31] = 0;
      plVar5[0x30] = 0;
      *plVar5 = (long)&PTR_FUN_100bb2198;
      plVar6 = plVar5;
    }
  }
  if (plVar6 != (long *)0x0) {
    if (DAT_1011b55f8 < 3) {
      return plVar6;
    }
    uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_1008e3970("AudioT","LocalDevices",3,"[IAudioTransform] \'%s\' selected",uVar3);
    return plVar6;
  }
joined_r0x00010029cdc3:
  if (2 < DAT_1011b55f8) {
    uVar3 = FUN_10029c850(param_1);
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    uVar4 = FUN_10029c850(param_2);
    FUN_1008e3970("AudioT","LocalDevices",3,
                  "[IAudioTransform] not supported transform: %s/%u-ch/%uHz -> %s/%u-ch/%uHz",uVar3,
                  iVar1,iVar2,uVar4,param_2[1],param_2[2]);
  }
  return (long *)0x0;
}

