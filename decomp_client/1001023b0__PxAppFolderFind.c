
undefined8 _PxAppFolderFind(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  bad_alloc *this;
  long lVar2;
  
  puVar1 = _malloc(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    this = (bad_alloc *)___cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_1021e1780,PTR__bad_alloc_1021e1610);
  }
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = FUN_1001024f0;
  FUN_100102210(param_1,puVar1 + 2);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    lVar2 = (long)puVar1 + 0x11;
  }
  else {
    lVar2 = puVar1[4];
  }
  puVar1[1] = lVar2;
  *param_2 = (long)(puVar1 + 1);
  return 0;
}

