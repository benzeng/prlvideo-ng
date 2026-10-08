
void FUN_1005c3450(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar6 = FUN_1005c2b60(param_1);
    goto LAB_1005c3750;
  case 1:
    iVar6 = FUN_1005c20a0(param_1);
    goto LAB_1005c3750;
  case 2:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 4;
    }
    break;
  case 3:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 0x15;
    }
    break;
  case 4:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 0xe;
    }
    break;
  case 5:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 0;
    }
    break;
  case 6:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      iVar6 = *(int *)(*(long *)(param_1 + 0x18) + 0x50);
      uVar10 = 0xc;
      if (iVar6 == 6) {
        uVar10 = 0;
      }
      uVar8 = 0xb;
      if (iVar6 != 4) {
        uVar8 = uVar10;
      }
      *(undefined4 *)*param_4 = uVar8;
    }
    break;
  case 7:
  case 8:
    cVar4 = FUN_1001248a0(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x38));
    piVar9 = (int *)*param_4;
    if (piVar9 == (int *)0x0) {
      return;
    }
    iVar6 = (cVar4 == '\0') + 2 + (uint)(cVar4 == '\0');
    goto LAB_1005c3758;
  case 9:
    iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x50);
    iVar6 = 0x12;
    if (iVar2 != 5) {
      iVar6 = (uint)(iVar2 == 10) * 4 + 5;
    }
    goto LAB_1005c3750;
  case 10:
    iVar6 = -1;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 9) {
      cVar4 = FUN_1005bf2d0();
      iVar6 = (cVar4 == '\0') + 3;
    }
    goto LAB_1005c3750;
  case 0xb:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 4;
    }
    break;
  case 0xc:
    iVar6 = -1;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 0) {
      cVar4 = FUN_1005b99e0();
      iVar6 = 6;
      if (cVar4 != '\0') {
        iVar6 = 0x13;
      }
    }
    goto LAB_1005c3750;
  case 0xd:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 0x10;
    }
    break;
  case 0xe:
    lVar7 = FUN_1005b87b0(*(undefined8 *)(param_1 + 0x18));
    iVar6 = 0x10;
    if ((lVar7 != 0) && (iVar6 = 0xf, *(char *)(*(long *)(param_1 + 0x18) + 0x6d) == '\0')) {
      bVar5 = FUN_1005b99e0();
      iVar6 = (uint)bVar5 * 3 + 0x10;
    }
    if ((int *)*param_4 != (int *)0x0) {
      *(int *)*param_4 = iVar6;
    }
    break;
  case 0xf:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 4;
    }
    break;
  case 0x10:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 4;
    }
    break;
  case 0x11:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      uVar10 = 2;
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 9) {
        uVar10 = 0xffffffff;
      }
      *(undefined4 *)*param_4 = uVar10;
    }
    break;
  case 0x12:
    iVar6 = FUN_1005c3160(param_1);
    goto LAB_1005c3750;
  case 0x13:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 5;
    }
    break;
  case 0x14:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = 4;
    }
    break;
  case 0x15:
    FUN_1005bac90(&local_28,*(undefined8 *)(param_1 + 0x18));
    iVar6 = *(int *)(local_28 + 0x14);
    if (*(int *)(local_28 + 0x10) != -1) {
      if (*(int *)(local_28 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_28 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1005c3710;
        local_19 = 0;
      }
      QHashData::free_helper(local_28);
    }
LAB_1005c3710:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      uVar10 = 0xc;
      if (iVar6 < 2) {
        uVar10 = 0xb;
      }
      *(undefined4 *)*param_4 = uVar10;
    }
    break;
  case 0x16:
    iVar6 = 7;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 10) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      CAbstractWizardPageFlow::currentPageId();
      iVar6 = CAbstractWizardPageFlow::getPrevPageId((int)uVar3);
    }
LAB_1005c3750:
    piVar9 = (int *)*param_4;
    if (piVar9 != (int *)0x0) {
LAB_1005c3758:
      *piVar9 = iVar6;
    }
  }
  return;
}

