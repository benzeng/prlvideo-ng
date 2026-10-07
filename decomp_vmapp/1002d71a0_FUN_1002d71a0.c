
void FUN_1002d71a0(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5)

{
  undefined8 in_RAX;
  
  _snprintf((char *)(param_1 + 0xcf),0x28,"%s:%02x.%02x%c",param_2,(ulong)param_3,(ulong)param_4,
            CONCAT44((int)((ulong)in_RAX >> 0x20),(int)"csbi"[param_5 & 3]));
  *(undefined1 *)(param_1 + 0xf6) = 0;
  return;
}

