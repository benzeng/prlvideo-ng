
undefined8 FUN_10061b8ed(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*(undefined1 (*) [16])(param_4 + -0x10);
  uVar3 = *(undefined8 *)(param_4 + -8);
  *(undefined8 *)(param_4 + 0xe0) = *param_1;
  *(undefined8 *)(param_4 + 0xe8) = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  pauVar5 = (undefined1 (*) [16])(param_1 + 2);
  pauVar4 = (undefined1 (*) [16])(param_4 + 0xd0);
  do {
    auVar6 = aesimc(*pauVar5);
    *pauVar4 = auVar6;
    pauVar5 = pauVar5 + 1;
    pauVar4 = pauVar4 + -1;
  } while (pauVar5 < (undefined1 (*) [16])(param_4 + -0x10));
  return 0;
}

