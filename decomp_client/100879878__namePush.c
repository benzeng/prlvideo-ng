
int _namePush(long param_1,undefined8 param_2)

{
  long lVar1;
  int local_2c;
  
  if (param_1 == 0) {
    local_2c = -1;
  }
  else {
    if (*(int *)(param_1 + 300) <= *(int *)(param_1 + 0x128)) {
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) * 2;
      lVar1 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x130),(long)*(int *)(param_1 + 300) * 8);
      if (lVar1 == 0) {
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) / 2;
        _xmlErrMemory(param_1,0);
        return -1;
      }
      *(long *)(param_1 + 0x130) = lVar1;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = param_2;
    *(undefined8 *)(param_1 + 0x120) = param_2;
    local_2c = *(int *)(param_1 + 0x128);
    *(int *)(param_1 + 0x128) = local_2c + 1;
  }
  return local_2c;
}

