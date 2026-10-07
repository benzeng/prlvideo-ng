
undefined8 FUN_100354fd0(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  cVar3 = FUN_1003a2990(param_3);
  if (cVar3 != '\0') {
    puVar4 = *(undefined1 **)(param_3 + 10);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_3 + 0xe);
    }
    *puVar4 = 0;
    param_3[8] = 0;
    FUN_10038e8e0(param_3 + 8,"dst");
    param_3[2] = 0;
  }
  uVar8 = *param_3 & 0x7ff;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = FUN_1003a23f0(param_4);
  FUN_10038e8e0(uVar2,"src1 = vec4(dot(texcoord[%d].xyz, %s.xyz), 0.0, 0.0, 1.0);\n",uVar8,uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar8 * 0x40 + 0x118) * 4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a2680(param_3);
  uVar7 = FUN_10036bd80(uVar8);
  FUN_100399db0(uVar2,uVar8,uVar5,uVar1,uVar6,uVar7,"src1");
  return 0;
}

