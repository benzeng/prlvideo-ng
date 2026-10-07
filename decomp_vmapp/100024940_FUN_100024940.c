
undefined8 FUN_100024940(long param_1,byte param_2)

{
  undefined8 uVar1;
  uint local_c;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar1 = 0;
  }
  else {
    local_c = (uint)param_2;
    uVar1 = FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),5,&local_c,4,1,1);
  }
  return uVar1;
}

