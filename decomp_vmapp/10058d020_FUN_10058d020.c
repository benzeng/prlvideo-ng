
void FUN_10058d020(long param_1)

{
  if (*(int *)(param_1 + 0x10d8) == 7) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x80))(*(long **)(param_1 + 0x18),param_1 + 0x28);
  }
  else if (*(int *)(param_1 + 0x10d8) == 5) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x80))(*(long **)(param_1 + 0x10),param_1 + 0x880);
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: unknown request state %u");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xd21,
                  "AdevSubmitCallback");
  }
  FUN_10056e070(*(undefined8 *)(*(long *)(param_1 + 8) + 0x70));
  return;
}

