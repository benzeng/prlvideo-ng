
undefined8 * FUN_1006d8290(undefined8 *param_1)

{
  int *piVar1;
  
  if (DAT_1011ccaf0 == '\0') {
    QMutex::lock();
    if (DAT_1011ccaf0 == '\0') {
      FUN_1006d85c0();
    }
    QMutex::unlock();
    if (DAT_1011ccaf0 == '\0') {
      FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","ms_bSBAModeDetected",
                    "ParallelsDirs.cpp",0x128,"getSingleBundlePath");
    }
  }
  piVar1 = DAT_1011ccaf8;
  *param_1 = DAT_1011ccaf8;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

