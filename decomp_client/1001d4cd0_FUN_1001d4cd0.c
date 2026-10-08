
void FUN_1001d4cd0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      if (**(int **)(param_4 + 0x10) != 3) goto switchD_1001d4ced_caseD_3;
      break;
    case 1:
      FUN_1001d3dc0(param_1,1);
      return;
    case 2:
      FUN_1001d3dc0(param_1,**(undefined1 **)(param_4 + 8));
      return;
    case 3:
switchD_1001d4ced_caseD_3:
      FUN_1001d3dc0(param_1,0);
      return;
    }
  }
  return;
}

