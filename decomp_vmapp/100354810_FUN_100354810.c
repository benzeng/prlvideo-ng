
undefined8 FUN_100354810(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar4 = FUN_1003a2990(param_3);
  if (cVar4 != '\0') {
    puVar5 = *(undefined1 **)(param_3 + 10);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_3 + 0xe);
    }
    *puVar5 = 0;
    param_3[8] = 0;
    FUN_10038e8e0(param_3 + 8,"dst");
    param_3[2] = 0;
  }
  uVar1 = *param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a2680(param_3);
  uVar7 = FUN_10036bd80(uVar1 & 0x7ff);
  uVar8 = FUN_1003a23f0(param_4);
  FUN_100399db0(uVar2,uVar1 & 0x7ff,uVar3,0,uVar6,uVar7,uVar8);
  return 0;
}

