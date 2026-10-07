
undefined1 FUN_100756bc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (param_4 < 0x40) {
    uVar1 = 0;
    FUN_1008e3970("","dbgdump",0,"ELF header len > buf_size");
  }
  else {
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    *(undefined4 *)param_3 = 0x464c457f;
    *(undefined1 *)((long)param_3 + 4) = 2;
    *(undefined1 *)((long)param_3 + 5) = 1;
    *(undefined1 *)((long)param_3 + 6) = 1;
    *(undefined1 *)((long)param_3 + 7) = 0;
    *(undefined2 *)(param_3 + 2) = 4;
    uVar2 = 3;
    if (DAT_1011bf918 == '\0') {
      uVar2 = 0x3e;
    }
    *(undefined2 *)((long)param_3 + 0x12) = uVar2;
    *(undefined4 *)((long)param_3 + 0x14) = 1;
    param_3[4] = DAT_1011bf950;
    *(undefined4 *)((long)param_3 + 0x34) = 0x380040;
    *(undefined2 *)(param_3 + 7) = DAT_1011bf958;
    *(undefined2 *)((long)param_3 + 0x3c) = DAT_1011bf980;
    param_3[5] = DAT_1011bf978;
    *(undefined2 *)((long)param_3 + 0x3a) = 0x40;
    *(undefined2 *)((long)param_3 + 0x3e) = 1;
    uVar1 = FUN_1007567e0();
  }
  return uVar1;
}

