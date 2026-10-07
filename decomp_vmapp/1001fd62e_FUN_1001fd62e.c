
void FUN_1001fd62e(long param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  xmlAutomataStatePtr pxVar3;
  xmlAutomataStatePtr pxVar4;
  xmlAutomataStatePtr pxVar5;
  xmlAutomataStatePtr pxVar6;
  undefined8 uVar7;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  long *local_b0;
  long local_90;
  long local_60;
  long local_20;
  
  if (param_2 == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaBuildAContentModel","particle is NULL");
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaBuildAContentModel","no term on particle");
  }
  else {
    switch(**(undefined4 **)(param_2 + 0x18)) {
    default:
      uVar7 = FUN_1001e6a14(**(undefined4 **)(param_2 + 0x18));
      FUN_1001e8c29(param_1,"xmlSchemaBuildAContentModel",
                    "found unexpected term of type \'%s\' in content model",uVar7,0);
      break;
    case 2:
      pvVar1 = *(void **)(param_2 + 0x18);
      pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
      pxVar3 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
      if (*(int *)(param_2 + 0x24) == 1) {
        if (*(int *)((long)pvVar1 + 0x2c) == 1) {
          pxVar4 = _xmlAutomataNewTransition2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0,
                              (xmlChar *)"*",(xmlChar *)"*",pvVar1);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar4;
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar3);
          pxVar4 = _xmlAutomataNewTransition2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0,
                              (xmlChar *)"*",(xmlChar *)0x0,pvVar1);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar4;
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar3);
        }
        else if (*(long *)((long)pvVar1 + 0x30) == 0) {
          if (*(long *)((long)pvVar1 + 0x38) != 0) {
            pxVar4 = _xmlAutomataNewNegTrans
                               (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar3,(xmlChar *)"*",
                                *(xmlChar **)(*(long *)((long)pvVar1 + 0x38) + 8),pvVar1);
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar4;
          }
        }
        else {
          local_b0 = *(long **)((long)pvVar1 + 0x30);
          do {
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
            pxVar4 = _xmlAutomataNewTransition2
                               (*(xmlAutomataPtr *)(param_1 + 0x78),
                                *(xmlAutomataStatePtr *)(param_1 + 0x90),(xmlAutomataStatePtr)0x0,
                                (xmlChar *)"*",(xmlChar *)local_b0[1],pvVar1);
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar4;
            _xmlAutomataNewEpsilon
                      (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                       pxVar3);
            local_b0 = (long *)*local_b0;
          } while (local_b0 != (long *)0x0);
        }
      }
      else {
        if (*(int *)(param_2 + 0x24) == 0x40000000) {
          local_e8 = 0x40000000;
        }
        else {
          local_e8 = *(int *)(param_2 + 0x24) + -1;
        }
        if (*(int *)(param_2 + 0x20) < 1) {
          local_e4 = 0;
        }
        else {
          local_e4 = *(int *)(param_2 + 0x20) + -1;
        }
        iVar2 = _xmlAutomataNewCounter(*(xmlAutomataPtr *)(param_1 + 0x78),local_e4,local_e8);
        pxVar4 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
        if (*(int *)((long)pvVar1 + 0x2c) == 1) {
          pxVar5 = _xmlAutomataNewTransition2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0,
                              (xmlChar *)"*",(xmlChar *)"*",pvVar1);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar5;
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar4);
          pxVar5 = _xmlAutomataNewTransition2
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0,
                              (xmlChar *)"*",(xmlChar *)0x0,pvVar1);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar5;
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar4);
        }
        else if (*(long *)((long)pvVar1 + 0x30) == 0) {
          if (*(long *)((long)pvVar1 + 0x38) != 0) {
            pxVar5 = _xmlAutomataNewNegTrans
                               (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar4,(xmlChar *)"*",
                                *(xmlChar **)(*(long *)((long)pvVar1 + 0x38) + 8),pvVar1);
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar5;
          }
        }
        else {
          local_b0 = *(long **)((long)pvVar1 + 0x30);
          do {
            pxVar5 = _xmlAutomataNewTransition2
                               (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0,
                                (xmlChar *)"*",(xmlChar *)local_b0[1],pvVar1);
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar5;
            _xmlAutomataNewEpsilon
                      (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                       pxVar4);
            local_b0 = (long *)*local_b0;
          } while (local_b0 != (long *)0x0);
        }
        _xmlAutomataNewCountedTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar4,pxVar6,iVar2);
        _xmlAutomataNewCounterTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar4,pxVar3,iVar2);
      }
      if (*(int *)(param_2 + 0x20) == 0) {
        _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar3);
      }
      *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar3;
      break;
    case 6:
      if ((*(int *)(param_2 + 0x20) == 1) && (*(int *)(param_2 + 0x24) == 1)) {
        for (local_90 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_90 != 0;
            local_90 = *(long *)(local_90 + 0x10)) {
          FUN_1001fd62e(param_1,local_90);
        }
      }
      else {
        pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
        if (*(int *)(param_2 + 0x24) < 0x40000000) {
          if ((*(int *)(param_2 + 0x24) < 2) && (*(int *)(param_2 + 0x20) < 2)) {
            for (local_90 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_90 != 0;
                local_90 = *(long *)(local_90 + 0x10)) {
              FUN_1001fd62e(param_1,local_90);
            }
            if (*(int *)(param_2 + 0x20) == 0) {
              _xmlAutomataNewEpsilon
                        (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,
                         *(xmlAutomataStatePtr *)(param_1 + 0x90));
            }
          }
          else {
            pxVar6 = _xmlAutomataNewEpsilon
                               (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0)
            ;
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
            pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
            iVar2 = _xmlAutomataNewCounter
                              (*(xmlAutomataPtr *)(param_1 + 0x78),*(int *)(param_2 + 0x20) + -1,
                               *(int *)(param_2 + 0x24) + -1);
            for (local_90 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_90 != 0;
                local_90 = *(long *)(local_90 + 0x10)) {
              FUN_1001fd62e(param_1,local_90);
            }
            pxVar3 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
            _xmlAutomataNewCountedTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar3,pxVar6,iVar2);
            pxVar3 = _xmlAutomataNewCounterTrans
                               (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar3,(xmlAutomataStatePtr)0x0,
                                iVar2);
            *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar3;
            if (*(int *)(param_2 + 0x20) == 0) {
              _xmlAutomataNewEpsilon
                        (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,
                         *(xmlAutomataStatePtr *)(param_1 + 0x90));
            }
          }
        }
        else if (*(int *)(param_2 + 0x20) < 2) {
          pxVar6 = _xmlAutomataNewEpsilon
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
          pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
          for (local_90 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_90 != 0;
              local_90 = *(long *)(local_90 + 0x10)) {
            FUN_1001fd62e(param_1,local_90);
          }
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar6);
          pxVar3 = _xmlAutomataNewEpsilon
                             (*(xmlAutomataPtr *)(param_1 + 0x78),
                              *(xmlAutomataStatePtr *)(param_1 + 0x90),(xmlAutomataStatePtr)0x0);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar3;
          if (*(int *)(param_2 + 0x20) == 0) {
            _xmlAutomataNewEpsilon
                      (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,
                       *(xmlAutomataStatePtr *)(param_1 + 0x90));
          }
        }
        else {
          pxVar6 = _xmlAutomataNewEpsilon
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,(xmlAutomataStatePtr)0x0);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
          pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
          iVar2 = _xmlAutomataNewCounter
                            (*(xmlAutomataPtr *)(param_1 + 0x78),*(int *)(param_2 + 0x20) + -1,
                             0x40000000);
          for (local_90 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_90 != 0;
              local_90 = *(long *)(local_90 + 0x10)) {
            FUN_1001fd62e(param_1,local_90);
          }
          pxVar3 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
          _xmlAutomataNewCountedTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar3,pxVar6,iVar2);
          pxVar6 = _xmlAutomataNewCounterTrans
                             (*(xmlAutomataPtr *)(param_1 + 0x78),pxVar3,(xmlAutomataStatePtr)0x0,
                              iVar2);
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
        }
      }
      break;
    case 7:
      pxVar6 = *(xmlAutomataStatePtr *)(param_1 + 0x90);
      pxVar3 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
      if (*(int *)(param_2 + 0x24) == 1) {
        for (local_60 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_60 != 0;
            local_60 = *(long *)(local_60 + 0x10)) {
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
          FUN_1001fd62e(param_1,local_60);
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar3);
        }
      }
      else {
        if (*(int *)(param_2 + 0x24) == 0x40000000) {
          local_e0 = 0x40000000;
        }
        else {
          local_e0 = *(int *)(param_2 + 0x24) + -1;
        }
        if (*(int *)(param_2 + 0x20) < 1) {
          local_dc = 0;
        }
        else {
          local_dc = *(int *)(param_2 + 0x20) + -1;
        }
        iVar2 = _xmlAutomataNewCounter(*(xmlAutomataPtr *)(param_1 + 0x78),local_dc,local_e0);
        pxVar4 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
        pxVar5 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_1 + 0x78));
        for (local_60 = *(long *)(*(long *)(param_2 + 0x18) + 0x18); local_60 != 0;
            local_60 = *(long *)(local_60 + 0x10)) {
          *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar5;
          FUN_1001fd62e(param_1,local_60);
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0x78),*(xmlAutomataStatePtr *)(param_1 + 0x90),
                     pxVar4);
        }
        _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar5);
        _xmlAutomataNewCountedTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar4,pxVar5,iVar2);
        _xmlAutomataNewCounterTrans(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar4,pxVar3,iVar2);
      }
      if (*(int *)(param_2 + 0x20) == 0) {
        _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_1 + 0x78),pxVar6,pxVar3);
      }
      *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar3;
      break;
    case 8:
      local_20 = *(long *)(*(long *)(param_2 + 0x18) + 0x18);
      if (local_20 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x90);
        for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
          *(undefined8 *)(param_1 + 0x90) = uVar7;
          pvVar1 = *(void **)(local_20 + 0x18);
          if (pvVar1 == (void *)0x0) {
            FUN_1001e8d2a(param_1,"xmlSchemaBuildAContentModel","<element> particle has no term");
            return;
          }
          if ((*(uint *)((long)pvVar1 + 0x58) >> 0x11 & 1) == 0) {
            if ((*(int *)(local_20 + 0x20) == 1) && (*(int *)(local_20 + 0x24) == 1)) {
              _xmlAutomataNewOnceTrans2
                        (*(xmlAutomataPtr *)(param_1 + 0x78),
                         *(xmlAutomataStatePtr *)(param_1 + 0x90),
                         *(xmlAutomataStatePtr *)(param_1 + 0x90),*(xmlChar **)((long)pvVar1 + 0x10)
                         ,*(xmlChar **)((long)pvVar1 + 0x60),1,1,pvVar1);
            }
            else if ((*(int *)(local_20 + 0x20) == 0) && (*(int *)(local_20 + 0x24) == 1)) {
              _xmlAutomataNewCountTrans2
                        (*(xmlAutomataPtr *)(param_1 + 0x78),
                         *(xmlAutomataStatePtr *)(param_1 + 0x90),
                         *(xmlAutomataStatePtr *)(param_1 + 0x90),*(xmlChar **)((long)pvVar1 + 0x10)
                         ,*(xmlChar **)((long)pvVar1 + 0x60),0,1,pvVar1);
            }
          }
          else {
            iVar2 = _xmlAutomataNewCounter
                              (*(xmlAutomataPtr *)(param_1 + 0x78),*(int *)(local_20 + 0x20),
                               *(int *)(local_20 + 0x24));
            FUN_1001fcfa3(param_1,local_20,iVar2,*(undefined8 *)(param_1 + 0x90));
          }
        }
        pxVar6 = _xmlAutomataNewAllTrans
                           (*(xmlAutomataPtr *)(param_1 + 0x78),
                            *(xmlAutomataStatePtr *)(param_1 + 0x90),(xmlAutomataStatePtr)0x0,
                            (uint)(*(int *)(param_2 + 0x20) == 0));
        *(xmlAutomataStatePtr *)(param_1 + 0x90) = pxVar6;
      }
      break;
    case 0xe:
      FUN_1001fd3ac(param_1,param_2);
      break;
    case 0x11:
      break;
    }
  }
  return;
}

