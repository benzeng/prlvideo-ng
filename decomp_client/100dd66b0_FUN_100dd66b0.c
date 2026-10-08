
bool FUN_100dd66b0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((int)param_1 != 0) {
    lVar2 = _IORegistryEntryCreateCFProperty
                      (param_1,&cf_Removable,*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
    if (lVar2 == 0) {
      FUN_100df99c0("","HostUtils",0,"Error creating property for removable property");
    }
    else {
      cVar1 = _CFBooleanGetValue(lVar2);
      bVar3 = cVar1 != '\0';
      _CFRelease(lVar2);
    }
  }
  return bVar3;
}

