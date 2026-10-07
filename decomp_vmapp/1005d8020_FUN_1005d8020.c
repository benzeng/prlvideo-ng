
undefined8 * FUN_1005d8020(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 0x5a:
    puVar1 = (undefined *)QString::fromAscii_helper("monolithicFlat",0xe);
    break;
  case 0x5b:
    puVar1 = (undefined *)QString::fromAscii_helper("monolithicSparse",0x10);
    break;
  case 0x5c:
    puVar1 = (undefined *)QString::fromAscii_helper("twoGbMaxExtentFlat",0x12);
    break;
  case 0x5d:
    puVar1 = (undefined *)QString::fromAscii_helper("twoGbMaxExtentSparse",0x14);
    break;
  default:
    FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u",param_2);
    puVar1 = PTR_shared_null_100ba20d0;
  }
  *param_1 = puVar1;
  return param_1;
}

