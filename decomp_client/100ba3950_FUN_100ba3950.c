
void FUN_100ba3950(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *pvVar6;
  
  if ((param_1 == (undefined4 *)0x0) || (iVar1 = param_1[6], param_1[6] = iVar1 + -1, 1 < iVar1)) {
    return;
  }
  switch(*param_1) {
  case 3:
    pvVar6 = *(void **)(param_1 + 8);
    if (pvVar6 == (void *)0x0) goto switchD_100ba3999_caseD_4;
    goto LAB_100ba39e1;
  default:
    goto switchD_100ba3999_caseD_4;
  case 5:
    lVar2 = *(long *)(param_1 + 2);
    break;
  case 6:
    if (*(long *)(param_1 + 2) != 0) {
      uVar5 = 0;
      do {
        FUN_100ba3950(*(undefined8 *)(*(long *)(param_1 + 8) + uVar5 * 8));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(param_1 + 2));
    }
    lVar2 = *(long *)(param_1 + 4);
    break;
  case 7:
    puVar4 = *(undefined8 **)(param_1 + 8);
    while (puVar4 != (undefined8 *)(param_1 + 8)) {
      puVar3 = (undefined8 *)*puVar4;
      FUN_100ba3950(puVar4[3]);
      _free((void *)puVar4[2]);
      _free(puVar4);
      puVar4 = puVar3;
    }
    goto switchD_100ba3999_caseD_4;
  }
  if (lVar2 != 0) {
    pvVar6 = *(void **)(param_1 + 8);
LAB_100ba39e1:
    _free(pvVar6);
  }
switchD_100ba3999_caseD_4:
  _free(param_1);
  return;
}

