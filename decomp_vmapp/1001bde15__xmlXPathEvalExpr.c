
void _xmlXPathEvalExpr(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = FUN_1001bd8cd(param_1[3],param_1[1]);
    if (lVar1 == 0) {
      FUN_1001b5e24(param_1);
    }
    else {
      if (param_1[7] != 0) {
        _xmlXPathFreeCompExpr((xmlXPathCompExprPtr)param_1[7]);
      }
      param_1[7] = lVar1;
      if (*param_1 != 0) {
        while (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
    }
    if ((int)param_1[2] == 0) {
      FUN_1001bd477(param_1);
    }
  }
  return;
}

