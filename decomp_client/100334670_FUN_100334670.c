
bool FUN_100334670(void)

{
  bool bVar1;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int in_stack_00000020;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  
  if ((int)in_stack_00000010 == (int)in_stack_00000038) {
    if ((int)in_stack_00000018 == (int)in_stack_00000040) {
      if ((int)((ulong)in_stack_00000018 >> 0x20) == (int)((ulong)in_stack_00000040 >> 0x20)) {
        if (in_stack_00000020 == in_stack_00000048) {
          bVar1 = false;
          if ((iStack000000000000000c == iStack0000000000000034) &&
             ((int)((ulong)in_stack_00000010 >> 0x20) == (int)((ulong)in_stack_00000038 >> 0x20))) {
            bVar1 = iStack0000000000000008 == iStack0000000000000030;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

