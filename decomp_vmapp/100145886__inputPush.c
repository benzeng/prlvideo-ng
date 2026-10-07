
int _inputPush(long param_1,long param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_1c = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x40)) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * 2;
      uVar1 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x48),(long)*(int *)(param_1 + 0x44) * 8);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      if (*(long *)(param_1 + 0x48) == 0) {
        _xmlErrMemory(param_1,0);
        return 0;
      }
    }
    *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8) = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    local_1c = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = local_1c + 1;
  }
  return local_1c;
}

