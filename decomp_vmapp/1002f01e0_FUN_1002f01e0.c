
void FUN_1002f01e0(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = FUN_1002f03f0(param_1);
    uVar8 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 8) + uVar8 * 8) != 0) {
        QMutex::lock();
        iVar4 = CVmDevice::getConnected();
        QMutex::unlock();
        if (iVar4 == 1) {
          uVar1 = *(uint *)(param_1 + 0x14);
          uVar7 = 1 << ((byte)uVar8 & 0x1f);
          cVar2 = FUN_1002f04d0(*(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8));
          if (cVar2 == '\0') {
            if ((uVar7 & uVar1) == 0) {
              cVar2 = FUN_100272b10(*(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8),1);
              if (cVar2 == '\0') {
                if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("","LocalDevices",1,"VMNET(%d) Link is not connected.",
                                uVar8 & 0xffffffff);
                }
                if (iVar3 < 0x3c) {
                  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | uVar7;
                }
              }
            }
          }
          else {
            *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | uVar7;
            FUN_100272b10(*(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8),0);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < 0x10);
    if (*(int *)(param_1 + 0x14) != 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",1,"Scheduling reconnectTime");
        }
        *(undefined1 *)(param_1 + 0x10) = 1;
        FUN_10010dd40(5000,FUN_1002f0b60,param_1);
        return;
      }
      if (0 < DAT_1011b55f8) {
        pcVar5 = "reconnectTimer is already pending and was not restarted";
        uVar6 = 1;
        goto LAB_1002f0352;
      }
    }
  }
  else if (2 < DAT_1011b55f8) {
    pcVar5 = "ignore ip-config change since system is sleeping";
    uVar6 = 3;
LAB_1002f0352:
    FUN_1008e3970("","LocalDevices",uVar6,pcVar5);
    return;
  }
  return;
}

