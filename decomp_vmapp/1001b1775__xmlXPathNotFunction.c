
void _xmlXPathNotFunction(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 2)) {
        _xmlXPathBooleanFunction(param_1,1);
      }
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 2)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        *(uint *)(*(long *)(param_1 + 0x20) + 0x10) =
             (uint)(*(int *)(*(long *)(param_1 + 0x20) + 0x10) == 0);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

