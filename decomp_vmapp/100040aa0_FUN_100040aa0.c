
void FUN_100040aa0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar2 = _CFArrayGetTypeID();
    lVar3 = _CFGetTypeID(param_2);
    if (lVar2 == lVar3) {
      lVar2 = _CFArrayGetCount(param_2);
      uVar1 = DAT_100b463c0;
      if (0 < lVar2) {
        lVar3 = 0;
        do {
          lVar4 = _CFArrayGetValueAtIndex(param_2,lVar3);
          if (lVar4 == 0) {
            uVar5 = ___cxa_allocate_exception(0x60);
            FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x389,
                          "CFArrayGetValueAtIndex() failed",uVar1);
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
          }
          FUN_100040880();
          lVar3 = lVar3 + 1;
        } while (lVar3 < lVar2);
      }
    }
  }
  return;
}

