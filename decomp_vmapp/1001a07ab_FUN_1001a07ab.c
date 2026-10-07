
void FUN_1001a07ab(undefined8 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("node is NULL\n",1,0xd,(FILE *)*param_1);
    }
  }
  else {
    FUN_10019ffef(param_1,param_2);
    if (((*(int *)(param_2 + 8) != 0x12) && (*(long *)(param_2 + 0x18) != 0)) &&
       (*(int *)(param_2 + 8) != 5)) {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + 1;
      FUN_1001a0863(param_1,*(undefined8 *)(param_2 + 0x18));
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
    }
  }
  return;
}

