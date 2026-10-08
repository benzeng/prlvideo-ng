
bool FUN_1000ad140(undefined8 param_1)

{
  long lVar1;
  short sVar2;
  undefined1 local_b8 [76];
  int local_6c;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  sVar2 = _FSGetCatalogInfo(param_1,0x800,local_b8,0,0,0);
  if (sVar2 != 0) {
    FUN_100df99c0("SGAC","prl_client_app",0,"FSGetCatalogInfo() failed with error %i",(int)sVar2);
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar2 == 0 && local_6c + 0xafacbeccU < 3;
}

