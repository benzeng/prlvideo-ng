
void FUN_1001a1127(undefined8 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("DTD is NULL\n",1,0xc,(FILE *)*param_1);
    }
  }
  else {
    FUN_10019eec7(param_1,param_2);
    if (*(long *)(param_2 + 0x18) == 0) {
      _fwrite("    DTD is empty\n",1,0x11,(FILE *)*param_1);
    }
    else {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + 1;
      FUN_1001a0863(param_1,*(undefined8 *)(param_2 + 0x18));
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
    }
  }
  return;
}

