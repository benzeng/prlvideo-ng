
uint FUN_100c73150(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar1 = *(long *)(param_1 + 0x78);
  if (param_4 == 0) {
    uVar2 = _aesni_set_decrypt_key(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
  }
  else {
    uVar2 = _aesni_set_encrypt_key();
  }
  puVar5 = (undefined4 *)(lVar1 + 0xf4);
  FUN_100bfb890(puVar5);
  puVar4 = puVar5;
  puVar6 = (undefined4 *)(lVar1 + 0x154);
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  puVar4 = (undefined4 *)(lVar1 + 0x1b4);
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined8 *)(lVar1 + 0x218) = 0xffffffffffffffff;
  return uVar2 >> 0x1f ^ 1;
}

