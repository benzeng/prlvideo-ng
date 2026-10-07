
void FUN_10024f26f(long param_1,long param_2)

{
  xmlOutputBufferPtr out;
  int *piVar1;
  int local_2c;
  long local_28;
  
  if (param_2 != 0) {
    out = *(xmlOutputBufferPtr *)(param_1 + 0x28);
    for (local_28 = param_2; local_28 != 0; local_28 = *(long *)(local_28 + 0x30)) {
      if (*(int *)(param_1 + 0x40) != 0) {
        piVar1 = ___xmlIndentTreeOutput();
        if ((*piVar1 != 0) && (*(int *)(local_28 + 8) == 1)) {
          local_2c = *(int *)(param_1 + 0x3c);
          if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x3c)) {
            local_2c = *(int *)(param_1 + 0x84);
          }
          _xmlOutputBufferWrite(out,*(int *)(param_1 + 0x88) * local_2c,(char *)(param_1 + 0x44));
        }
      }
      FUN_10024f355(param_1,local_28);
      if (*(int *)(param_1 + 0x40) != 0) {
        _xmlOutputBufferWrite(out,1,"\n");
      }
    }
  }
  return;
}

