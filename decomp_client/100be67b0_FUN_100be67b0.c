
undefined4 * FUN_100be67b0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar7 = (undefined4 *)FUN_100be2f30(*(undefined8 *)(param_1 + 0x5c));
  if (puVar7 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar7 = *param_1;
  puVar7[1] = param_1[1];
  lVar8 = *(long *)(param_1 + 2);
  *(long *)(puVar7 + 2) = lVar8;
  if (*(long *)(param_1 + 0x4c) == 0) {
    (**(code **)(lVar8 + 0x18))(puVar7);
    lVar8 = *(long *)(param_1 + 2);
    *(long *)(puVar7 + 2) = lVar8;
    (**(code **)(lVar8 + 8))(puVar7);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 != 0) {
      if (*(long *)(puVar7 + 0x40) != 0) {
        FUN_100be7960(*(long *)(puVar7 + 0x40));
        lVar8 = *(long *)(param_1 + 0x40);
      }
      lVar8 = FUN_100be75a0(lVar8);
      *(long *)(puVar7 + 0x40) = lVar8;
      if (lVar8 == 0) goto LAB_100be6adc;
    }
    uVar1 = param_1[0x42];
    if ((ulong)uVar1 < 0x21) {
      puVar7[0x42] = uVar1;
      _memcpy(puVar7 + 0x43,param_1 + 0x43,(ulong)uVar1);
    }
    else {
      FUN_100c62ee0(0x14,0xda,0x111,"ssl_lib.c",0x1a1);
    }
  }
  else {
    FUN_100be4050(puVar7,param_1);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(puVar7 + 0x6a) = *(undefined8 *)(param_1 + 0x6a);
  *(undefined8 *)(puVar7 + 0x6c) = uVar9;
  *(undefined8 *)(puVar7 + 0x6e) = *(undefined8 *)(param_1 + 0x6e);
  puVar7[0x24] = param_1[0x24];
  uVar4 = param_1[0x27];
  uVar2 = param_1[0x28];
  uVar3 = param_1[0x29];
  puVar7[0x26] = param_1[0x26];
  puVar7[0x27] = uVar4;
  puVar7[0x28] = uVar2;
  puVar7[0x29] = uVar3;
  lVar8 = *(long *)(param_1 + 0x52);
  puVar7[0x50] = param_1[0x50];
  if (lVar8 != 0) {
    *(long *)(puVar7 + 0x52) = lVar8;
  }
  uVar4 = FUN_100c9c8a0(*(undefined8 *)(param_1 + 0x2c));
  FUN_100c9c840(*(undefined8 *)(puVar7 + 0x2c),uVar4);
  *(undefined8 *)(puVar7 + 0x4e) = *(undefined8 *)(param_1 + 0x4e);
  *(undefined8 *)(puVar7 + 0x54) = *(undefined8 *)(param_1 + 0x54);
  puVar7[0x5e] = param_1[0x5e];
  iVar5 = FUN_100bf5130(1,puVar7 + 0x62,param_1 + 0x62);
  if ((iVar5 != 0) &&
     ((*(long *)(param_1 + 4) == 0 ||
      (lVar8 = FUN_100c58d60(*(long *)(param_1 + 4),0xc,0,puVar7 + 4), lVar8 != 0)))) {
    lVar8 = *(long *)(param_1 + 6);
    if (lVar8 != 0) {
      if (lVar8 == *(long *)(param_1 + 4)) {
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 4);
      }
      else {
        lVar8 = FUN_100c58d60(lVar8,0xc,0,puVar7 + 6);
        if (lVar8 == 0) goto LAB_100be6adc;
      }
    }
    puVar7[10] = param_1[10];
    puVar7[0xb] = param_1[0xb];
    *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    puVar7[0xa9] = param_1[0xa9];
    uVar4 = param_1[0xf];
    uVar2 = param_1[0x10];
    uVar3 = param_1[0x11];
    puVar7[0xe] = param_1[0xe];
    puVar7[0xf] = uVar4;
    puVar7[0x10] = uVar2;
    puVar7[0x11] = uVar3;
    puVar7[0x12] = param_1[0x12];
    puVar7[0x13] = param_1[0x13];
    puVar7[0x18] = 0;
    puVar7[0x2a] = param_1[0x2a];
    FUN_100c9c580(*(undefined8 *)(puVar7 + 0x2c),*(undefined8 *)(param_1 + 0x2c));
    if (*(long *)(param_1 + 0x2e) != 0) {
      lVar8 = FUN_100c5fe10();
      *(long *)(puVar7 + 0x2e) = lVar8;
      if (lVar8 == 0) goto LAB_100be6adc;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar8 = FUN_100c5fe10();
      *(long *)(puVar7 + 0x30) = lVar8;
      if (lVar8 == 0) goto LAB_100be6adc;
    }
    if (*(long *)(param_1 + 0x66) == 0) {
      return puVar7;
    }
    lVar8 = FUN_100c5fe10();
    if (lVar8 != 0) {
      *(long *)(puVar7 + 0x66) = lVar8;
      iVar5 = FUN_100c60800(lVar8);
      if (iVar5 < 1) {
        return puVar7;
      }
      iVar5 = 0;
      while( true ) {
        uVar9 = FUN_100c60820(lVar8,iVar5);
        uVar10 = FUN_100c7c750(uVar9);
        lVar11 = FUN_100c60850(lVar8,iVar5,uVar10);
        if (lVar11 == 0) break;
        iVar5 = iVar5 + 1;
        iVar6 = FUN_100c60800(lVar8);
        if (iVar6 <= iVar5) {
          return puVar7;
        }
      }
      FUN_100c7c730(uVar9);
    }
  }
LAB_100be6adc:
  FUN_100be3250(puVar7);
  return (undefined4 *)0x0;
}

