
undefined8 FUN_10037e440(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_100385b50(*(undefined8 *)(param_1 + 8),
                (*(uint *)(lVar1 + 0x114) | 0x10) & *(uint *)(lVar1 + 0x110),
                *(int *)(param_2 + 0x8578) != 0,*(undefined1 *)(lVar1 + 0x118));
  return 0;
}

