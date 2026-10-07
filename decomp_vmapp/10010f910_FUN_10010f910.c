
void FUN_10010f910(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  if (DAT_1011b76a0 == 0) {
    lVar1 = FUN_1007784a0();
    lVar2 = 0;
    LOCK();
    if (DAT_1011b76a0 != 0) {
      lVar2 = DAT_1011b76a0;
      lVar1 = DAT_1011b76a0;
    }
    DAT_1011b76a0 = lVar1;
    UNLOCK();
    if ((lVar2 == 0) && (2 < DAT_1011b55f8)) {
      FUN_1008e3970("","vm",3,"tsc determined to tick at %llu Hz",DAT_1011b76a0);
    }
    *param_2 = DAT_1011b76a0;
    *param_3 = 100000000;
    FUN_1008e3970("","vm",0,"[GetTscAndBusHz] TSC %llu Hz, Bus %llu Hz",DAT_1011b76a0,100000000);
    return;
  }
  *param_2 = DAT_1011b76a0;
  *param_3 = 100000000;
  return;
}

