
undefined8 FUN_100ca7ef0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_100c5c0c0(param_3,"%*sPath Length Constraint: ",param_4,"");
  if (*param_2 == 0) {
    FUN_100c5c0c0(param_3,"infinite");
  }
  else {
    FUN_100c85590(param_3);
  }
  FUN_100c58a70(param_3,"\n");
  FUN_100c5c0c0(param_3,"%*sPolicy Language: ",param_4,"");
  FUN_100c74930(param_3,*(undefined8 *)param_2[1]);
  FUN_100c58a70(param_3,"\n");
  if ((*(long *)(param_2[1] + 8) != 0) && (*(long *)(*(long *)(param_2[1] + 8) + 8) != 0)) {
    FUN_100c5c0c0(param_3,"%*sPolicy Text: %s\n",param_4,"");
  }
  return 1;
}

