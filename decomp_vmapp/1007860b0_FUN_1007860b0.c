
bool FUN_1007860b0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((int)param_1 != 0) {
    lVar2 = _IORegistryEntryCreateCFProperty
                      (param_1,&cf_Removable,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0);
    if (lVar2 == 0) {
      FUN_1008e3970("","HostUtils",0,"Error creating property for removable property");
    }
    else {
      cVar1 = _CFBooleanGetValue(lVar2);
      bVar3 = cVar1 != '\0';
      _CFRelease(lVar2);
    }
  }
  return bVar3;
}

