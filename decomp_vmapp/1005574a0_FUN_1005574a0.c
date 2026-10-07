
void FUN_1005574a0(long param_1,uint param_2,char param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(long *)(param_1 + 0x78) + (ulong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (param_3 != '\0') {
    QWaitCondition::wakeAll();
    return;
  }
  return;
}

