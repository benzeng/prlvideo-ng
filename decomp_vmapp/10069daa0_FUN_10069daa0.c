
void FUN_10069daa0(long param_1)

{
  char *pcVar1;
  
  FUN_100697b10();
  FUN_1008e3970("","dimg",0,"CBat:");
  FUN_1008e3970("","dimg",0,"Parent image ptr: %p",*(undefined8 *)(param_1 + 0x30));
  FUN_1008e3970("","dimg",0,"Last file offset: %llu (0x%llX) bytes",*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x40) == '\0') {
    pcVar1 = "no";
  }
  else {
    pcVar1 = "yes";
  }
  FUN_1008e3970("","dimg",0,"Offsets page is dirty: %s",pcVar1);
  return;
}

