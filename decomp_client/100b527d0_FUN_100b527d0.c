
undefined1 FUN_100b527d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)PTR__kSCPropNetIPv4ConfigMethod_1021e1a58;
  lVar2 = FUN_100b4ecf0(param_1,uVar1,0);
  lVar3 = _CFStringGetTypeID();
  if (((lVar2 != 0) && (lVar4 = _CFGetTypeID(lVar2), lVar4 == lVar3)) &&
     (lVar2 = _CFStringCompare(lVar2,param_2,0), lVar2 == 0)) {
    return 0;
  }
  FUN_100b503f0(param_1,param_2,uVar1,0);
  return 1;
}

