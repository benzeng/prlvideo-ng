
void FUN_100930cd4(long param_1,long param_2)

{
  void *data;
  int counter;
  xmlAutomataStatePtr pxVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_20;
  
  if ((*(uint *)(*(long *)(param_2 + 0x18) + 0x58) >> 0x11 & 1) == 0) {
    data = *(void **)(param_2 + 0x18);
    if ((*(uint *)((long)data + 0x58) >> 4 & 1) == 0) {
      if (*(int *)(param_2 + 0x24) == 1) {
        local_20 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
        pxVar1 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0x78),local_20,(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)((long)data + 0x10),*(xmlChar **)((long)data + 0x60),data);
        *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar1;
      }
      else if ((*(int *)(param_2 + 0x24) < 0x40000000) || (1 < *(int *)(param_2 + 0x20))) {
        if (*(int *)(param_2 + 0x24) == 0x40000000) {
          local_40 = 0x40000000;
        }
        else {
          local_40 = *(int *)(param_2 + 0x24) + -1;
        }
        if (*(int *)(param_2 + 0x20) < 1) {
          local_3c = 0;
        }
        else {
          local_3c = *(int *)(param_2 + 0x20) + -1;
        }
        local_20 = _xmlAutomataNewEpsilon
                             (*(xmlAutomataPtr *)(param_1 + 0x78),
                              *(xmlAutomataStatePtr *)(param_1 + 0x90),(xmlAutomataStatePtr)0x0);
        counter = _xmlAutomataNewCounter(*(xmlAutomataPtr *)(param_1 + 0x78),local_3c,local_40);
        pxVar1 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0x78),local_20,(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)((long)data + 0x10),*(xmlChar **)((long)data + 0x60),data);
        *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar1;
        _xmlAutomataNewCountedTrans
                  (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                   local_20,counter);
        pxVar1 = _xmlAutomataNewCounterTrans
                           (*(xmlAutomataPtr *)(param_1 + 0x78),
                            *(xmlAutomataStatePtr *)(param_1 + 0x90),(xmlAutomataStatePtr)0x0,
                            counter);
        *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar1;
      }
      else {
        local_20 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
        pxVar1 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0x78),local_20,(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)((long)data + 0x10),*(xmlChar **)((long)data + 0x60),data);
        *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar1;
        _xmlAutomataNewEpsilon
                  (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                   local_20);
      }
      if (*(int *)(param_2 + 0x20) == 0) {
        _xmlAutomataNewEpsilon
                  (*(xmlAutomataPtr *)(param_1 + 0x78),local_20,
                   *(xmlAutomataStatePtr *)(param_1 + 0x90));
      }
    }
  }
  else {
    FUN_1009308cb(param_1,param_2,0xffffffff,0);
  }
  return;
}

