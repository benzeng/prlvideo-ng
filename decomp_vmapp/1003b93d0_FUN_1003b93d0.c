
undefined8 FUN_1003b93d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," ");
  FUN_1003b94a0(param_1,lVar1);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"[");
  FUN_1003b94a0(param_1,lVar1 + 0x40);
  if (*(short *)(param_2 + 0x52) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," + %d");
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"]");
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar1,*(undefined1 *)(lVar1 + 0x30));
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
  FUN_1003b94a0(param_1,lVar1 + 0x80);
  return 0;
}

