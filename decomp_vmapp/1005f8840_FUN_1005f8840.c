
void FUN_1005f8840(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1005b1b60(*(undefined8 *)(param_1 + 0x58));
  for (lVar1 = *(long *)(param_2 + 0x38); lVar1 != param_2 + 0x30; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_1005f8840(param_1,lVar1 + 0x10);
  }
  return;
}

