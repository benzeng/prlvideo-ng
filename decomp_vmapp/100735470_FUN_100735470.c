
undefined8 * FUN_100735470(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return (undefined8 *)0x0;
  }
  if ((int)param_1[7] != 0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    puVar2 = (undefined8 *)FUN_10081ddd0(400,"../src/snlic/sn_crypto_helper_15.c",0x1a7);
    if (puVar2 == (undefined8 *)0x0) goto LAB_100735726;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    puVar2[0x14] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x15] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x20] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x23] = 0;
    puVar2[0x22] = 0;
    puVar2[0x21] = 0;
    puVar2[0x26] = 0;
    puVar2[0x25] = 0;
    puVar2[0x24] = 0;
    puVar2[0x29] = 0;
    puVar2[0x28] = 0;
    puVar2[0x27] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2d] = 0;
    lVar3 = param_1[2];
    puVar2[0x30] = lVar3;
    puVar2[0x31] = 0;
    if (*param_1 == 0) {
      param_1[2] = (long)puVar2;
      param_1[1] = (long)puVar2;
      *param_1 = (long)puVar2;
    }
    else {
      *(undefined8 **)(lVar3 + 0x188) = puVar2;
      param_1[2] = (long)puVar2;
      param_1[1] = (long)puVar2;
    }
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 0x10;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  else {
    if (uVar1 == 0) {
      lVar3 = *param_1;
LAB_1007356fb:
      param_1[1] = lVar3;
      uVar4 = 0;
    }
    else {
      lVar3 = param_1[1];
      if ((uVar1 & 0xf) == 0) {
        lVar3 = *(long *)(lVar3 + 0x188);
        goto LAB_1007356fb;
      }
      uVar4 = (ulong)(uVar1 & 0xf);
    }
    *(uint *)(param_1 + 3) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar3 + uVar4 * 0x18);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return puVar2;
  }
LAB_100735726:
  *(undefined4 *)(param_1 + 7) = 1;
  return (undefined8 *)0x0;
}

