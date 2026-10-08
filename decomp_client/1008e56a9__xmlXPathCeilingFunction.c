
void _xmlXPathCeilingFunction(long param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
        _xmlXPathNumberFunction(param_1,1);
      }
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        dVar1 = (double)_fmod(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),DAT_101c9ba50);
        dVar2 = (double)(int)dVar1 + (*(double *)(*(long *)(param_1 + 0x20) + 0x18) - dVar1);
        dVar1 = *(double *)(*(long *)(param_1 + 0x20) + 0x18);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
          if (0.0 < *(double *)(*(long *)(param_1 + 0x20) + 0x18)) {
            *(double *)(*(long *)(param_1 + 0x20) + 0x18) = DAT_100e11050 + dVar2;
          }
          else if (((0.0 <= *(double *)(*(long *)(param_1 + 0x20) + 0x18)) || (dVar2 != 0.0)) ||
                  (NAN(dVar2))) {
            *(double *)(*(long *)(param_1 + 0x20) + 0x18) = dVar2;
          }
          else {
            *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = DAT_102312c18;
          }
        }
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

