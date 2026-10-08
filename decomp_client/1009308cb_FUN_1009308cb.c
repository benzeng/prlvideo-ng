
void FUN_1009308cb(long param_1,long param_2,int param_3,xmlAutomataStatePtr param_4)

{
  void *pvVar1;
  xmlAutomataStatePtr from;
  undefined8 uVar2;
  int counter;
  long lVar3;
  undefined8 uVar4;
  xmlAutomataStatePtr pxVar5;
  xmlAutomataStatePtr pxVar6;
  int local_80;
  int local_7c;
  xmlAutomataStatePtr local_78;
  int local_2c;
  
  pvVar1 = *(void **)(param_2 + 0x18);
  from = *(xmlAutomataStatePtr *)(param_1 + 0x90);
  local_78 = param_4;
  if (param_4 == (xmlAutomataStatePtr)0x0) {
    local_78 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
  }
  lVar3 = FUN_10092280c(param_1,pvVar1);
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)((long)pvVar1 + 0x10);
    uVar4 = FUN_10091a4ff(param_2);
    FUN_10091b9cb(param_1,uVar4,0xbfd,
                  "Internal error: xmlSchemaBuildContentModelForSubstGroup, declaration is marked having a subst. group but none available.\n"
                  ,uVar2,0);
  }
  else {
    if (param_3 < 0) {
      if (*(int *)(param_2 + 0x24) == 1) {
        pxVar5 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0x78),from,(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),
                            pvVar1);
        _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,local_78);
        for (local_2c = 0; local_2c < *(int *)(*(long *)(lVar3 + 8) + 8); local_2c = local_2c + 1) {
          pvVar1 = *(void **)(**(long **)(lVar3 + 8) + (long)local_2c * 8);
          pxVar5 = _xmlAutomataNewOnceTrans2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),from,(xmlAutomataStatePtr)0x0,
                              *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),
                              1,1,pvVar1);
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,local_78);
        }
      }
      else {
        if (*(int *)(param_2 + 0x24) == 0x40000000) {
          local_80 = 0x40000000;
        }
        else {
          local_80 = *(int *)(param_2 + 0x24) + -1;
        }
        if (*(int *)(param_2 + 0x20) < 1) {
          local_7c = 0;
        }
        else {
          local_7c = *(int *)(param_2 + 0x20) + -1;
        }
        counter = _xmlAutomataNewCounter(*(xmlAutomataPtr *)(param_1 + 0x78),local_7c,local_80);
        pxVar5 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
        pxVar6 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0x78),from,(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),
                            pvVar1);
        _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar5);
        for (local_2c = 0; local_2c < *(int *)(*(long *)(lVar3 + 8) + 8); local_2c = local_2c + 1) {
          pvVar1 = *(void **)(**(long **)(lVar3 + 8) + (long)local_2c * 8);
          pxVar6 = _xmlAutomataNewTransition2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),from,(xmlAutomataStatePtr)0x0,
                              *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),
                              pvVar1);
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar5);
        }
        _xmlAutomataNewCountedTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,from,counter);
        _xmlAutomataNewCounterTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,local_78,counter);
      }
    }
    else {
      pxVar5 = _xmlAutomataNewCountedTrans
                         (*(xmlAutomataPtr *)(param_1 + 0x78),from,(xmlAutomataStatePtr)0x0,param_3)
      ;
      _xmlAutomataNewTransition2
                (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,local_78,
                 *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),pvVar1);
      for (local_2c = 0; local_2c < *(int *)(*(long *)(lVar3 + 8) + 8); local_2c = local_2c + 1) {
        pvVar1 = *(void **)(**(long **)(lVar3 + 8) + (long)local_2c * 8);
        _xmlAutomataNewTransition2
                  (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar5,local_78,
                   *(xmlChar **)((long)pvVar1 + 0x10),*(xmlChar **)((long)pvVar1 + 0x60),pvVar1);
      }
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),from,local_78);
    }
    *(xmlAutomataStatePtr *)(param_1 + 0x90) = local_78;
  }
  return;
}

