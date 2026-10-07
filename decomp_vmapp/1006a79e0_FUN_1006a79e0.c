
undefined8 * FUN_1006a79e0(long param_1,long param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  uVar3 = 0x80000018;
  if (param_2 == 0x20385fae252cb34a) {
    puVar1 = operator_new(0x50,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR____cxa_pure_virtual_10116d488;
      puVar1[1] = param_1;
      puVar1[2] = 0x20385fae252cb34a;
      if (param_1 == 0) {
        FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","m_Image != NULL",
                      "../../../Sources/Libraries/DiskImage/CompImageExtensionBase.h",0x1e,
                      "CompImageExtensionBase");
      }
      *puVar1 = &PTR_FUN_100bcd100;
      puVar1[4] = 0;
      puVar1[3] = 0;
      FUN_1007d6870(puVar1 + 5);
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar2 = puVar1;
    }
    uVar3 = 0;
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0x80000002;
    }
  }
  *param_3 = uVar3;
  return puVar2;
}

