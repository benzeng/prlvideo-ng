
undefined8 FUN_10032d1d0(long param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 0x25) = param_5;
  iVar7 = 4;
  if (param_2 == 0x80e1) goto switchD_10032d225_caseD_1400;
  iVar7 = param_2;
  if (param_3 < 0x1400) {
    if (param_3 == 0) goto switchD_10032d225_caseD_1400;
switchD_10032d225_caseD_1407:
    iVar7 = 0;
  }
  else {
    switch(param_3) {
    case 0x1400:
    case 0x1401:
      break;
    case 0x1402:
    case 0x1403:
    case 0x140b:
      iVar7 = param_2 * 2;
      break;
    case 0x1404:
    case 0x1405:
    case 0x1406:
      iVar7 = param_2 << 2;
      break;
    default:
      goto switchD_10032d225_caseD_1407;
    case 0x140a:
      iVar7 = param_2 << 3;
    }
  }
switchD_10032d225_caseD_1400:
  *(int *)(param_1 + 0x2c) = iVar7;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = *(uint *)(puVar1 + 1);
  puVar6 = puVar1;
  if (uVar3 < 0x40000) {
    do {
      uVar4 = uVar3 + 0x40000;
      bVar2 = 0xfffbffff < uVar3;
      uVar3 = uVar4;
    } while (bVar2);
    *(uint *)(puVar1 + 1) = uVar4;
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
      uVar4 = *(uint *)(puVar1 + 1);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
    }
    pvVar5 = operator_new__((ulong)uVar4);
    *puVar1 = pvVar5;
  }
  return *puVar6;
}

