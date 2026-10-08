
undefined8 FUN_100c68710(long param_1,long param_2)

{
  FUN_100c05dd0(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_100c05dd0(param_2 + 8,*(long *)(param_1 + 0x78) + 0x80);
  _memcpy((void *)((long)*(void **)(param_1 + 0x78) + 0x100),*(void **)(param_1 + 0x78),0x80);
  return 1;
}

