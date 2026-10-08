
undefined8 * FUN_100b2efb0(long *param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100b2feb0(*param_1,param_2,param_4);
  if (((*param_4 < 0) && (puVar2 = (undefined8 *)0x0, (param_3 & 2) != 0)) &&
     (*param_4 == -0x7fffffe8)) {
    puVar2 = operator_new(0x30,(nothrow_t *)PTR_nothrow_1021e1620);
    if (puVar2 == (undefined8 *)0x0) {
      *param_4 = -0x7ffffffe;
      puVar2 = (undefined8 *)0x0;
    }
    else {
      lVar1 = *param_1;
      *puVar2 = &PTR____cxa_pure_virtual_1022cf348;
      puVar2[1] = lVar1;
      puVar2[2] = param_2;
      if (lVar1 == 0) {
        FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","m_Image != NULL",
                      "../../../Sources/Libraries/DiskImage/CompImageExtensionBase.h",0x1e,
                      "CompImageExtensionBase");
      }
      *puVar2 = &PTR_FUN_10223ee00;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[4] = 0;
      puVar2[5] = param_3;
      FUN_100df99c0("","dimg",0,"Warning: unknown header extension detected: %llx",param_2);
      *param_4 = 0;
    }
  }
  return puVar2;
}

