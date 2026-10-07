
void _xmlXPathRoundFunction(long param_1,int param_2)

{
  int iVar1;
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
        iVar1 = _xmlXPathIsNaN(*(double *)(*(long *)(param_1 + 0x20) + 0x18));
        if ((((iVar1 == 0) &&
             (iVar1 = _xmlXPathIsInf(*(double *)(*(long *)(param_1 + 0x20) + 0x18)), iVar1 != 1)) &&
            (iVar1 = _xmlXPathIsInf(*(double *)(*(long *)(param_1 + 0x20) + 0x18)), iVar1 != -1)) &&
           (*(double *)(*(long *)(param_1 + 0x20) + 0x18) != 0.0)) {
          dVar2 = (double)_fmod(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),DAT_100b40bd0);
          dVar2 = (double)(int)dVar2 + (*(double *)(*(long *)(param_1 + 0x20) + 0x18) - dVar2);
          if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) < 0.0) {
            if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) < dVar2 - DAT_100b59ac0) {
              *(double *)(*(long *)(param_1 + 0x20) + 0x18) = dVar2 - DAT_100b44c90;
            }
            else {
              *(double *)(*(long *)(param_1 + 0x20) + 0x18) = dVar2;
            }
            if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) == 0.0) {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = DAT_1011b7e98;
            }
          }
          else if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) < DAT_100b59ac0 + dVar2) {
            *(double *)(*(long *)(param_1 + 0x20) + 0x18) = dVar2;
          }
          else {
            *(double *)(*(long *)(param_1 + 0x20) + 0x18) = DAT_100b44c90 + dVar2;
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

