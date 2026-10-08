
int FUN_10096534a(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  xmlAutomataPtr pxVar3;
  xmlAutomataStatePtr pxVar4;
  xmlRegexpPtr pxVar5;
  undefined8 uVar6;
  int local_8c;
  int local_6c;
  long local_68;
  xmlAutomataStatePtr local_20;
  
  local_6c = 0;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    local_8c = -1;
  }
  else {
    switch(*param_2) {
    case 0:
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),
                          *(xmlAutomataStatePtr *)(param_1 + 0xf0),(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      break;
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x13:
      uVar6 = FUN_10096390c(param_2);
      _fprintf(*(FILE **)PTR____stderrp_1021e1848,"RNG internal error trying to compile %s\n",uVar6)
      ;
      break;
    case 3:
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),
                          *(xmlAutomataStatePtr *)(param_1 + 0xf0),(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      pxVar4 = *(xmlAutomataStatePtr *)(param_1 + 0xf0);
      FUN_10096534a(param_1,*(undefined8 *)(param_2 + 0xc));
      _xmlAutomataNewTransition
                (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0),
                 *(xmlAutomataStatePtr *)(param_1 + 0xf0),(xmlChar *)"#text",(void *)0x0);
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),pxVar4,(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      break;
    case 4:
      if ((*(long *)(param_1 + 0xe8) != 0) && (*(long *)(param_2 + 4) != 0)) {
        pxVar4 = _xmlAutomataNewTransition2
                           (*(xmlAutomataPtr *)(param_1 + 0xe8),
                            *(xmlAutomataStatePtr *)(param_1 + 0xf0),(xmlAutomataStatePtr)0x0,
                            *(xmlChar **)(param_2 + 4),*(xmlChar **)(param_2 + 6),param_2);
        *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      }
      if ((((byte)((uint)(int)*(short *)((long)param_2 + 0x62) >> 6) & 1) == 1) &&
         (*(short *)(param_2 + 0x18) != -0x19)) {
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
        uVar1 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined2 *)(param_2 + 0x18) = 0xffe7;
        local_68 = *(long *)(param_2 + 0xc);
        pxVar3 = _xmlNewAutomata();
        *(xmlAutomataPtr *)(param_1 + 0xe8) = pxVar3;
        if (*(long *)(param_1 + 0xe8) == 0) {
          return -1;
        }
        pxVar4 = _xmlAutomataGetInitState(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
        for (; local_68 != 0; local_68 = *(long *)(local_68 + 0x40)) {
          FUN_10096534a(param_1,local_68);
        }
        _xmlAutomataSetFinalState
                  (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0));
        pxVar5 = _xmlAutomataCompile(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(xmlRegexpPtr *)(param_2 + 0x1a) = pxVar5;
        iVar2 = _xmlRegexpIsDeterminist(*(xmlRegexpPtr *)(param_2 + 0x1a));
        if (iVar2 == 0) {
          _xmlRegFreeRegexp(*(xmlRegexpPtr *)(param_2 + 0x1a));
          *(undefined8 *)(param_2 + 0x1a) = 0;
        }
        _xmlFreeAutomata(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(undefined8 *)(param_1 + 0xf0) = uVar1;
        *(undefined8 *)(param_1 + 0xe8) = uVar6;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
        local_6c = FUN_100965b1c(param_1,param_2);
        *(undefined8 *)(param_1 + 0xe8) = uVar6;
      }
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x12:
      local_68 = *(long *)(param_2 + 0xc);
      while ((local_68 != 0 && (local_6c = FUN_10096534a(param_1,local_68), local_6c == 0))) {
        local_68 = *(long *)(local_68 + 0x40);
      }
      break;
    case 0xe:
      pxVar4 = *(xmlAutomataStatePtr *)(param_1 + 0xf0);
      FUN_10096534a(param_1,*(undefined8 *)(param_2 + 0xc));
      _xmlAutomataNewEpsilon
                (*(xmlAutomataPtr *)(param_1 + 0xe8),pxVar4,*(xmlAutomataStatePtr *)(param_1 + 0xf0)
                );
      break;
    case 0xf:
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),
                          *(xmlAutomataStatePtr *)(param_1 + 0xf0),(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      pxVar4 = *(xmlAutomataStatePtr *)(param_1 + 0xf0);
      for (local_68 = *(long *)(param_2 + 0xc); local_68 != 0; local_68 = *(long *)(local_68 + 0x40)
          ) {
        FUN_10096534a(param_1,local_68);
      }
      _xmlAutomataNewEpsilon
                (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0),pxVar4
                );
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),pxVar4,(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      break;
    case 0x10:
      for (local_68 = *(long *)(param_2 + 0xc); local_68 != 0; local_68 = *(long *)(local_68 + 0x40)
          ) {
        FUN_10096534a(param_1,local_68);
      }
      pxVar4 = *(xmlAutomataStatePtr *)(param_1 + 0xf0);
      for (local_68 = *(long *)(param_2 + 0xc); local_68 != 0; local_68 = *(long *)(local_68 + 0x40)
          ) {
        FUN_10096534a(param_1,local_68);
      }
      _xmlAutomataNewEpsilon
                (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0),pxVar4
                );
      pxVar4 = _xmlAutomataNewEpsilon
                         (*(xmlAutomataPtr *)(param_1 + 0xe8),pxVar4,(xmlAutomataStatePtr)0x0);
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
      break;
    case 0x11:
      local_20 = (xmlAutomataStatePtr)0x0;
      uVar6 = *(undefined8 *)(param_1 + 0xf0);
      for (local_68 = *(long *)(param_2 + 0xc); local_68 != 0; local_68 = *(long *)(local_68 + 0x40)
          ) {
        *(undefined8 *)(param_1 + 0xf0) = uVar6;
        local_6c = FUN_10096534a(param_1,local_68);
        if (local_6c != 0) break;
        if (local_20 == (xmlAutomataStatePtr)0x0) {
          local_20 = *(xmlAutomataStatePtr *)(param_1 + 0xf0);
        }
        else {
          _xmlAutomataNewEpsilon
                    (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0),
                     local_20);
        }
      }
      *(xmlAutomataStatePtr *)(param_1 + 0xf0) = local_20;
      break;
    case 0x14:
      iVar2 = FUN_10096503c(param_2);
      if ((iVar2 == 1) && (*(short *)(param_2 + 0x18) != -0x19)) {
        uVar6 = *(undefined8 *)(param_1 + 0xe8);
        uVar1 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined2 *)(param_2 + 0x18) = 0xffe7;
        local_68 = *(long *)(param_2 + 0xc);
        pxVar3 = _xmlNewAutomata();
        *(xmlAutomataPtr *)(param_1 + 0xe8) = pxVar3;
        if (*(long *)(param_1 + 0xe8) == 0) {
          return -1;
        }
        pxVar4 = _xmlAutomataGetInitState(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(xmlAutomataStatePtr *)(param_1 + 0xf0) = pxVar4;
        for (; local_68 != 0; local_68 = *(long *)(local_68 + 0x40)) {
          FUN_10096534a(param_1,local_68);
        }
        _xmlAutomataSetFinalState
                  (*(xmlAutomataPtr *)(param_1 + 0xe8),*(xmlAutomataStatePtr *)(param_1 + 0xf0));
        pxVar5 = _xmlAutomataCompile(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(xmlRegexpPtr *)(param_2 + 0x1a) = pxVar5;
        _xmlRegexpIsDeterminist(*(xmlRegexpPtr *)(param_2 + 0x1a));
        _xmlFreeAutomata(*(xmlAutomataPtr *)(param_1 + 0xe8));
        *(undefined8 *)(param_1 + 0xf0) = uVar1;
        *(undefined8 *)(param_1 + 0xe8) = uVar6;
      }
      break;
    case 0xffffffff:
      local_6c = FUN_10096534a(param_1,*(undefined8 *)(param_2 + 0xc));
    }
    local_8c = local_6c;
  }
  return local_8c;
}

