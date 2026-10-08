
void _xmlXPathDivValues(long param_1)

{
  int iVar1;
  xmlXPathObjectPtr val;
  double val_00;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPathErr(param_1,10);
  }
  else {
    val_00 = _xmlXPathCastToNumber(val);
    _xmlXPathFreeObject(val);
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathNumberFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathErr(param_1,0xb);
    }
    else {
      iVar1 = _xmlXPathIsNaN(val_00);
      if ((iVar1 == 0) &&
         (iVar1 = _xmlXPathIsNaN(*(double *)(*(long *)(param_1 + 0x20) + 0x18)), iVar1 == 0)) {
        if (((val_00 != 0.0) || (NAN(val_00))) || (iVar1 = FUN_1008d87aa(val_00), iVar1 == 0)) {
          if (val_00 == 0.0) {
            if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) == 0.0) {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNAN;
            }
            else if (0.0 < *(double *)(*(long *)(param_1 + 0x20) + 0x18)) {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathPINF;
            }
            else if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) < 0.0) {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNINF;
            }
          }
          else {
            *(double *)(*(long *)(param_1 + 0x20) + 0x18) =
                 *(double *)(*(long *)(param_1 + 0x20) + 0x18) / val_00;
          }
        }
        else if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) == 0.0) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNAN;
        }
        else if (0.0 < *(double *)(*(long *)(param_1 + 0x20) + 0x18)) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNINF;
        }
        else if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) < 0.0) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathPINF;
        }
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNAN;
      }
    }
  }
  return;
}

