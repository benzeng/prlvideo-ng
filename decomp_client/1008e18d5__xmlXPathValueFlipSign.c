
void _xmlXPathValueFlipSign(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathNumberFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathErr(param_1,0xb);
    }
    else {
      iVar1 = _xmlXPathIsNaN(*(double *)(*(long *)(param_1 + 0x20) + 0x18));
      if (iVar1 == 0) {
        iVar1 = _xmlXPathIsInf(*(double *)(*(long *)(param_1 + 0x20) + 0x18));
        if (iVar1 == 1) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNINF;
        }
        else {
          iVar1 = _xmlXPathIsInf(*(double *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 == -1) {
            *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathPINF;
          }
          else if (*(double *)(*(long *)(param_1 + 0x20) + 0x18) == 0.0) {
            iVar1 = FUN_1008d87aa(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
            if (iVar1 == 0) {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = DAT_102312c18;
            }
            else {
              *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
            }
          }
          else {
            *(ulong *)(*(long *)(param_1 + 0x20) + 0x18) =
                 DAT_101c9be10 ^ *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
          }
        }
      }
      else {
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNAN;
      }
    }
  }
  return;
}

