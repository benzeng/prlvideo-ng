
undefined8 FUN_100b2fc30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x50,(nothrow_t *)PTR_nothrow_1021e1620);
    if (puVar2 == (undefined8 *)0x0) {
      param_1[4] = 0;
      return 0x80000002;
    }
    lVar1 = *param_1;
    *puVar2 = &PTR____cxa_pure_virtual_1022cf348;
    puVar2[1] = lVar1;
    puVar2[2] = 0x20385fae252cb34a;
    if (lVar1 == 0) {
      FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","m_Image != NULL",
                    "../../../Sources/Libraries/DiskImage/CompImageExtensionBase.h",0x1e,
                    "CompImageExtensionBase");
    }
    *puVar2 = &PTR_FUN_10223ee60;
    puVar2[4] = 0;
    puVar2[3] = 0;
    FUN_100dda060(puVar2 + 5);
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    param_1[4] = (long)puVar2;
    plVar3 = operator_new(0x18);
    plVar3[2] = (long)puVar2;
    plVar3[1] = (long)(param_1 + 1);
    lVar1 = param_1[1];
    *plVar3 = lVar1;
    *(long **)(lVar1 + 8) = plVar3;
    param_1[1] = (long)plVar3;
    param_1[3] = param_1[3] + 1;
  }
  uVar4 = FUN_100b30880(puVar2,param_2,param_3,param_4);
  return uVar4;
}

