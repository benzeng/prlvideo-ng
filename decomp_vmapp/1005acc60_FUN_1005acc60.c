
undefined8 FUN_1005acc60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = operator_new__(0x20000,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1008e3970("","vdisk",0,"Table memory allocation failed. Error code");
    uVar2 = 0x80000002;
  }
  else {
    puVar3 = puVar1;
    do {
      puVar3[1] = 0xffffffffffffffff;
      *puVar3 = 0xffffffffffffffff;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0xffffffffffffffff;
      puVar3[4] = 0xffffffffffffffff;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0xffffffffffffffff;
      puVar3[8] = 0xffffffffffffffff;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0xffffffffffffffff;
      puVar3[0xc] = 0xffffffffffffffff;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0xffffffffffffffff;
      puVar3[0x10] = 0xffffffffffffffff;
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0xffffffffffffffff;
      puVar3[0x14] = 0xffffffffffffffff;
      puVar3[0x17] = 0;
      puVar3[0x16] = 0;
      puVar3[0x19] = 0xffffffffffffffff;
      puVar3[0x18] = 0xffffffffffffffff;
      puVar3[0x1b] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1d] = 0xffffffffffffffff;
      puVar3[0x1c] = 0xffffffffffffffff;
      puVar3[0x1f] = 0;
      puVar3[0x1e] = 0;
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != puVar1 + 0x4000);
    *param_2 = puVar1;
    uVar2 = 0;
  }
  return uVar2;
}

