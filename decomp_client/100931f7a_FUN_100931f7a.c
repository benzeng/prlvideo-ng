
void FUN_100931f7a(int *param_1,long param_2)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int iVar3;
  xmlAutomataPtr pxVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlAutomataStatePtr pxVar7;
  xmlRegexpPtr pxVar8;
  
  if (((*param_1 == 5) && (*(long *)(param_1 + 0x32) == 0)) &&
     ((param_1[0x17] == 2 || (param_1[0x17] == 3)))) {
    pxVar4 = _xmlNewAutomata();
    *(xmlAutomataPtr *)(param_2 + 0x78) = pxVar4;
    if (*(long *)(param_2 + 0x78) == 0) {
      ppxVar5 = ___xmlGenericError();
      pxVar1 = *ppxVar5;
      uVar2 = *(undefined8 *)(param_1 + 4);
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar6,"Cannot create automata for complex type %s\n",uVar2);
    }
    else {
      pxVar7 = _xmlAutomataGetInitState(*(xmlAutomataPtr *)(param_2 + 0x78));
      *(xmlAutomataStatePtr *)(param_2 + 0x90) = pxVar7;
      FUN_100930f56(param_2,*(undefined8 *)(param_1 + 0xe));
      _xmlAutomataSetFinalState
                (*(xmlAutomataPtr *)(param_2 + 0x78),*(xmlAutomataStatePtr *)(param_2 + 0x90));
      pxVar8 = _xmlAutomataCompile(*(xmlAutomataPtr *)(param_2 + 0x78));
      *(xmlRegexpPtr *)(param_1 + 0x32) = pxVar8;
      if (*(long *)(param_1 + 0x32) == 0) {
        FUN_10091dd92(param_2,0xbfd,0,param_1,*(undefined8 *)(param_1 + 0x12),
                      "Failed to compile the content model",0);
      }
      else {
        iVar3 = _xmlRegexpIsDeterminist(*(xmlRegexpPtr *)(param_1 + 0x32));
        if (iVar3 != 1) {
          FUN_10091dd92(param_2,0xbfe,0,param_1,*(undefined8 *)(param_1 + 0x12),
                        "The content model is not determinist",0);
        }
      }
      *(undefined8 *)(param_2 + 0x90) = 0;
      _xmlFreeAutomata(*(xmlAutomataPtr *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
  }
  return;
}

