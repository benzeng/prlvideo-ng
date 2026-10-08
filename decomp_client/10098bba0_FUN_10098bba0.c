
void FUN_10098bba0(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  uVar1 = _IOServiceMatching("AppleSmartBattery");
  iVar2 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,uVar1,param_1);
  if (iVar2 == 0) {
    uVar3 = _IOIteratorNext(*param_1);
    param_1[1] = uVar3;
    return;
  }
  puVar4 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar4 = PTR_vtable_1021e1828 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar4,PTR_typeinfo_1021e1788,PTR__exception_1021e1618);
}

