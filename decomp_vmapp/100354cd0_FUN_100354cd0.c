
undefined8 FUN_100354cd0(long param_1,short param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  
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
  cVar4 = FUN_1003a20f0(param_4);
  if (cVar4 != '\0') {
    FUN_1003a2430(param_4,"src0",*(undefined8 *)(param_1 + 0x30));
  }
  uVar1 = *param_3;
  uVar9 = uVar1 & 0x7ff;
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"src1 = texcoord[%d]; \n",uVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a23f0(param_4);
  FUN_10038e8e0(uVar3,"src1.x += dot(%s.xy, c_ps[%d * BUMP_STRIDE + OFF_BUMP_MAT].xy);\n",uVar6,
                uVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = FUN_1003a23f0(param_4);
  FUN_10038e8e0(uVar3,"src1.y += dot(%s.xy, c_ps[%d * BUMP_STRIDE + OFF_BUMP_MAT].zw);\n",uVar6,
                uVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar9 * 0x40 + 0x118) * 4);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = FUN_1003a2680(param_3);
  uVar8 = FUN_10036bd80(uVar9);
  uVar10 = 1;
  FUN_100399db0(uVar3,uVar9,uVar6,uVar2,uVar7,uVar8,"src1");
  if (param_2 == 0x44) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(param_3);
    uVar7 = FUN_1003a2680(param_3);
    uVar8 = FUN_1003a23f0(param_4);
    FUN_10038e8e0(uVar3,
                  "%s = %s * (%s.b * c_ps[%d * BUMP_STRIDE + OFF_BUMP_INFO].x + c_ps[%d * BUMP_STRIDE + OFF_BUMP_INFO].y); \n"
                  ,uVar6,uVar7,uVar8,uVar9,CONCAT44(uVar10,uVar1) & 0xffffffff000007ff);
  }
  return 0;
}

