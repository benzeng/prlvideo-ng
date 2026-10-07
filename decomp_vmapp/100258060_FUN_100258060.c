
void FUN_100258060(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_1002ef640(param_3);
  if (iVar2 == 4) {
    uVar3 = FUN_1002ef000(param_3);
    uVar4 = FUN_1002ef010(param_3);
    FUN_1008e3970("","LocalDevices",0,"dev(%u:%u): attempt to queue sync-req in terminated state!",
                  uVar3,uVar4);
  }
  QMutex::lock();
  *(undefined1 *)(param_2 + 2) = 0;
  plVar1 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  param_2[1] = (long)plVar1;
  *plVar1 = (long)param_2;
  FUN_1002ef680(param_3);
  QMutex::unlock();
  return;
}

