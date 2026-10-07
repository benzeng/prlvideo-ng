
undefined8 FUN_1003b9280(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," ");
  FUN_1003b94a0(param_1,lVar1);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),", ");
  FUN_1003b94a0(param_1,lVar1 + 0x40);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"[");
  pcVar2 = "";
  if ((*(short *)(param_2 + 0x50) != 0) &&
     (((*(byte *)(lVar1 + 0xb9) & 1) != 0 || ((*(byte *)(lVar1 + 0xb5) & 1) == 0)))) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%d * ");
    FUN_1003b94a0(param_1,lVar1 + 0x80);
    pcVar2 = " + ";
  }
  if (((*(byte *)(lVar1 + 0xb9) & 1) != 0) || ((*(byte *)(lVar1 + 0xf5) & 1) == 0)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),pcVar2);
    FUN_1003b94a0(param_1,lVar1 + 0xc0);
    pcVar2 = " + ";
  }
  if (*(short *)(param_2 + 0x52) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s%d",pcVar2);
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"]");
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar1 + 0x40,0xf);
  return 0;
}

