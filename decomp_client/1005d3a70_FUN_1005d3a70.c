
void FUN_1005d3a70(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    FUN_1005d1de0(param_1,param_4[1]);
    return;
  case 1:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x28) + 9) & 0x80) == 0)
    {
      return;
    }
    iVar2 = *(int *)param_4[1];
    lVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    uVar7 = 2;
    if (iVar2 == 0) goto LAB_1005d3b19;
    break;
  case 2:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x28) + 9) & 0x80) == 0)
    {
      return;
    }
    cVar1 = *(char *)param_4[1];
    lVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    uVar7 = 2;
    if (cVar1 != '\0') goto LAB_1005d3b19;
    break;
  case 3:
    FUN_1005d2460(param_1,*(undefined1 *)param_4[1]);
    return;
  case 4:
    uVar4 = FUN_1005d24e0(param_1);
    goto LAB_1005d3b5a;
  case 5:
    uVar4 = FUN_1005d1670(param_1);
LAB_1005d3b5a:
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar4;
    }
switchD_1005d3a9e_default:
    return;
  case 6:
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0001005d3b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,*(undefined1 *)param_4[1],param_3,UNRECOVERED_JUMPTABLE);
    return;
  case 7:
    FUN_1001326a0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),*(byte *)param_4[1] ^ 1);
    return;
  case 8:
    QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x18) + 0x68));
    return;
  case 9:
    QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
    return;
  case 10:
    FUN_1005d0000(param_1,*(undefined1 *)param_4[1]);
    return;
  case 0xb:
    FUN_1005d0b40(param_1);
    return;
  default:
    goto switchD_1005d3a9e_default;
  }
  uVar7 = 1;
LAB_1005d3b19:
  *(undefined4 *)(lVar5 + 0x3c) = uVar7;
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  FUN_1005bbea0(uVar6);
  return;
}

