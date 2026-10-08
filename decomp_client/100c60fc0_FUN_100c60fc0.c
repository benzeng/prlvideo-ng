
undefined8 FUN_100c60fc0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar5 = (*(code *)param_1[2])(param_2);
  param_1[0xc] = param_1[0xc] + 1;
  uVar6 = uVar5 % (ulong)*(uint *)((long)param_1 + 0x24);
  iVar4 = (int)uVar6;
  if (uVar6 < *(uint *)(param_1 + 4)) {
    iVar4 = (int)(uVar5 % (ulong)*(uint *)((long)param_1 + 0x1c));
  }
  puVar8 = *(undefined8 **)(*param_1 + (long)iVar4 * 8);
  if (puVar8 != (undefined8 *)0x0) {
    pcVar2 = (code *)param_1[1];
    plVar7 = (long *)(*param_1 + (long)iVar4 * 8);
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar8[2] == uVar5) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar4 = (*pcVar2)(*puVar8,param_2);
        if (iVar4 == 0) {
          if ((undefined8 *)*plVar7 != (undefined8 *)0x0) {
            uVar3 = *(undefined8 *)*plVar7;
            param_1[0x12] = param_1[0x12] + 1;
            return uVar3;
          }
          break;
        }
      }
      puVar1 = puVar8 + 1;
      plVar7 = puVar8 + 1;
      puVar8 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
  param_1[0x13] = param_1[0x13] + 1;
  return 0;
}

