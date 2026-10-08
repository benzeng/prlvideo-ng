
undefined4 FUN_1008b7fda(uint *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  xmlAutomataStatePtr pxVar2;
  uint *local_90;
  xmlChar local_88 [64];
  xmlAutomataStatePtr local_48;
  xmlChar *local_40;
  xmlAutomataStatePtr local_38;
  xmlAutomataStatePtr local_30;
  uint local_24;
  xmlAutomataStatePtr local_20;
  xmlAutomataStatePtr local_18;
  uint local_c;
  
  if (param_1 == (uint *)0x0) {
    FUN_1008b763a(param_2,0,1,"Found NULL content in content model of %s\n",param_3,0,0);
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 == 2) {
    local_48 = *(xmlAutomataStatePtr *)(param_2 + 0x68);
    local_40 = _xmlBuildQName(*(xmlChar **)(param_1 + 2),*(xmlChar **)(param_1 + 10),local_88,0x32);
    if (local_40 == (xmlChar *)0x0) {
      FUN_1008b7324(param_2,"Building content model");
      return 0;
    }
    uVar1 = param_1[1];
    if (uVar1 == 2) {
      pxVar2 = _xmlAutomataNewTransition
                         (*(xmlAutomataPtr *)(param_2 + 0x60),
                          *(xmlAutomataStatePtr *)(param_2 + 0x68),(xmlAutomataStatePtr)0x0,local_40
                          ,(void *)0x0);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      _xmlAutomataNewEpsilon
                (*(xmlAutomataPtr *)(param_2 + 0x60),local_48,
                 *(xmlAutomataStatePtr *)(param_2 + 0x68));
    }
    else if (uVar1 < 3) {
      if (uVar1 == 1) {
        pxVar2 = _xmlAutomataNewTransition
                           (*(xmlAutomataPtr *)(param_2 + 0x60),
                            *(xmlAutomataStatePtr *)(param_2 + 0x68),(xmlAutomataStatePtr)0x0,
                            local_40,(void *)0x0);
        *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      }
    }
    else if (uVar1 == 3) {
      pxVar2 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_2 + 0x60),
                          *(xmlAutomataStatePtr *)(param_2 + 0x68),(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      _xmlAutomataNewTransition
                (*(xmlAutomataPtr *)(param_2 + 0x60),*(xmlAutomataStatePtr *)(param_2 + 0x68),
                 *(xmlAutomataStatePtr *)(param_2 + 0x68),local_40,(void *)0x0);
    }
    else if (uVar1 == 4) {
      pxVar2 = _xmlAutomataNewTransition
                         (*(xmlAutomataPtr *)(param_2 + 0x60),
                          *(xmlAutomataStatePtr *)(param_2 + 0x68),(xmlAutomataStatePtr)0x0,local_40
                          ,(void *)0x0);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      _xmlAutomataNewTransition
                (*(xmlAutomataPtr *)(param_2 + 0x60),*(xmlAutomataStatePtr *)(param_2 + 0x68),
                 *(xmlAutomataStatePtr *)(param_2 + 0x68),local_40,(void *)0x0);
    }
    if ((local_88 != local_40) && (*(xmlChar **)(param_1 + 2) != local_40)) {
      (*(code *)_xmlFree)(local_40);
    }
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 1) {
        FUN_1008b763a(param_2,0,1,"Found PCDATA in content model of %s\n",param_3,0,0);
        return 0;
      }
LAB_1008b8076:
      FUN_1008b74a8(param_2,1,"ContentModel broken for element %s\n",param_3);
      return 0;
    }
    local_90 = param_1;
    if (uVar1 == 3) {
      local_38 = *(xmlAutomataStatePtr *)(param_2 + 0x68);
      local_24 = param_1[1];
      if (local_24 != 1) {
        pxVar2 = _xmlAutomataNewEpsilon
                           (*(xmlAutomataPtr *)(param_2 + 0x60),local_38,(xmlAutomataStatePtr)0x0);
        *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
        local_38 = *(xmlAutomataStatePtr *)(param_2 + 0x68);
      }
      do {
        FUN_1008b7fda(*(undefined8 *)(local_90 + 4),param_2,param_3);
        local_90 = *(uint **)(local_90 + 6);
        if (*local_90 != 3) break;
      } while (local_90[1] == 1);
      FUN_1008b7fda(local_90,param_2,param_3);
      local_30 = *(xmlAutomataStatePtr *)(param_2 + 0x68);
      pxVar2 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_2 + 0x60),local_30,(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      if (local_24 == 2) {
        _xmlAutomataNewEpsilon
                  (*(xmlAutomataPtr *)(param_2 + 0x60),local_38,
                   *(xmlAutomataStatePtr *)(param_2 + 0x68));
      }
      else if (2 < local_24) {
        if (local_24 == 3) {
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_2 + 0x60),local_38,
                     *(xmlAutomataStatePtr *)(param_2 + 0x68));
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_2 + 0x60),local_30,local_38);
        }
        else if (local_24 == 4) {
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_2 + 0x60),local_30,local_38);
        }
      }
    }
    else {
      if (uVar1 != 4) goto LAB_1008b8076;
      local_c = param_1[1];
      if ((local_c == 4) || (local_c == 3)) {
        pxVar2 = _xmlAutomataNewEpsilon
                           (*(xmlAutomataPtr *)(param_2 + 0x60),
                            *(xmlAutomataStatePtr *)(param_2 + 0x68),(xmlAutomataStatePtr)0x0);
        *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      }
      local_20 = *(xmlAutomataStatePtr *)(param_2 + 0x68);
      local_18 = _xmlAutomataNewState(*(xmlAutomataPtr *)(param_2 + 0x60));
      do {
        *(xmlAutomataStatePtr *)(param_2 + 0x68) = local_20;
        FUN_1008b7fda(*(undefined8 *)(local_90 + 4),param_2,param_3);
        _xmlAutomataNewEpsilon
                  (*(xmlAutomataPtr *)(param_2 + 0x60),*(xmlAutomataStatePtr *)(param_2 + 0x68),
                   local_18);
        local_90 = *(uint **)(local_90 + 6);
        if (*local_90 != 4) break;
      } while (local_90[1] == 1);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = local_20;
      FUN_1008b7fda(local_90,param_2,param_3);
      _xmlAutomataNewEpsilon
                (*(xmlAutomataPtr *)(param_2 + 0x60),*(xmlAutomataStatePtr *)(param_2 + 0x68),
                 local_18);
      pxVar2 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_2 + 0x60),local_18,(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_2 + 0x68) = pxVar2;
      if (local_c == 2) {
        _xmlAutomataNewEpsilon
                  (*(xmlAutomataPtr *)(param_2 + 0x60),local_20,
                   *(xmlAutomataStatePtr *)(param_2 + 0x68));
      }
      else if (2 < local_c) {
        if (local_c == 3) {
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_2 + 0x60),local_20,
                     *(xmlAutomataStatePtr *)(param_2 + 0x68));
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_2 + 0x60),local_18,local_20);
        }
        else if (local_c == 4) {
          _xmlAutomataNewEpsilon(*(xmlAutomataPtr *)(param_2 + 0x60),local_18,local_20);
        }
      }
    }
  }
  return 1;
}

