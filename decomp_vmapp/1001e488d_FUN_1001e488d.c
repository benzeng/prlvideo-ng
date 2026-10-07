
int FUN_1001e488d(xmlExpCtxtPtr param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  xmlExpNodePtr expr;
  xmlExpNodePtr expr_00;
  int local_1c;
  
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if ((*(int *)(param_2 + 8) != -1) &&
     (((*(byte *)(param_2 + 1) & 1) == 0 || ((*(byte *)(param_3 + 1) & 1) != 0)))) {
    for (local_1c = 1; local_1c <= *(int *)(param_2 + 8); local_1c = local_1c + 1) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      expr = (xmlExpNodePtr)FUN_1001e3261(param_1,5,param_3,0,0,local_1c,local_1c);
      if (expr == (xmlExpNodePtr)0x0) {
        return -1;
      }
      iVar1 = FUN_1001e4830(expr,param_2);
      if (iVar1 == 0) {
        _xmlExpFree(param_1,expr);
      }
      else {
        expr_00 = (xmlExpNodePtr)FUN_1001e4a72(param_1,expr,param_2);
        if (expr_00 == (xmlExpNodePtr)0x0) {
          _xmlExpFree(param_1,expr);
          return -1;
        }
        if ((expr_00 != (xmlExpNodePtr)_forbiddenExp) && (((byte)expr_00[1] & 1) != 0)) {
          if (param_5 == (undefined8 *)0x0) {
            _xmlExpFree(param_1,expr_00);
          }
          else {
            *param_5 = expr_00;
          }
          if (param_4 == (undefined8 *)0x0) {
            _xmlExpFree(param_1,expr);
          }
          else {
            *param_4 = expr;
          }
          return local_1c;
        }
        _xmlExpFree(param_1,expr);
        _xmlExpFree(param_1,expr_00);
      }
    }
  }
  return 0;
}

