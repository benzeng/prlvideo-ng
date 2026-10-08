
/* Function Stack Size: 0x20 bytes */

void PDDeviceBarViewContaner::setInstrinsicSize_(ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  
  lVar1 = _instrinsicSize;
  *(double *)(param_1 + _instrinsicSize) = param_3.field0_0x0;
  *(double *)(param_1 + 8 + lVar1) = param_3.field1_0x8;
  return;
}

