
undefined1
FUN_10040b2e0(long param_1,ulong param_2,char param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  void *pvVar2;
  long *plVar3;
  char *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  
  *(undefined1 *)(param_1 + 0x46) = param_7;
  FUN_1006d5830(param_1 + 0x10);
  plVar3 = (long *)(param_1 + 0x38);
  plVar6 = plVar3;
  if (param_3 != '\0') {
    plVar6 = (long *)(param_1 + 0x30);
  }
  QMutex::lock();
  if (*plVar6 != 0) {
    FUN_10040b530(param_1,param_3,1);
  }
  switch(param_2 & 0xffffffff) {
  case 0:
  case 3:
    if (0 < DAT_1011b55f8) {
      pcVar4 = "output";
      if (param_3 != '\0') {
        pcVar4 = "input";
      }
      FUN_1008e3970("","PrlAudioCore",1,
                    "CAudioUnitManager::CreateAudioUnit trying to create invalid %s device",pcVar4);
    }
  default:
    pcVar4 = "output";
    if (param_3 != '\0') {
      pcVar4 = "input";
    }
    uVar5 = 0;
    FUN_1008e3970("","PrlAudioCore",0,"CreateAudioUnit failed for %s deivce: %lu.",pcVar4,
                  param_2 >> 0x20);
    goto LAB_10040b3f1;
  case 1:
    if (*(char *)(param_1 + 0x46) == '\0') {
      pvVar2 = operator_new(0x70);
      FUN_10040d710(pvVar2,param_2,param_3,param_5,param_6);
    }
    else {
      pvVar2 = operator_new(0x70);
      FUN_10040d7c0(pvVar2,param_2,param_3,param_5,param_6);
    }
    break;
  case 2:
    pvVar2 = operator_new(0x70);
    FUN_10040c3d0(pvVar2,param_2,param_3,param_5,param_6);
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  if (param_3 != '\0') {
    plVar3 = (long *)(param_1 + 0x30);
  }
  *plVar3 = (long)pvVar2;
  cVar1 = FUN_10040c710(pvVar2,param_4);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_10040ffc0(DAT_1011cc6c8,param_3,1);
    uVar5 = 1;
    FUN_100410020(DAT_1011cc6c8,param_3,1);
  }
LAB_10040b3f1:
  QMutex::unlock();
  return uVar5;
}

