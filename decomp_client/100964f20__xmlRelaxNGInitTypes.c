
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _xmlRelaxNGInitTypes(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  int local_1c;
  
  if (DAT_102313698 == 0) {
    DAT_1023136a0 = _xmlHashCreate(10);
    if (DAT_1023136a0 == (xmlHashTablePtr)0x0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Failed to allocate sh table for Relax-NG types\n");
      local_1c = -1;
    }
    else {
      FUN_100964d7b("http://www.w3.org/2001/XMLSchema-datatypes",0,FUN_100964618,FUN_100964668,
                    FUN_1009649d5,FUN_100964710,FUN_1009649ba);
      FUN_100964d7b(PTR_s_http___relaxng_org_ns_structure__10227d2b0,0,FUN_100964b46,FUN_100964bac,
                    FUN_100964c1e,0,0);
      DAT_102313698 = 1;
      local_1c = 0;
    }
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}

