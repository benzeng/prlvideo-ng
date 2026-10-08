
undefined8 * FUN_100d806d0(undefined8 *param_1)

{
  int *piVar1;
  
  if (DAT_102311978 == '\0') {
    QMutex::lock();
    if (DAT_102311978 == '\0') {
      FUN_100d80a00();
    }
    QMutex::unlock();
    if (DAT_102311978 == '\0') {
      FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","ms_bSBAModeDetected",
                    "ParallelsDirs.cpp",0x128,"getSingleBundlePath");
    }
  }
  piVar1 = DAT_102311980;
  *param_1 = DAT_102311980;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

