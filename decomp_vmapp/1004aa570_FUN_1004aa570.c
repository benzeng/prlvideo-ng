
ulong * FUN_1004aa570(ulong *param_1,byte *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  
  uVar6 = (ulong)(byte)*param_1;
  uVar4 = 10;
  if (((byte)*param_1 & 1) != 0) {
    uVar6 = *param_1;
    uVar4 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < param_3) {
    if ((uVar6 & 1) == 0) {
      uVar6 = (uVar6 & 0xff) >> 1;
    }
    else {
      uVar6 = param_1[1];
    }
    FUN_1004aa780(param_1,uVar4,param_3 - uVar4,uVar6,0,uVar6,param_3,param_2);
    return param_1;
  }
  if ((uVar6 & 1) == 0) {
    pbVar10 = (byte *)((long)param_1 + 2);
  }
  else {
    pbVar10 = (byte *)param_1[2];
  }
  if (pbVar10 < param_2) {
    if (param_3 != 0) {
      uVar6 = param_3 & 0xfffffffffffffff0;
      if ((uVar6 == 0) ||
         ((pbVar10 <= param_2 + (param_3 - 1) * 2 && (param_2 <= pbVar10 + (param_3 - 1) * 2)))) {
        uVar6 = 0;
        pbVar5 = pbVar10;
        pbVar9 = param_2;
        uVar4 = param_3;
      }
      else {
        pbVar5 = pbVar10 + uVar6 * 2;
        uVar4 = param_3 - uVar6;
        pbVar9 = param_2 + uVar6 * 2;
        pbVar8 = pbVar10 + 0x10;
        param_2 = param_2 + 0x10;
        uVar7 = param_3 & 0xfffffffffffffff0;
        do {
          uVar1 = *(undefined8 *)(param_2 + -8);
          uVar2 = *(undefined8 *)param_2;
          uVar3 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(pbVar8 + -0x10) = *(undefined8 *)(param_2 + -0x10);
          *(undefined8 *)(pbVar8 + -8) = uVar1;
          *(undefined8 *)pbVar8 = uVar2;
          *(undefined8 *)(pbVar8 + 8) = uVar3;
          pbVar8 = pbVar8 + 0x20;
          param_2 = param_2 + 0x20;
          uVar7 = uVar7 - 0x10;
        } while (uVar7 != 0);
      }
      if (uVar6 != param_3) {
        do {
          *(undefined2 *)pbVar5 = *(undefined2 *)pbVar9;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  else if ((param_3 != 0) && (param_2 < pbVar10)) {
    pbVar5 = param_2 + param_3 * 2;
    pbVar9 = pbVar10 + param_3 * 2;
    uVar6 = param_3;
    if (param_3 != 0) {
      uVar7 = param_3 & 0xfffffffffffffff0;
      uVar4 = 0;
      if (uVar7 != 0) {
        if ((param_2 < pbVar10 + (param_3 - 1) * 2) ||
           (uVar4 = 0, pbVar10 < param_2 + (param_3 - 1) * 2)) {
          uVar6 = param_3 - uVar7;
          pbVar9 = pbVar10 + uVar6 * 2;
          pbVar5 = param_2 + uVar6 * 2;
          param_2 = param_2 + param_3 * 2 + -0x10;
          pbVar8 = pbVar10 + param_3 * 2 + -0x10;
          uVar11 = param_3 & 0xfffffffffffffff0;
          do {
            uVar1 = *(undefined8 *)(param_2 + -0x10);
            uVar2 = *(undefined8 *)(param_2 + -8);
            uVar3 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)pbVar8 = *(undefined8 *)param_2;
            *(undefined8 *)(pbVar8 + 8) = uVar3;
            *(undefined8 *)(pbVar8 + -0x10) = uVar1;
            *(undefined8 *)(pbVar8 + -8) = uVar2;
            param_2 = param_2 + -0x20;
            pbVar8 = pbVar8 + -0x20;
            uVar11 = uVar11 - 0x10;
            uVar4 = uVar7;
          } while (uVar11 != 0);
        }
      }
      if (uVar4 == param_3) goto LAB_1004aa753;
    }
    do {
      pbVar5 = pbVar5 + -2;
      pbVar9 = pbVar9 + -2;
      *(undefined2 *)pbVar9 = *(undefined2 *)pbVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
LAB_1004aa753:
  (pbVar10 + param_3 * 2)[0] = 0;
  (pbVar10 + param_3 * 2)[1] = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)param_3 * '\x02';
  }
  else {
    param_1[1] = param_3;
  }
  return param_1;
}

