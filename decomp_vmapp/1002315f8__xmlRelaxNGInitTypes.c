
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlRelaxNGInitTypes(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  int local_1c;
  
  if (DAT_1011b8918 == 0) {
    DAT_1011b8920 = _xmlHashCreate(10);
    if (DAT_1011b8920 == (xmlHashTablePtr)0x0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Failed to allocate sh table for Relax-NG types\n");
      local_1c = -1;
    }
    else {
      FUN_100231453("http://www.w3.org/2001/XMLSchema-datatypes",0,FUN_100230cf0,FUN_100230d40,
                    FUN_1002310ad,FUN_100230de8,FUN_100231092);
      FUN_100231453(PTR_s_http___relaxng_org_ns_structure__1011151b0,0,FUN_10023121e,FUN_100231284,
                    FUN_1002312f6,0,0);
      DAT_1011b8918 = 1;
      local_1c = 0;
    }
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}

