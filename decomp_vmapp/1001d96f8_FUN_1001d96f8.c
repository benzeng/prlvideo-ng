
void FUN_1001d96f8(FILE *param_1,long param_2)

{
  int local_c;
  
  _fwrite(" atom: ",1,7,param_1);
  if (param_2 == 0) {
    _fwrite("NULL\n",1,5,param_1);
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      _fwrite("not ",1,4,param_1);
    }
    FUN_1001d8db4(param_1,*(undefined4 *)(param_2 + 4));
    FUN_1001d9528(param_1,*(undefined4 *)(param_2 + 8));
    if (*(int *)(param_2 + 8) == 8) {
      _fprintf(param_1,"%d-%d ",(ulong)*(uint *)(param_2 + 0xc),(ulong)*(uint *)(param_2 + 0x10));
    }
    if (*(int *)(param_2 + 4) == 5) {
      _fprintf(param_1,"\'%s\' ",*(undefined8 *)(param_2 + 0x18));
    }
    if (*(int *)(param_2 + 4) == 2) {
      _fprintf(param_1,"char %c\n",(ulong)*(uint *)(param_2 + 0x2c));
    }
    else if (*(int *)(param_2 + 4) == 3) {
      _fprintf(param_1,"%d entries\n",(ulong)*(uint *)(param_2 + 0x44));
      for (local_c = 0; local_c < *(int *)(param_2 + 0x44); local_c = local_c + 1) {
        FUN_1001d9675(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + (long)local_c * 8));
      }
    }
    else if (*(int *)(param_2 + 4) == 4) {
      _fprintf(param_1,"start %d end %d\n",(ulong)*(uint *)(*(long *)(param_2 + 0x30) + 0xc),
               (ulong)*(uint *)(*(long *)(param_2 + 0x38) + 0xc));
    }
    else {
      _fputc(10,param_1);
    }
  }
  return;
}

