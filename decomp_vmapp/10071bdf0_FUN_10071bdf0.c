
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10071bdf0(undefined8 *param_1,long ******param_2)

{
  long *******ppppppplVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  int iVar4;
  long *******ppppppplVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long ******pppppplVar8;
  long *******local_38;
  long *******local_30;
  
  puVar7 = (undefined8 *)*param_1;
  local_38 = (long *******)&local_38;
  local_30 = (long *******)&local_38;
  while( true ) {
    if (puVar7 == param_1) {
      return 0;
    }
    iVar4 = FUN_10071b620(puVar7,&local_38);
    ppppppplVar5 = local_38;
    ppppppplVar3 = local_38;
    ppppppplVar1 = local_30;
    if (iVar4 != 0) break;
    ppppppplVar5 = _malloc(0x28);
    if (ppppppplVar5 == (long *******)0x0) {
      FUN_10071e690(0xfffffffe,0);
    }
    else {
      ppppppplVar5[4] = (long ******)0x0;
      ppppppplVar5[3] = (long ******)0x0;
      ppppppplVar5[2] = (long ******)0x0;
      ppppppplVar5[1] = (long ******)0x0;
      *ppppppplVar5 = (long ******)0x0;
      ppppppplVar5[1] = (long ******)local_30;
      *ppppppplVar5 = (long ******)&local_38;
      *local_30 = (long ******)ppppppplVar5;
      local_30 = ppppppplVar5;
    }
    ppppppplVar5 = local_30;
    if ((long ********)local_38 == &local_38) {
      puVar7 = (undefined8 *)*puVar7;
    }
    else {
      pppppplVar8 = (long ******)*param_2;
      local_38[1] = param_2;
      *param_2 = (long *****)local_38;
      *ppppppplVar5 = pppppplVar8;
      pppppplVar8[1] = (long *****)ppppppplVar5;
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  while ((long ********)ppppppplVar3 != &local_38) {
    ppppppplVar1 = (long *******)*ppppppplVar3;
    if (ppppppplVar3[2] != (long ******)0x0) {
      _free(ppppppplVar3[2]);
    }
    if (ppppppplVar3[3] != (long ******)0x0) {
      _free(ppppppplVar3[3]);
    }
    if (ppppppplVar3[4] != (long ******)0x0) {
      _free(ppppppplVar3[4]);
    }
    _free(ppppppplVar3);
    ppppppplVar5 = (long *******)&local_38;
    ppppppplVar3 = ppppppplVar1;
    ppppppplVar1 = (long *******)&local_38;
  }
  pppppplVar8 = (long ******)*param_2;
  local_38 = ppppppplVar5;
  local_30 = ppppppplVar1;
  if ((long ******)*param_2 != param_2) {
    do {
      pppppplVar2 = (long ******)*pppppplVar8;
      if (pppppplVar8[2] != (long *****)0x0) {
        _free(pppppplVar8[2]);
      }
      if (pppppplVar8[3] != (long *****)0x0) {
        _free(pppppplVar8[3]);
      }
      if (pppppplVar8[4] != (long *****)0x0) {
        _free(pppppplVar8[4]);
      }
      _free(pppppplVar8);
      pppppplVar8 = pppppplVar2;
    } while (pppppplVar2 != param_2);
    param_2[1] = (long *****)param_2;
    *param_2 = (long *****)param_2;
  }
  uVar6 = FUN_10071e690(0xfffffffe,0);
  return uVar6;
}

